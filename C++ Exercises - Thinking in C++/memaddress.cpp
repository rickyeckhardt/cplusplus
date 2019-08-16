//Written By Ramen Soldier

//Show the memory address of various elements using the & operator


#include <iostream> //Declares input and output stream

using namespace std; //Declates using the standard namespace

char x, y, z; //Declares three global chars

//DECLARES A FUNCTION THAT RETURNS NOTHING AND TAKES A CHAR ARGUMENT NAMED LETTER
void f( char letter ) {
	cout << "Letter: " << letter << endl;
}

//DECLARES THE MAIN FUCTION THAT RETURNS AN INTEGER AND TAKES NO ARGUMENTS
int main() {

	char a, b, c;  //Declares three chars
	
	cout << "The memory address of the following:" << endl;
	//(long) is a cast. It is saying cast this as a long 
	cout << "main(): " << (long)&main << " Using The '&' Operator" <<endl; //Shows address of the function main()
	cout << "f(): " << (long)&f << " Using The '&' Operator" <<endl; //Shows address of the function f()
	cout << "f(): " << (long)*f << " Using A Pointer" << endl; //Shows address using a pointer to f()
	cout << "Global Declared Variables " << endl;
	cout << "x: " << (long)&x << endl; //Shows mem address of char x
	cout << "y: " << (long)&y << endl; //Shows mem address of char y
	cout << "z: " << (long)&z << endl; //Shows mem address of char z
	cout << "Declared in main()" << endl;
	cout << "a: " << (long)&a << endl; //Shows mem address of char a
	cout << "b: " << (long)&b << endl; //Shows mem address of char b
	cout << "cc: " << (long)&c << endl; //Shows mem address of char c

}