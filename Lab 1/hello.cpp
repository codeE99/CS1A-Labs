//A typical "Hello World" program
//CS1 Lab 1

#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

int main() {
	cout << "What is your name? ";
	string name;
	cin >> name;
	cout << "Hello there, " << name << ", how are you?\n";
}
