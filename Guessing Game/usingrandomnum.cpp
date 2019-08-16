//
//	written by ramen soldier 20 june 07
//	
//	Generates a random number and had the user guess it

#include <iostream>		//Input & Output
#include <time.h>		//Used for getting time to be used for a seed 
#include <stdlib.h>		//Used for rand and srand
#include <ctype.h>		//For toupper and tolower case conversion

using namespace std;

int main() {

char exit = 'N'; //Declares char Exit and assigns it value of N

cout << "Guess The Number I Am Thinging From 1-25" << endl;

while ( toupper(exit) != 'Y' ) {
	int randnum;	//Declares integer randnum to hold the random number
	int guess;
	int count = 1;	//Declcares integer count to hold how many tries it takes. Starts at one 
					//because it at least takes one turn to get it correct!
	
	srand( (unsigned)time( NULL )); //Uses time to generate seed
	randnum = (rand() % 24) + 1;  //generates random number between one and twentyfive
	
	cout << "Your Guess: ";
	cin >> guess;			//Takes guess from user and passes it to cin
	
	
	//Infinate Loop to take guess and compare if it is higher, lower, or equal to the guess
	while( 1 > 0 ) {
	
	//Says if guess is higher then 25 or guess is lower then 25
	if ( ( guess > 25 ) || ( guess < 1) ) { 
		cout << "That number wasn't between 1 and 25!" << endl;
		count = count++;
	}
	//If guess is equal to the randnum 
	else if( guess == randnum ) {
		cout << "You got it in only " << count << " tries!" << endl;
		break; //Breaks infinate loop to go back to the main while statement which runs until user types y or Y
	}
	//If guess is higher then the randnum
	else if( guess > randnum ) {
		cout << "You are way to high! Go down!" << endl;
		count = count++;
	}
	//If guess is lower then the randnum
	else if( guess < randnum ) {
		cout << "You are way to low! Go up!" << endl;
		count = count++;
	}
	//Takes additional guess
	cout << "Guess again: ";
	cin >> guess;
	}
	
	//Takes the value of exit from user to see if they want to exit. The toupper will convert 'y'
	//to Y and still exit the while statement
	cout << "Would you like to exit ( Y or N )? ";
	cin >> exit;
	}
} 


/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./usingrandomnum
Guess The Number I Am Thinging From 1-25
Your Guess: 1
You are way to low! Go up!
Guess again: 100
That number wasn't between 1 and 25!
Guess again: 3
You are way to low! Go up!
Guess again: 24
You are way to high! Go down!
Guess again: 20
You are way to high! Go down!
Guess again: 15
You are way to low! Go up!
Guess again: 16
You are way to low! Go up!
Guess again: 18
You are way to high! Go down!
Guess again: 17
You got it in only 9 tries!
Would you like to exit ( Y or N )? n
Your Guess: 9
You are way to low! Go up!
Guess again: 25
You are way to high! Go down!
Guess again: 20
You are way to high! Go down!
Guess again: 15
You got it in only 4 tries!
Would you like to exit ( Y or N )? y

*/