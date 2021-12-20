#include <iostream>
using namespace std;

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

class node {
public:
	int data;
	node* left;
	node* right;

	node(int d) {
		data = d;
		left = right = NULL;
	}
};
node* createTree() {
	// base case
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}
	// recursive case
	// If the data is valid then create the root node
	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();

	return root;
}

void preorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}


int main() {

	node* root = createTree();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;


	return 0;
}
















