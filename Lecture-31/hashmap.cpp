// hashmap.cpp
#include <iostream>
using namespace std;

class node {
public:
	string key;
	int value;
	node* next;
	node(string s, int v) {
		key = s;
		value = v;
		next = NULL;
	}
};

class hashmap {
	int hash_function(string key) {
		int sum = 0;
		int mul = 1;
		for (int i = 0; key[i] != '\0'; ++i)
		{
			sum = sum + ((key[i] % ts) * (mul % ts)) % ts;
			sum %= ts;
			mul *= 17;
			mul %= ts;
		}
		return sum % ts;
	}

	void rehashing() {
		node** oldh = h;
		int oldts = ts;
		h = new node*[2 * ts];
		ts = 2 * ts;
		for (int i = 0; i < ts; ++i)
		{
			h[i] = NULL;
		}

		cs = 0;

		for (int i = 0; i < oldts; ++i)
		{
			node* head = oldh[i];
			while (head) {
				string k = head->key;
				int v = head->value;
				insert(k, v);

				head = head->next;
			}
		}
	}

public:
	node** h;
	int ts;
	int cs; // for rehashing

	hashmap(int s = 7) {
		h = new node*[s];
		ts = s;
		for (int i = 0; i < ts; ++i)
		{
			h[i] = NULL;
		}
	}

	void insert(string key, int value) {
		// Find the hash index
		int indx = hash_function(key);
		node* n = new node(key, value);

		n->next = h[indx];
		h[indx] = n;
		cs++;

		float load_factor = (cs / (ts * 1.0));
		if (load_factor > 0.6) {
			rehashing();
		}
	}

	void print() {

		for (int i = 0; i < ts; ++i)
		{
			node* head = h[i];
			cout << i << "--> ";
			while (head) {
				string k = head->key;
				int v = head->value;
				cout << "(" << k << ", " << v << ") ";
				head = head->next;

			}
			cout << endl;
		}
	}

};

int main() {

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Apple", 120);
	h.insert("Kiwi", 50);
	h.insert("Banana", 80);
	h.insert("Papaya", 180);
	// h.insert("Papaya", 180);

	h.print();



	return 0;
}
















