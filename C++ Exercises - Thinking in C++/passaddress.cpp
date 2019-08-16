

//Written by Ramen Soldier June 22 2007

//Demostrates passing a value by using pointers

#include <iostream> 

using namespace std;

void fval( char a ) {
	
	cout << "Function called made: " << endl;
	cout << "a: " << a << endl;
	a = 'b';
	cout << "Changed 'a' = a to 'a' = b" << endl;
	cout << "a: " << a << endl;
}

void fref( char* b ) {

	cout << "Function called made: " << endl;
	cout << "b: " << (long)b << endl;
	cout << "*b: " << *b << endl; //Dereferencing b to get at the contents and not just the mem address
	*b = 'b';
	cout << "Changed 'b' = a to 'b' = b" << endl;
	cout << "b: " << (long)b << endl;
}

int main() {
	char letval = 'a';
	char letref = 'a';
	
	//Passing by value
	cout << "Passing char letval" << endl;
	cout << "letval: " << letval << endl;
	fval(letval);
	cout << "You can see it only changed the value locally in the function:" << endl;
	cout << "letval: " << letval << endl << endl;
	
	//Passing by pointer
	cout << "Passing char letref by pointer" << endl;
	cout << "letref: " << letref << endl;
	cout << "&letref: " << (long)&letref << endl;
	fref(&letref);
	cout << "letref: " << letref << endl;

}