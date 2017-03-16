// any.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>

using namespace std;

typedef struct Node
{
	int value;
	Node *left;
	Node *right;
} Node;


void preorder_tracersal(Node *root) {
	
	cout << root->value << endl;
	
	if (root->left != NULL)
	{
		preorder_tracersal(root->left);
	}
	
	if(root->right != NULL)
	{
		preorder_tracersal(root->right);
	}
}


void inorder_traversal(Node *root) {
	

	if (root->left != NULL)
	{
		preorder_tracersal(root->left);
	}

	cout << root->value << endl;

	if (root->right != NULL)
	{
		preorder_tracersal(root->right);
	}
}

void postorder_traversal(Node *root) {
	

	if (root->left != NULL)
	{
		preorder_tracersal(root->left);
	}

	if (root->right != NULL)
	{
		preorder_tracersal(root->right);
	}

	cout << root->value << endl;
}



int main()
{

    return 0;
}

