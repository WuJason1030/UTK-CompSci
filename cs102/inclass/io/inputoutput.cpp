#include <iostream>
using namespace std; 

int main() {
	string name1, name2;
	const int x = 41;
	const double pu = 3.14;
	
	cout << "hi" << endl;
	cout << "What is your name? ";
	cin >> name1 >> name2;
	cout << name1 << "22" << name2 << endl;

	printf("My username is: %-15s", name1.c_str());
}
