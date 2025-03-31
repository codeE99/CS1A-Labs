//The functions work similarly from our previous figures lab

#include "figures.hpp"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {
	int figure, size;
	char symbol, squareFill, slashDir;
	
	cout << "select size: ";
	cin >> size;
	cout << "select paint character: ";
	cin >> symbol;
	cout << "1. square\n" <<
		"2. slash\n" <<
		"3. X" << endl;
	cout << "select figure: ";
	cin >> figure;

	while (size>0){ //exits the program if we give size an invalid input

		if (figure == 1) {
			cout << "\nfilled, hollow [f/h]: ";
			cin >> squareFill;

			if (squareFill == 'f') {
				filledSquare(size, symbol);
			}

			else if (squareFill == 'h') {
				hollowSquare(size, symbol);
			}
			else {
				cout << "Error! Not a valid input!";
				exit(1);
			}
		}
		else if (figure == 2) {
			cout << "\nforwards, backwards [f/b]: ";
			cin >> slashDir;

			if (slashDir == 'f') {
				slashForward(size, symbol);
			}
			else if (slashDir == 'b') {
				slashBackward(size, symbol);
			}
			else {
				cout << "Error, not a valid input!";
				exit(1);
			}
		}

		else if (figure == 3) {
			X(size, symbol);
		}

		cout << "select size: ";
		cin >> size;
		cout << "select paint character: ";
		cin >> symbol;
		cout << "1. square\n" <<
			"2. slash\n" <<
			"3. X" << endl;
		cout << "select figure: ";
		cin >> figure;
	}
}
