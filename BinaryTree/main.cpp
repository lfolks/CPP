/*
 * Author: Lloyd Folks
 */
#include <iostream>
using namespace std;

// Create Binary Tree structure
struct Node{
	int data;
	struct Node* left, *right;
	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};

// Print InOrder of the tree
void printInorder(struct Node* node){
	if (node == NULL)
		return;

	printInorder(node->left);
	cout << node->data << " ";
	printInorder(node->right);
}

// Print PreOrder of the Tree
void printPreorder(struct Node* node){
	if (node == NULL)
		return;

	cout << node->data << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

// Print PostOrder of the tree
void printPostorder(struct Node* node){
	if (node == NULL)
		return;

	printPostorder(node->left);
	printPostorder(node->right);
	cout << node->data << " ";
} 

int main(){
	struct Node*root = new Node(25);
	root->left = new Node(145);
	root->right = new Node(15);
	root->left->left = new Node(7);
	root->left->right = new Node(31);

	cout<<"InOrder tree traversal:"<<endl;
	printInorder(root);
	cout<<endl<<endl<<"PreOrder tree traversal:"<<endl;
	printPreorder(root);
	cout<<endl<<"\nPostOrder tree traversal:"<<endl; 
	printPostorder(root); 

	return 0; 
} 

