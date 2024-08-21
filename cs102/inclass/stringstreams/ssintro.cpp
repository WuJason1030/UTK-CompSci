/*String Streams
 *
 * Console streams - cin/cout - <iostream>
 * File    streams - fin/fout - <fstream>
 * String  streams - sin/sout - <sstream>
 *
 * All of them use >> for the ___ input stream
 * and         use << for the ___ output stream
 * and all can use manipulators from <iomanip>
 * 
 * */


#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
	string input = "512 Main St";

	//Declare and initialize
	istringstream sin;
	sin.str(input);

	// OR we could do this all in one line
	//istringstream sin(input);
	
	//No need for error check
	int stNumber;
	string stName, stType;
	sin >> stNumber >> stName >> stType;

	cout << "The street number is " << stNumber << endl;
	cout << "The street type is " << stType << endl;

	/* If I want to re-use sin with a new input string, 
	 * then I need to use .clear() and then give it a 
	 * new string with .str()
	 * 
	 */
	string input2 = "416 Broadway Ave";
	sin.clear();
	sin.str(input2);

	//repeat extraction step
	/* OUTPUT STRING STREAMS */
	ostringstream sout;
	int num = 10;
	string name = "Maloney";
	string st = "St";
	sout << num << " " << name << " " << st;

	/*use .str() slightly differently here - we use it to get 
	 * the string out of sout*/
	string address = sout.str();
	cout << address << endl;
}
