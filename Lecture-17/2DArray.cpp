// 2DArray.cpp
#include <iostream>
using namespace std;

int main() {

	int row, col;
	cin >> row >> col;

	int **arr = new int*[row];
	for (int i = 0 ; i < row ; i++) {
		arr[i] = NULL;
	}

	for (int i = 0 ; i < row ; i++) {
		arr[i] = new int[col];
	}

	int number = 1;
	for (int i = 0 ; i < row ; i++) {
		for (int j = 0 ; j < col ; j++) {
			*(*(arr + i) + j) = number++;
		}
	}

	for (int i = 0 ; i < row ; i++) {
		for (int j = 0 ; j < col ; j++) {
			cout << *(*(arr + i) + j) << " ";
		}
		cout << endl;
	}

	for (int i = 0 ; i < row ; i++) {
		delete [] arr[i];
	}

	delete []arr;
	arr = NULL;






	return 0;
}
















