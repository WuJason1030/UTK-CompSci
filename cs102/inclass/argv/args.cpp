/* Command Line Arguments
 *
 * Command Line - the Unix enviornment where we type our commands
 * Arguments - inputs to a function
 *
 * In the past, we've written main()
 * Now, if we want to use cmd line args,
 * we write
 * main(int argc, char **argv)
 * or you may also see this as
 * main(int argc, char *argv[])
 *
 * argc: argument count
 * argv: argument value (saved as an arry of c-style strings)
 *		acces them via argv[i] where i is 0 up to but including argc
 *
 * argv will probably need to be transferred to a C++ string or 
 *		numerical data, you can just assign to a C++ string and then 
 *		potentially use stoi() or stod() 
 *
 * ERROR CHECKING:  
 * 1. Check to make sure argc is correct (by how you are using the program)
 *	  Let's say that this program needs argc == 4
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	if (argc != 4) {
		cerr << "./args arg1 arg2 arg3" << endl;
		return 1;
	}
	cout << "argc is " << argc << endl;

	for (int i = 0; i < argc; i++) {
		cout << "arg value " << i << " is " << argv[i] << endl;
	}

	// let's say the args are ints that we want to add together
	// argv[1] + argv[2] won't work because they aren't numerical yet!
	string anyNum = argv[1];
	int anyInt = stoi(anyNum);

	string anyNum2 = argv[2];
	int anyInt2 = stoi(anyNum2); //stoi() works in C++11 and beyond

	cout << "Numbers added are " << (anyInt + anyInt2) << endl;
}
