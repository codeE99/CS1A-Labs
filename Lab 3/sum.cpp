//Creating a sum of all positive input integers
//Cody Sherman

#include <iostream>

using std::cout; using std::cin;
using std::endl;

int main() {
	int sequences;
	int sum = 0;
	cout << "Input sequence of integers (zero to stop): ";
	cin >> sequences;
	sum = sequences;
	while (sequences != 0) {
		cin >> sequences;
		if (sequences > 0) {
			sum += sequences;
		} 	
	}
	cout << "The sum of the positives numbers is: " << sum << endl;

}
