//Creating figures of varying size and paint characters based on user input
//Cody Sherman

#include <iostream>

using std::cout; using std::cin;
using std::endl;

int main() {
	cout << "Input figure size: ";
	int size;
	cin >> size;
	cout << "Input paint character: ";
	char paint;
	cin >> paint;

	//shape #1-a filled square
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << paint; 
		}
		cout << endl;
	}
	cout << endl;

	//shape #2-a backslash
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i!=j) {
				cout << " ";
			}
			else cout << paint;
		}
		cout << endl;
	}
	cout << endl;

	//shape #3-a slash
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i==0&&j==size||i>0&&j==size-i){
				cout << paint;	
			}
			else  cout << " ";	
		}
		cout << endl;
	}
	cout << endl;

	//shape #4-an empty square
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 || j==0 ||i==size-1||j==size-1) {
				cout << paint;
			}
			else  cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	//shape #5-an x
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 && j == size || i > 0 && j == size - i||i==j){
				cout << paint;
			}
			else  cout << " ";
		}
		cout << endl;
	}
	
}
