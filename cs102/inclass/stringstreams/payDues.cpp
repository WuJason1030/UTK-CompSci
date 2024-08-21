#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#include <limits>
using namespace std;

int main() {
	ifstream fin("dues.csv");
	if (fin.fail()) {
		cerr << "file failed to open" << endl;	
		return 1;
	}
	
	string name, strAge, email, jan, feb, mar, apr, may;
	bool j, f, mh, my;
	int age;
	string line;

	getline(fin, line); //ignore the column headers aka the first line
	while (getline(fin, line)) { //go line by line, aka "While I can grab a line, do this w/ line"
		istringstream sin(line);
		getline(sin, name, ',');
		cout << name << endl;
		
		getline(sin, strAge, ',');
		age = stoi(strAge);
		cout << age << endl;
		
		getline(sin, email, ',');
		cout << email << endl;

		getline(sin, jan, ',');
		if ("paid" == jan) j = true;
		else j = false;
		cout << j << endl;

		getline(sin, feb, ',');
		// condition ? express : express2
		f = ("paid" == feb) ? true : false;
		
		getline(sin, mar, ',');
		if ("paid" == feb) f = true;
		else f = false;
		
		getline(sin, apr, ',');
		if ("paid" == mar) mh = true;
		else mh = false;
		
		getline(sin, may, ',');
		if ("paid" == may) my = true;
		else my = false;

	}
}
