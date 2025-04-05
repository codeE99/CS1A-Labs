//generate 10 random non-repeating positive numbers
//user inputs 5 numbers and compares them with the above 10
//Cody Sherman

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout; using std::cin; using std::endl;

const int chosenSize = 10;

//declaring our functions here
int assign(int chosen[]);
bool check(int num, int chosen[]);
void draw(int chosen[]);
int entry(int);
void printOut(int chosen[], int );

int main() {
	int chosen[chosenSize]; 
	int guess = 0;
	int num = 0;

	assign(chosen);
	draw(chosen);
	
	while (guess < 5) {
		cout << "Enter a number from 0 to 99: ";
		int num;
		cin >> num;
		entry(num);
		if (check(entry(num), chosen) == true) {
			cout << "You won, congrats!" << endl;
			printOut(chosen, num);
			exit(1);
		}
		else if (check(entry(num), chosen) == false&& guess<4) {
			cout << "Bzzz, wrong. Try again!" << endl;
		}
		
		guess++;
	}
	printOut(chosen, num);
}

int assign(int chosen[]) {
	for (int i = 0; i < chosenSize; i++) {
		return chosen[i] = -1;
	}
}

bool check(int num, int chosen[]) {
	for (int i = 0; i < chosenSize; i++) {
		if (chosen[i] == num) {
			return true;
		}
		else return false;
	}
}

void draw(int chosen[]) {
	srand(time(NULL));
	int numSelect = 0;
	while (numSelect < chosenSize) {
		for (int i = 0; i < chosenSize; i++) {
			int newNum = rand() % 100;
			if (!check(newNum, chosen)) {
				chosen[i] = newNum;
				numSelect++;
			}
			else numSelect++;
			
		}
	}
	cout << endl;
}

int entry(int num) {
	return num;
}

void printOut(int chosen[], int input) {
	cout << "The selected numbers are: ";
	for (int i = 0; i < chosenSize; i++) {
		cout << chosen[i] << " ";
	}

}
