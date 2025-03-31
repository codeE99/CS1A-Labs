//Our file for defining our swap.hpp functions
//Cody Sherman

#include <iostream>
#include "swap.hpp"

using std::cout; using std::endl;

void swap(int x, int y, int z) {
	if (x > y) {
		int tmp = x;
		x = y;
		y = tmp;
	}
	if (x > z) {
		int tmp = x;
		x = z;
		z = tmp;
	}
	if (y > z) {
		int tmp = y;
		y = z;
		z = tmp;
	}
	cout << x << ", " << y << ", " << z << endl;
}
