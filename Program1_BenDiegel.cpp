/* Program: Monthly and Annual car expense calculator
 * Programmer: Ben Diegel
 * Date: 8/21/17
 * Notes:
 * Modifications: */

#include <iostream>
using namespace std;

int main() {
	// variable decleration
	double loanPay, insurance, gas, oil, tires, maintenance, monthlyCost,
		   annualCost;
	const int MONTH = 12;
	
	// gets user input
	cout << "Please enter your monthly loan payment amount.\n>>";
	cin >> loanPay;
	cout << "Please enter your monthly insurance payment amount.\n>>";
	cin >> insurance;
	cout << "Please enter your monthly gas payment amount.\n>>";
	cin >> gas;
	cout << "Please enter your monthly oil payment amount.\n>>";
	cin >> oil;
	cout << "Please enter your monthly tire(s) payment amount.\n>>";
	cin >> tires;
	cout << "Please enter your monthly maintenance payment amount.\n>>";
	cin >> maintenance;
	
	// calculation with expandable months
	monthlyCost = loanPay + insurance + gas + oil + tires + maintenance;
	annualCost = monthlyCost * MONTH;
	
	cout << "You are spending $" << monthlyCost << " every month.\n";
	cout << "You are spending $" << annualCost << " every year\n"; 
	
	return 0;
}
