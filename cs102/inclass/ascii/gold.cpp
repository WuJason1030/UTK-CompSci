#include <iostream>
using namespace std;

int main() {
	
	char letter = 95;
	int totalGold = 0;

	while (cin.get(letter)) {
		//if letter is at least A but not greater than Z
		//add the gold to totalGold
		cout << letter << endl;
		if (isalpha(letter)) {
			letter -= 'A';
			totalGold += letter + 1;
		}
	}
	cout << totalGold << endl;
}
