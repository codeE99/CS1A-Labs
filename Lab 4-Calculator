//Creating a calculator with multiple options
//Cody Sherman

#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cout; using std::cin;
using std::endl; using std::sqrt;
using std::abs;

int main() {
	
		cout << "1. Absolute Value\n" << "2. Square Root\n" << "3. Floor\n"
			<< "4. Power\n";
		cout << "\nSelect an operation: ";
		int choice;
		cin >> choice;
		do {
			if (choice < 1 || choice > 4) {
				cout << "Error, not a valid choice!";
				//return 0;
			}
			else {
				if (choice > 0 && choice < 5) {
					double result = 0;
					cout << "\nEnter base: ";
					double base;
					cin >> base;

					//double result;
					if (choice == 1) {
						result = abs(base);
					}
					else if (choice == 2) {
						result = sqrt(base);
					}
					else if (choice == 3) {
						result = floor(base);
					}
					else if (choice == 4) {
						cout << "\nEnter exponent: ";
						int exp;
						cin >> exp;
						result = pow(base, exp);
					}
					cout << "\nThe result is: " << result << endl;
					cout << "Select an operation: ";
					cin >> choice;
				}
			}
		}
		while (choice > 0 && choice < 5);
}
