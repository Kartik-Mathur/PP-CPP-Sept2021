#include <iostream>
#include <unordered_map>
using namespace std;
class node {
public:
	char data;
	unordered_map<char, node*> h;
	bool isEnd;
	node(char c) {
		data = c;
		isEnd = false;
	}
};

class Trie {
	node* root;
public:
	Trie() {
		root = new node('\0');
	}

	void insertWord(char *word) {
		node* temp = root;
		for (int i = 0; word[i]; ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				node* n = new node(ch);
				temp->h[ch] = n;
				temp = n;
			}
			else {
				temp = temp->h[ch];
			}
		}
		temp->isEnd = true;
	}

	bool search(char *word) {
		node* temp = root;
		for (int i = 0 ; word[i] ; i++) {
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				return false;
			}
			temp = temp->h[ch];
		}

		return temp->isEnd;
	}
};

int main() {

	Trie t;
	char arr[100];
	strcpy(arr, "Hello");
	t.insertWord(arr);
	strcpy(arr, "Code");
	t.insertWord(arr);
	strcpy(arr, "Coder");
	t.insertWord(arr);
	strcpy(arr, "Coding");
	t.insertWord(arr);
	strcpy(arr, "Coding");
	t.insertWord(arr);

	char word[100];

	while (1) {
		cin >> word;
		if (t.search(word)) {
			cout << "Present" << endl;
		}
		else {
			cout << "Not Present" << endl;
		}
	}


	return 0;
}
















