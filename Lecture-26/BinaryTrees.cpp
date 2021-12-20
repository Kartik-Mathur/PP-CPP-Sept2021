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
	// If the data is valid then create
	// the root node
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

int CountNodes(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	return CountNodes(root->left) + CountNodes(root->right) + 1;
}

int height(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);

	return max(left_height, right_height) + 1;
}

int Diameter(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	// 1. Diameter is via root node
	int op1 = height(root->left) + height(root->right);
	// 2. Diameter is in LST
	int op2 = Diameter(root->left);
	// 3. Diameter is in RSt
	int op3 = Diameter(root->right);

	return max(op1, max(op2, op3));
}

// FAST DIAMETER
class Pair {
public:
	int diameter;
	int height;
};

Pair fastDiameter(node* root) {
	// base case
	if (!root) {
		Pair p;
		p.height = p.diameter = 0;
		return p;
	}

	// recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;
	// Diameter of bigger tree
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;

	p.diameter = max(op1, max(op2, op3));
	return p;
}


int main() {

	node* root = createTree();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << "Number of nodes: " << CountNodes(root) << endl;
	cout << "Height of Tree: " << height(root) << endl;
	cout << "Diameter of Tree: " << Diameter(root) << endl;

	Pair ans = fastDiameter(root);
	cout << "Fast Height: " << ans.height << endl;
	cout << "Fast Diameter: " << ans.diameter << endl;
	return 0;
}
















