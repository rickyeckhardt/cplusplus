/*
					 ************		*			*		*************    ************	 ************
					*					*			*		*				*				*
					*					*			*		*				*				*
					*					*			*		*				*				*
					*					*			*		*				*				*
					*	  ******		*			*		*******			 ***********	 ***********
					*			*		*			*		*							*				*
					*			*		*			*		*							*				*
					*			*		*			*		*							*				*
					 ***********		 ***********		*************	************	************		
					 
					 WRITTEN BY: RAMEN SOLDIER
					 DATE: 19 JUNE 2007
					 
					 COMMNENTS:	Uses while loop and if-then statements to give user hints on number
					 
*/


#include <iostream>

using namespace std;

int main() {

const int num = 5; //Number to Guesss

cout << "\n\n***GUESS A NUMBER***\n\n";

float guess = 0;		//Declares float guess which will take guess from user
while( guess != 5 ) {
	cout << "Enter a Guess: ";
	cin >> guess;
	
	if ( guess <= 4 )
		cout << "You are to low! Go Higher!!!\n";
		
	if ( guess >= 10 )
		cout << "You are to high! Go Down!!!\n";
		
	if ( ( guess < 9 )  & ( guess >=  6) )
		cout << "Almost got it! Try Again!!!\n";
		
	if ( guess == num )
		cout << "\nYOU GOT IT RIGHT! The number was: " << num << "\n\n";
	}

}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./guess


***GUESS A NUMBER***

Enter a Guess: 2    
You are to low! Go Higher!!!
Enter a Guess: 7
Almost got it! Try Again!!!
Enter a Guess: 8
Almost got it! Try Again!!!
Enter a Guess: 11
You are to high! Go Down!!!
Enter a Guess: 6
Almost got it! Try Again!!!
Enter a Guess: 5

YOU GOT IT RIGHT! The number was: 5



*/
