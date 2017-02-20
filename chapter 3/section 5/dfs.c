#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int count = 0;

char V[256] = { 0 };

typedef struct Node{  
	char point = 0;
	int vertex = 0;
	Node *nextNode = NULL;
}Node;

typedef struct Graph {
	char point = 0;
	int n = 0; // node size
	Node nodes[] = {};
}Graph;


void dfs(Node *node) {
	count++;
	node->vertex = count;
	while (node->nextNode != NULL)
	{
		if (V[node->point] == 0)
		{
			dfs(node);
		}
	}
}

void DFS(Graph *graph) {
	count = 0;
	int i = 0;
	for (i; i < graph->n; i++)
	{
		if (V[graph->nodes[i].point] == 0)
		{
			dfs(&graph->nodes[i]);
		}
	}

}




int main(int args, char**argv) {

	Graph *graph = (Graph *)malloc(sizeof(Graph));

	Node *nodeA = (Node *)malloc(sizeof(Node));
	nodeA->point = 'a';
	nodeA->nextNode = (Node *)malloc(sizeof(Node));
	nodeA->nextNode->point = 'c';
	nodeA->nextNode->nextNode = (Node *)malloc(sizeof(Node));
	nodeA->nextNode->nextNode->point = 'd';

	Node *nodeB = (Node *)malloc(sizeof(Node));
	nodeB->point = 'b';
	nodeB->nextNode = (Node *)malloc(sizeof(Node));
	nodeB->nextNode->point = 'c';
	nodeB->nextNode->nextNode = (Node *)malloc(sizeof(Node));
	nodeB->nextNode->nextNode->point = 'f';

	Node *nodeC = (Node *)malloc(sizeof(Node));
	nodeC->point = 'c';
	nodeC->nextNode = (Node *)malloc(sizeof(Node));
	nodeC->nextNode->point = 'a';
	nodeC->nextNode->nextNode = (Node *)malloc(sizeof(Node));
	nodeC->nextNode->nextNode->point = 'b';
	nodeC->nextNode->nextNode->nextNode = (Node *)malloc(sizeof(Node));
	nodeC->nextNode->nextNode->nextNode->point = 'e';

	Node *nodeD = (Node *)malloc(sizeof(Node));
	nodeD->point = 'd';
	nodeD->nextNode = (Node *)malloc(sizeof(Node));
	nodeD->nextNode->point = 'a';
	nodeD->nextNode->nextNode = (Node *)malloc(sizeof(Node));
	nodeD->nextNode->nextNode->point = 'e';


	Node *nodeE = (Node *)malloc(sizeof(Node));
	nodeE->point = 'e';
	nodeE->nextNode = (Node *)malloc(sizeof(Node));
	nodeE->nextNode->point = 'c';
	nodeE->nextNode->nextNode = (Node *)malloc(sizeof(Node));
	nodeE->nextNode->nextNode->point = 'd';
	nodeE->nextNode->nextNode->nextNode = (Node *)malloc(sizeof(Node));
	nodeE->nextNode->nextNode->nextNode->point = 'f';
	
	
	Node *nodeF = (Node *)malloc(sizeof(Node));
	nodeF->point = 'f';
	nodeF->nextNode = (Node *)malloc(sizeof(Node));
	nodeF->nextNode->point = 'b';
	nodeF->nextNode->nextNode = (Node *)malloc(sizeof(Node));
	nodeF->nextNode->nextNode->point = 'e';
}
