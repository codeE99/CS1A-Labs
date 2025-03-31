//Testing our swap function
//Cody Sherman

#include <iostream>
#include "swap.hpp"

using std::cout; using std::cin; using std::endl;

int main() {
	cout << "Enter 3 integers: ";
	int x, y, z;

	cin >> x >> y >> z;

	swap(x, y, z);
}

