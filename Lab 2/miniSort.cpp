// the program attempts to sort three integers
// in increasing order, it is incomplete
// Mikhail Nesterenko, edited by Cody Shherman
// 9/3/2009

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z;

    int tmp;

    // orders x and y
    if (x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }

    //order x and z-it must be inserted here and not below y and z
    //for the program to work
    if (x > z) {
        tmp = x;
        x = z;
        z = tmp;
    }

    // orders y and z
    if (y > z) {
        tmp = y;
        y = z;
        z = tmp;
    }

    // outputs the sorted numbers
    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;
}
