
//Written by Ramen Soldier
//Demonstrates passing by reference operator
//It is said to be cleaner then passing by pointer

#include <iostream>

using namespace std;

void passbyref( char& a ) {

	cout << "a: " << a << endl;
	cout << "&a: " << (long)&a << endl;
	a = 'b';
	cout << "b: " << a << endl;
}

int main() {

	char letter = 'a';
	
	cout << "letter: " << letter << endl;
	cout << "&letter: " << (long)&letter << endl;
	
	passbyref(letter);
	
	cout << "letter: " << letter << endl;
	
	while( char i = cin.get() != 'x' )
		cout << "x: ";
		
}