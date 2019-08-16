/*
 *  helloworld.cpp
 *  
 *
 *  Created by Ramen Soldier on 6/17/07.
 *  Copyright 2007 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>

//Includes header to do octal, decimal, and hex conversion
#include "helloworld.h" 

void octal(); //Declaration of my function

using namespace std;

int main() {

cout << "\n\nThis is the first exercise in TICPP!\n" << "It demonstrates overloading the bitwise shift left operator\n" << 
		"even though I am sending multiple arguments to it, it \nfigures out what to do with them\n" << endl;
		
cout << "For a second exercise I included the header file helloworld.\n" << "This file will show the coversion of the number 15:\n";	

octal(); //Calling my function defined in the header file.
		
return 0;

}

/*

OUTPUT:

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./helloworld


This is the first exercise in TICPP!
It demonstrates overloading the bitwise shift left operator
even though I am sending multiple arguments to it, it 
figures out what to do with them

For a second exercise I included the header file helloworld.
This file will show the coversion of the number 15:
Octal Conversion: 17
Hex Conversion: f
Decimal Conversion:15

*/