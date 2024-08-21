/*
Mini Golf Game
Vectors practice (instead of ArrayLists)
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    string player1;
    int score1 = 0;
    int hole;
    vector <int> player1holes;
    const int SHORT_GAME = 2;
    const int LONG_GAME = 18;

    cout << "Welcome to mini golf scoring!" << endl;
    cout << "Player 1, what is your name? ";
    cin >> player1;
    cout << "You entered " << player1 << endl;

    /* Get scores for each hole*/
    for (int i = 0; i < SHORT_GAME; i++) {
        cout << "What was your score for hole " << i + 1 << "? ";
        cin >> hole;
        player1holes.push_back(hole);
    }
    //verify
    cout << "Player 1's game: " << endl;
    for (int i = 0; i < player1holes.size(); i++) {
        cout << player1holes.at(i) << endl;
        score1 += player1holes.at(i);
    }

    cout << "Player 1's total score is " << score1 << endl;
}
