/*
Class Review in C++
Marathon Class, Location Struct
for a program that works with road running races
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Marathon {
    //private by default
    private: 
        int hours;
        int minutes;
    public: 
        Marathon(int h, int m);
        //void no return value
        void printTotalTime();
};

//write the body of the function down here

Marathon::Marathon(int h, int m) {
    hours = h;
    minutes = m;
}

void Marathon::printTotalTime() {
    cout << hours << ":" << setw(2) << setfill('0') << minutes << endl;
}

// A struct is something we use more often in C rather than C++
// because C doesn't have classes.
// It's public by default
struct Location {
    //public by default
    string city;
    string state;
};

int main() {
    //This is different from java!
    Marathon boston(3, 30);
    Marathon nyc(4, 10);

    //This is the same as java!
    boston.printTotalTime();
    nyc.printTotalTime();

    // working with structs here
    Location raceLocation;
    raceLocation.city = "Boston";
    raceLocation.state = "MA";
    cout << "The race location is " << raceLocation.city << endl;
}
