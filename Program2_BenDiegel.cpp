/* Program: Seconds to days, hours, or minutes
 * Programmer: Ben Diegel
 * Date: 8/21/17
 * Notes:
 * Modifications: */

#include <iostream>
using namespace std;

// main module
int main() {
	// using ints so we only deal with whole numbers (no half seconds)
	int seconds, minutes, hours, days;
	// used for input validation
	bool inputVal = false;

	cout << "Please enter an amount of seconds. If you want to exit, "
		 << "type a negitive number\n>>";

	// allows the user to enter as many values as they like
	while (inputVal == false) {
		cin >> seconds;
		if (seconds < 0) {
			inputVal = true;
		}
		else {
			if (seconds >= 86400) { // starts with possible highest ammount
				days = seconds/86400;
				cout << "There are " << days << " days in " << seconds
					 << " seconds\n";

				cout << "Please enter more seconds, or a negitive to exit.\n>>";
			}
			else {
				if (seconds >= 3600) {
					hours = seconds/3600;
					cout << "There are " << hours << " hours in " <<
					     seconds << " seconds.\n";

					cout << "Please enter more seconds, or a negitive to exit.\n>>";
				}
				else {
					if (seconds >= 60) {
						minutes = seconds/60;
						cout << "There are " << minutes << " minutes in "
							 << seconds << " seconds.\n";

						cout << "Please enter more seconds, or a negitive to exit.\n>>";
					}
				}
			}
		}
	}
	return 0;
}

