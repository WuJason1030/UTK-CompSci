#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

typedef double Bob;
typedef vector <int> iVec;

int main(int argc, char **argv) {
	vector <iVec> pascal;
	istringstream sin;
	int r;

	if (argc != 2) {
		cerr << "usage: ./pascal rows" << endl;
		return 1;
	}

	//argv[1] holds the number of rows to make for pascal's triangle
	//could use stoi() but getting more practive with sstream
	sin.str(argv[1]);
	if(!(sin >> r)) {
		cerr << "Bad rows - need an integer!" << endl;
		return 1;
	}

	pascal.resize(r); //this changes the outer vector to have the size - # of rows
	
	for(int i = 0; i < pascal.size(); i++) { //i will be row number
		for (int j = 0; j <= i; j++) {
			//algorithm for cells
			//pascal[i].push_back(TODO);
			if ( j == 0 || j == i) {
				pascal[i].push_back(1);
			}
			else {
				int pNum = (pascal[i - 1][j - 1] + pascal[i - 1][j]);
				pascal[i].push_back(pNum);
			}
		}
	}
	
	for (int i = 0; i < pascal.size(); i++) {
		for (int j = 0; j < pascal[i].size(); j++) {
			cout << pascal[i][j] << " ";
		}
		cout << endl;
	}
}
