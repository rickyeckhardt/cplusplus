

//TICPP exercise using while loop

//Written by Ramen Soldier on June 19 2007

//Stays in loop until user guess's number

#include <iostream>

using namespace std;

int main() {

float guess = 0;
const int right = 1;

while( guess != right ) {
	cout << " \n\nGuess A Number: ";
	cin >> guess;
}
	
cout << "You guessed it!" << endl;

}