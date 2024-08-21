/*Introduction to File Streams
 * i.e. how to read/write from/to file instead of the console! 
 *
 * Steps: 
 * 0. #include <fstream>
 * 1. Opening a file
 *		a. decleare a file stream variable (ifstream for input file stream) 
 *		b. use .open() with the filename as the argument. .open() takes the STRING as an arg
 * 2. Do a check to make sure this ^ didn't fail
 *		use !fin.is_open and print error message and return early
 * 3. Extract info!
 * 4. Close the file stream*/
#include <iostream>
#include <fstream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
	/* I want to open the file called input.txt to read from it */
	ifstream fin;
	string filename = "input.txt";
	fin.open(filename);
	
	if (!fin.is_open()) {
		cerr << "could not open the file for reading input." << endl;
		return 1;
	}
	int data1, data2, data3;
	fin >> data1;
	cout << "first number is " << data1 << endl;
	fin >> data2;
	cout << "second number is " << data2 << endl;
	fin >> data3;
	cout << "third number is " << data3 << endl;

	fin.close();
}
