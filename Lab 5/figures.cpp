//Defining the functions in our header file here. 
//Cody Sherman

#include "figures.hpp"
#include <iostream>

using std::cout; using std::endl;

void hollowSquare(int size, char symbol) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
				cout << symbol;
			}
			else cout << " ";
		}cout << endl;
	}
}

void filledSquare(int size, char symbol) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i < size && j < size) {
				cout << symbol;
			}
			else cout << " ";
		}cout << endl;
	}

}

void slashForward(int size, char symbol) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				cout << symbol;
			}
			else cout << " ";
		}cout << endl;
	}
}

void slashBackward(int size, char symbol) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 && j == size || i > 0 && j == size - i) {
				cout << symbol;
			}
			else  cout << " ";
		}cout << endl;
	}
}
void X(int size, char symbol) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 && j == size || i > 0 && j == size - i || i == j) {
				cout << symbol;
			}
			else  cout << " ";
		}cout << endl;
	}
}

