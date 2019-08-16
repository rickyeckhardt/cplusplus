//CH2 Exercise With Strings

//Written By Ramen Soldier June 17, 2007

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string name; //Declares strings name
	
	string message = "My name is"; //Declares string message and assigns it "My Name is"
	
	string alltogether; //Declares string alltogether to concat all strings together
	
	string birthday("and my birthday is July 14th!"); //Declares birthday and assigns it a string 
	
	name = "Ricky"; //assigns the string name the value of "Ricky"
	
	alltogether = message + " " + name + " ";
	
	alltogether += birthday;
	
	cout << alltogether << endl;

}

/*
OUTPUT:

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./simplestringuse

My name is Ricky and my birthday is July 14th!

*/