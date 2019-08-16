//TICPP Exercise on using return in a function. The function is declared before main, so no definition is needed
//Written by Ramen Soldier June 18 2007



#include <iostream>

using namespace std;

int intfunc( int i ) { //returns and integer and takes an interger argument from cin
	if( i == 0 )
		return 1; // if integer is equal to 0 return 1
	if( i == 1 )
		return 2; // if integer is equal to 1 return 2
	if( i == 2 )
		return 3; // if integer is equal to 2 return 3
	else 
		return 100; // if integer is any other number return 100
}

int main() {
	cout << "Type an integer: ";
	
	int intval; // declares intval to pass argument to function
	
	cin >> intval; // takes intval from user
	
	cout << intfunc(intval) << endl; // passes intval to function and outputs return value of function
	
}