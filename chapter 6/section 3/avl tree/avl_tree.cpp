#include <iostream>

using namespace std;

typedef struct Node
{
	int x;
	Node *left = NULL;
	Node *right = NULL;
} Node;

int balance_factor(Node *node) {
	int left_hight = 0, right_hight = 0;
	Node *root = node;

	while (node->left != NULL){
		left_hight++;
		node = node->left;
	}

	node = root;
	while (node->right != NULL){
		right_hight++;
		node = node->right;
	}

	return left_hight - right_hight;
}


int insert_node(Node *root, int v) {
	return 0;
}


int main()
{
	return 0;
}

