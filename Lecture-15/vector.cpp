#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;
	// Initially hi hum vector ke andar buckets allot krdein taaki baar baar
	// Double na ho size
	v.resize(100);
	cout << v.size() << endl;
	int n = 6;
	for (int i = 0 ; i < n; i++) {
		// v.push_back(i);
		v[i] = i + 1;
		cout << "Capacity after inserting " << i << " is " << v.capacity() << endl;
	}
	// v.push_back(1);
	// v.push_back(2);
	// v.push_back(3);
	// v.push_back(4);
	// v.push_back(5);

	cout << "Capacity: " << v.capacity() << endl;
	for (int i = 0 ; i < n ; i++) {
		cout << v[i] << " ";
	}

	// cout << endl;
	// v.pop_back();

	// cout << "Capacity: " << v.capacity() << endl;
	// for (int i = 0 ; i < v.size() ; i++) {
	// 	cout << v[i] << " ";
	// }

	// cout << endl;


	return 0;
}
















