//A bmr formula that utilizes procedural functions
//Cody Sherman

#include <iostream>

using std::cout; using std::cin; using std::endl;

void bmrWomen(int weight, int height, int age); //our function prototypes, declared here and defined after the main function
void bmrMen(int weight, int height, int age);

int lbs, inches, years;
const int calories = 150; //our named constant

int main() {
	
	cout << "Hello, are you a dude or a dudette (m/f)? ";
	char gender;
	cin >> gender;
	cout << "\nCool, now please, input, in order, your weight(in pounds)," <<
		"your height (in inches), and your age (in years): ";
	cin >> lbs >> inches >> years;

	if (gender == 'm') { //calling our functions here
		bmrMen(lbs, inches, years);
	}
	else if (gender == 'f') {
		bmrWomen(lbs, inches, years);
	}
}

//defining our functions here
void bmrWomen(int, int, int){
	double bmr = 655 + (4.3 * lbs) + (4.7 * inches) - (4.7 * years);
	int cookies = bmr / calories;
	cout << "\nYour BMR is: " << bmr << endl;
	cout << "So, a medium sized cookie is "<< calories <<" calories. This " <<
		"means you can eat " << cookies << " cookies a day. Nom nom!\n";
}

void bmrMen(int, int, int) {
	double bmr = 66 + (6.3 * lbs) + (12.9 * inches) - (6.8 * years);
	int cookies = bmr / calories;
	cout << "\nYour BMR is: " << bmr << endl;
	cout << "So, a medium sized cookie is " << calories << " calories. This " <<
		"means you can eat " << cookies << " cookies a day. Nom nom!\n";
}
