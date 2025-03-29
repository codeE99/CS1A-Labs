//Using a switch statement to implement tax brackets
//Cody Sherman

#include <iostream>

using std::cout; using std::cin;
using std::endl;

int main() {
	cout << "Hello, enter your total amount of $$$ earned: ";
	double amount;
	cin >> amount;
	cout << "Now enter your employee code: ";
	char empCode;
	cin >> empCode;

	double withHold = 0 ;

	cout << endl;

	cout << "employee earnings: " << amount << endl;
	cout << "employee code: " << empCode << endl;

	switch (empCode) {
	case('d'):
		withHold = amount * .15;
		cout << "Amount to withhold: " << withHold << endl;
		break;
	case('f'):
		withHold = amount * .20;
		cout << "Amount to withhold: " << withHold << endl;
		break;
	case('h'):
		withHold = amount * .60;
		cout << "Amount to withhold: " << withHold << endl;
		break;
	case('o'):
		withHold = amount * .65;
		cout << "Amount to withhold: " << withHold << endl;
		break;
	default:
		cout << "Error, unknown employee code.\n" << "Employee code: " << empCode;
		return empCode;
		break;
	}

	double takeHome = amount - withHold;
	cout << "Take Home: " << takeHome << endl;

}
