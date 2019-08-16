
//Written by Ramen Soldier on June 19 2007

//Shows an example of an do-while loop after taking guess from user

#include <iostream>

using namespace std;

int main() {

int number = 15;

int guess;

do {
	cout << "guess a number: ";
	cin >> guess;
}
while( guess != number );

cout << "You Guessed it right. The number was " << number << endl;

}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./dowhile
guess a number: 10
guess a number: 5
guess a number: 6
guess a number: 7
guess a number: 8
guess a number: 15
You Guessed it right. The number was 15


*/