/*
Program: Points calculator
Programmer: Ben Diegel
Date: 9/2/17
*/

#include <iostream>
using namespace std;

int main() {
    int numberOfBooks, earnedPoints;

    cout << "Please enter the amount of books you've read this month. Please enter a\n"
         << "negative value to exit the program\n>>";
    cin >> numberOfBooks;

    while (numberOfBooks > 0) {
        if (numberOfBooks == 0) {
            earnedPoints = 0;
        }
        else if (numberOfBooks == 1) {
            earnedPoints = 5;
        }
        else if (numberOfBooks == 2) {
            earnedPoints = 15;
        }
        else if (numberOfBooks == 3) {
            earnedPoints = 30;
        }
        else if (numberOfBooks >= 4) {
            earnedPoints = 60;
        }

        cout << "You've read " << numberOfBooks << " books and have earned "
             << earnedPoints << " points.\n\n";
        
        cout << "Please enter the amount of books you've read this month. Please enter a\n"
             << "negative value to exit the program\n>>";
        cin >> numberOfBooks;
    }
    return 0;
}