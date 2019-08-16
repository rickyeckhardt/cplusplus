/*
 *  readinginput.cpp
 *  
 *
 *  Created by Ramen Soldier on 6/17/07.
 *  Copyright 2007 __MyCompanyName__. All rights reserved.
 *
 */
#include <iostream>

using namespace std;

int main() {

int number;

cout << "\n\nEnter a number: ";
cin >> number;
cout	<< "\n\nThe number is: " << number 
		<< "\nThe number in octal: " << oct << number 
		<< "\nThe number in hex: " << hex << number 
		<< "\n\n";

}

/*

OUTPUT:

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./readinginput


Enter a number: 15


The number is: 15
The number in octal: 17
The number in hex: f


*/
