#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void printVector(vector <int> &vec) {
	int size = vec.size();
	for (int i = 0; i < size; i++) {
		cout << " " << vec[i];
	}
	cout << endl;
}

void swap(vector <int> &vec, int i1, int i2) {
	
}

void bubbleSort(vector <int> &vec) {
	int a;
	int b;
	int swap;
	while (true) {
		swap = 0;
		for (int i = 0; i < vec.size() - 1; i++) {
			a = vec[i];
			b = vec[i + 1];
			if (a > b) {
				 vec[i] = vec[i + 1];
				 vec[i + 1] = a;
				 swap++;
			}
		}
		if (swap == 0) {
			break;
		}
	}
}

int main() {
	vector<int> data = {5, 1, 4, 3, 8}; //C++11 and onward
	
	cout << "Beginning Vector: \n"; 
	printVector(data);

	bubbleSort(data);

	cout << "Sorted Vector in Ascending Order: \n";
	printVector(data);
}
