/* Budget Program
 * Learning objective: IO mani practice
 *
 * -Ask for salary (monthly)
 * -Break that into 50%, 30%, 20% chunks
 * -Print out fancy
 * -add a 2nd salary for comparison */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double salaryInput1, salaryInput2;

	cout << "What is your yearly take home pay? ";
	cin >> salaryInput1;

	double monthly1 = salaryInput1 / 12;
	double needs = monthly1 * .5;
	double wants = monthly1 * .3;
	double savings = monthly1 * .2;

	cout << fixed << setprecision(2);
	cout << "Monthly take home salary for job 1 (no commas): $" << monthly1 << endl;
	cout << "By the 50/30/20 Buget, you can spend... " << endl;
	cout << "needs: " << setw(15) << needs << endl;
	cout << "wants: " << setw(15) << wants << endl;
	cout << "savings: " << setw(15) << savings << endl;
}