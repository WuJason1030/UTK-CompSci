/* 
Error Checking with Cin
If Statement Review

Error Checking with CIN steps
1. Wrap cin inside an IF stmt to check for failure
2. A -Good state: Then cin works correctly & value is already stored
   B -Fail state: Then cin is in it's "panic attack" mode and FROZEN
                    Out cursor can't move past the bad input until it gets out of the fail state.
                    1) Get cin out of the fail state with cin.clear()
                    2) Use cin.jgnore to move past bad input
*/
#include <iostream>
#include <limits>
using namespace std;
int main() {
    // if cin get a value other than int then it will enter a fail state
	int i, j;

    if (cin >> i) {
        cout << "I is " << i << endl;
    }
    else {
        cin.clear(); //Clears the fail state for int i
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin >> j;
    if (!cin.fail()) {//Checks of cin has failed//
        cout << "J is " << j << endl;
    }
    else {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}
