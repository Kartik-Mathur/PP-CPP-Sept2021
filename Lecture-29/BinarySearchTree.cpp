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

void printBSTinRange(node* root, int k1, int k2) {
	// base case
	if (!root) {
		return;
	}

	// recursive case
	printBSTinRange(root->left, k1, k2);
	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}
	printBSTinRange(root->right, k1, k2);
}

node* searchBST(node* root, int key) {
	// base case
	if (!root) {
		return NULL;
	}

	// recursive case
	if (root->data == key) {
		return root;
	}
	else if (root->data > key) {
		return searchBST(root->left, key);
	}
	else {
		return searchBST(root->right, key);
	}
}

bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX) {
	// base case
	if (!root) {
		return true;
	}

	// recursive case
	if (root->data >= mi and root->data <= mx
	        and isBST(root->left, mi, root->data)
	        and isBST(root->right, root->data, mx)
	   ) {
		return true;
	}
	else {
		return false;
	}
}

int height(node* root) {
	if (!root) {
		return 0;
	}

	return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(node* root) {
	// base case
	if (!root) {
		return true;
	}

	int left_height = height(root->left);
	int right_height = height(root->right);

	if (abs(left_height - right_height) <= 1
	        and isBalanced(root->left)
	        and isBalanced(root->right)
	   ) {
		return true;
	}
	return false;
}

class Pair {
public:
	int height;
	bool balanced;
};

Pair isBalancedFast(node* root) {
	// base case
	if (!root) {
		Pair p;
		p.height = 0;
		p.balanced = true;
		return p;
	}

	// recursive case
	Pair left = isBalancedFast(root->left);
	Pair right = isBalancedFast(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;

	if (left.balanced and right.balanced
	        and abs(left.height - right.height) <= 1) {
		p.balanced = true;
	}
	else {
		p.balanced = false;
	}
	return p;
}

class linkedList {
public:
	node* head;
	node* tail;
};

linkedList BSTtoLL(node* root) {
	// base case
	if (!root) {
		linkedList l;
		l.head = l.tail = NULL;
		return l;
	}

	// recursive case
	// 1. root->left == NULL and root->right == NULL
	if (!root->left and !root->right) {
		linkedList l;
		l.head = l.tail = root;
		return l;
	}//2. root->left != NULL and root->right == NULL
	else if (root->left and !root->right) {
		linkedList left = BSTtoLL(root->left);
		left.tail->right = root;
		linkedList l;
		l.head = left.head;
		l.tail = root;
		return l;
	}






	//3. root->left == NULL and root->right != NULL
	else if (!root->left and root->right) {
		linkedList right = BSTtoLL(root->right);
		root->right = right.head;
		linkedList l;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else {
		//4. root->left != NULL and root->right != NULL
		linkedList left = BSTtoLL(root->left);
		linkedList right = BSTtoLL(root->right);
		linkedList l;
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "END" << endl;
}

int main() {

	node* root = createBST();
	linkedList l = BSTtoLL(root);
	printLL(l.head);
	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;
	// levelOrderTraversal(root);
	// printBSTinRange(root, 3, 6);
	// node* ans = searchBST(root, 100);
	// if (ans == NULL) {
	// 	cout << endl << "Not Found" << endl;
	// }
	// else {
	// 	cout << endl << "Key Found" << endl;
	// }
	// if (isBST(root)) {
	// 	cout << "BST Hai" << endl;
	// }
	// else {
	// 	cout << "BST nhi hai" << endl;
	// }
	// if (isBalanced(root)) {
	// 	cout << "Balanced" << endl;
	// }
	// else {
	// 	cout << "Not Balanced" << endl;
	// }

	// Pair p = isBalancedFast(root);
	// if (p.balanced) {
	// 	cout << "Balanced Hai" << endl;
	// }
	// else {
	// 	cout << "Balanced Nhi hai" << endl;
	// }

	return 0;
}
















