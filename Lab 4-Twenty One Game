//a game where whoever gets closer to 21 (but not over) wins
//Cody Sherman

#include <iostream>
#include <ctime>

using std::cout; using std::cin;
using std::endl;

int main() {
	//we initialize the srand function for a random seed
	srand(time(NULL));
	int playerNum = rand() % 13 + 1; //we use this to create a random value for the player
	int comNum = rand() % 21 + 1;
	cout << "Your number is: " << playerNum << endl;
	cout << "Would you like to hit or stand (s/h) ";
	char hitStand;
	cin >> hitStand;

	if (hitStand == 'h') {
		while (hitStand == 'h') {
			playerNum += (rand() % 21 + 1); //we use cocentation to create a new value for the player
			if (playerNum > 21) {
				cout << "You have a value " << playerNum << " thats over 21" << endl;
				cout << "BUST! You lose!\n";
				break;
			}
			else if (playerNum < 21) {
				cout << "Your value is " << playerNum << endl;
				cout << "Would you like to hit or stand? (s/h)? ";
				cin >> hitStand;
				cout << endl;
			}
		}
	}
	if (hitStand == 's') {
		if (playerNum < comNum && playerNum < 21) {
			cout << "YOU LOSE!" << endl;
			cout << "Your value: " << playerNum << ", computer value: " << comNum << endl;
		}
		else if (playerNum > comNum && playerNum < 22) {
			cout << "YOU WIN!" << endl;
			cout << "Your value: " << playerNum << ", computer value: " << comNum << endl;
		}
	}
	
	
}
