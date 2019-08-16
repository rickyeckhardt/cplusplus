

//TICPP Switch use

//Written by Ramen Soldier June 19 2007

#include <iostream>

using namespace std;

int main() {
	
	bool exit = false;
	
	int health = 100;
	
	char response;
	
	while( exit == false ) {
		cout << "You are at a creek. How do you want to continue?" << endl;
		cout <<	"	a. Go Back " << endl;
		cout << "	b. Cross " << endl;
		cout << "	c. Set Up Camp" << endl;
		cout << "Enter Your Letter Choice: ";
		cin >> response;
		
		switch(response) {
			case 'a' :	cout << "\nYou went back, but got your wagon stuck in the mud!" << endl;
						exit = true;
						break;
			case 'b' :	cout << "\nYou cross and one member of your party dies, so you go back but\nlost half your health. ";
						health = health - 50;
						cout << "You only have " << health << " health left! Find some food." << "\n\n";
						exit = true;
						break;
			case 'c' :	cout << "\nYou set up camp and become well rested" << endl;
						exit = true;
						break;
			default	 :	cout << "\nPlease Enter a Valid Letter Choice" << endl;
			}
		}
	}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./switch
You are at a creek. How do you want to continue?
        a. Go Back 
        b. Cross 
        c. Set Up Camp
Enter Your Letter Choice: b

You cross and one member of your party dies, so you go back but
lost half your health. You only have 50 health left! Find some food.



*/