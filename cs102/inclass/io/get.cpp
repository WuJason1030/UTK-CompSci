/*
cin.get() practice
This grabs one character at a time,
INCLUDING whitespace.
*/
#include <iostream>
using namespace std;

int main() {
    char c1, c2;

//    cout << "What are your initials? ";
//    cin >> c1 >> c2;
//    cout << "C1 = " << c1 << " C2 = " << c2 << endl;

    // second way to do this
    cout << "What are your initials? ";
    cin.get(c1);
    cin.get(c2);
    cout << "C1 = " << c1 << " C2 = " << c2 << endl;
}