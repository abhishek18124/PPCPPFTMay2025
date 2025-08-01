#include<iostream>

using namespace std;

class TreeNode {

public :

	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

};

// time : O(n)

void printPreOrder(TreeNode* root) {

	// base case

	if (root == NULL) {
		cout << -1 << " ";
		return;
	}

	// recursive case

	// f(root) = print the preOrder traversal of the given tree

	// 1. process the root node

	cout << root->val << " ";

	// 2. ask your friend to print the preOrder traversal of the leftSubtree

	printPreOrder(root->left);

	// 3. ask your friend to print the preOrder traversal of the rightSubtree

	printPreOrder(root->right);

}


// time : O(n)

void printInOrder(TreeNode* root) {

	// base case

	if (root == NULL) {
		cout << -1 << " ";
		return;
	}

	// recursive case

	// f(root) = print the inOrder traversal of the given tree

	// 1. ask your friend to print the inOrder traversal of the leftSubtree

	printInOrder(root->left);

	// 2. process the root node

	cout << root->val << " ";

	// 3. ask your friend to print the inOrder traversal of the rightSubtree

	printInOrder(root->right);

}


// time : O(n)

void printPostOrder(TreeNode* root) {

	// base case

	if (root == NULL) {
		cout << -1 << " ";
		return;
	}

	// recursive case

	// f(root) = print the postOrder traversal of the given tree

	// 1. ask your friend to print the postOrder traversal of the leftSubtree

	printPostOrder(root->left);

	// 2. ask your friend to print the postOrder traversal of the rightSubtree

	printPostOrder(root->right);

	// 3. process the root node

	cout << root->val << " ";

}


int main() {

	TreeNode* root = NULL;

	root = new TreeNode(10);
	root->left = new TreeNode(20);
	root->right = new TreeNode(30);
	root->left->left = new TreeNode(40);
	root->left->right = new TreeNode(50);
	root->right->right = new TreeNode(60);
	root->left->right->left = new TreeNode(70);

	printPreOrder(root);

	cout << endl;

	printInOrder(root);

	cout << endl;

	printPostOrder(root);

	cout << endl;

	return 0;
}