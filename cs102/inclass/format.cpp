#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double x = 123.4567;
	// putting fixed(no exponential point) and serprecision into a single line makes the block of code into that format.
	cout  << setprecision(2);
	cout << setfill('-') << setw(15) << x << endl;
	cout << setfill('-') << setw(4) << x << endl;
	cout << setw(10) << x << endl;
	cout << setw(15) << setfill('0') << x << endl;
}