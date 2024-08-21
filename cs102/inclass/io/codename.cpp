/* 
cin.ignore() practice

cin.jgnore() takes 2 arguments - a number and a character
We will ignore either X number of a character (1st arg)
OR ignore everything until you see the 2nd arg.
whichever comes first.
*/
#include <iostream>
using namespace std;

int main() {
    string codename;

    cout << "Type your last name: ";
    cin.ignore(5, 'r');
    cin >> codename;
    cout << "Your codename: " << codename << endl;
}