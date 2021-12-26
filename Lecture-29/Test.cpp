#include <iostream>
#include <queue>
using namespace std;

// 8 3 10 1 6 14 4 7 13 -1

class node {
public:
	int data;
	node* left, * right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int data) {
	// base case
	if (!root) {
		root = new node(data);
		return root;
	}

	// recursive case
	if (data > root->data) { // 8 3 10 1 6 14 4 7 13 -1
		root->right = insertInBST(root->right, data);
	}
	else {
		root->left = insertInBST(root->left, data);
	}
	return root;
}
node* createBST() {
	node* root = NULL;
	int data;
	cin >> data;

	while (data != -1) {
		root = insertInBST(root, data);

		cin >> data;
	}
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


void levelOrderTraversal(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();
		if (f != NULL) {
			cout << f->data << " ";
			if (f->left != NULL) q.push(f->left);
			if (f->right != NULL) q.push(f->right);
		}
		else {
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}
	}
}

int main() {

	node* root = createBST();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	levelOrderTraversal(root);

	return 0;
}
















