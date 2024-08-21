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
 * 4. Close the file stream
 *
 * WRITING Steps: 
 * 0. #include <fstream>
 * 1. Opening a file
 *		a. declare a file stream variable (of stream for output file stream)
 *		b. use .open() with the filename that we want to create for output!
 *			WARNING: 1b. either creates the file OR overwrites the file if it already exists!
 * 2. Do a check to make sure that this ^ didn't fail (same as fin)*/
#include <iostream>
#include <fstream>
#include <limits>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

string avgPaceCalc(int h, int m, int s) {
	ostringstream sout;

	double const distance = 26.2;
	int totalSec = (h * 3600) + (m * 60) + s;

	cout << "Total seconds = " << totalSec << endl;

	double paceInSec = (totalSec / distance);
	cout << "Pace in seconds = " << paceInSec << endl;

	int pMin = (int) (paceInSec / 60);
	int pSec = (int) (paceInSec + 0.5) % 60;

	cout << "pM = " << pMin << "pS = " << pSec << endl;
	
	//this prints 8:1 instead of 8:01
	//string pace = to_string(pMin) << ":" + to_string(pSec);
	sout << setfill('0') << pMin << ":" << setw(2) << pSec;
	return sout.str();
}

int main() {
	ifstream fin;
	ofstream fout;
	string first, last;
	int h, m, s;
	vector <string> lastNames;
	vector <string> firstNames;
	
	//Ask the user for the inputfile name.
	//cout << "What is the input file name? ";
	//string inputfile;
	//cin >> inputfile;
	string inputfile = "racetimesHMS.txt";
	fin.open(inputfile);

	if(!fin.is_open()) {
		cerr << "file failed to open" << endl;
		return 1;
	}

	string outputfile = "results.txt";
	fout.open(outputfile);

	if (fout.fail()) {
		cerr << "output file failed to open" << endl;
		return 1;
	}

	while (fin >> first >> last >> h >> m >> s) {
		fout << setfill('0');
		fout << last << ", " << first << " ";
		fout << h << ":" << setw(2) << m << ":" << setw(2) << s << endl;
	}

	string retval = avgPaceCalc(3,30,0);

	fin.close();
	fout.close();

	cout << retval << endl;
	return 0;
}
