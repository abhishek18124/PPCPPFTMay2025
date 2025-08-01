/*

given the pre-order traversal of a binary tree, output its level-order traversal.

Example
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 20 30 40 50 60 70
*/

#include<iostream>
#include<queue>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};

TreeNode* buildTree() {

	// 1. read the val of the root TreeNode
	int val;
	cin >> val;

	if (val == -1) {
		// construct an empty tree and return the pointer to its root
		return NULL;
	}

	// 2. construct the root TreeNode
	TreeNode* root = new TreeNode(val);

	// 3. read the preOrder traversal of the leftSubtree & build the leftSubtree
	root->left = buildTree();

	// 4. read the preOrder traversal of the rightSubtree & build the rightSubtree
	root->right = buildTree();

	return root;

}

void printLevelOrder(TreeNode* root) {

	// time : O(n), for each node we do 1 push, 1 front and 1 pop i.e. we've done 3n ops and each op is const time
	// space: n/2 due to queue ~ O(n)

	queue<TreeNode*> q;
	q.push(root);

	while (!q.empty()) {

		TreeNode* front = q.front();
		q.pop();

		// process the 'front' node

		cout << front->val << " ";

		if (front->left != NULL) {
			// front node has a leftChild so visit it
			q.push(front->left);
		}

		if (front->right != NULL) {
			// front node has a rightChild so visit it
			q.push(front->right);
		}

	}

}

int main() {

	TreeNode* root = buildTree();

	printLevelOrder(root);

	return 0;
}