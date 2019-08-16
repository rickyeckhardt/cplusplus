//TICPP exercise 
//Written by Ramen Soldier

//Outputs my name, birthday, and other information to the screen

#include <iostream> //Include for input/output
#include <string>	//Include for string use

using namespace std;

int main() {

string name = "Ricky"; //Declares string name and assigns it the value Ricky

string dog = "Tiger"; //Declares string dog and assigns it the value Tiger

string birthday; //Declares string birthday

birthday = "July 11, 1981"; //Assigns birthday the value July 11, 1981sss

cout	<< "My name is " << name << endl;			//Outputs my name
cout	<< "My Birthday is " << birthday << endl;	//Outputs my birthday
cout	<< "My Dogs name is " << dog << endl;		//Outputs my dogs name

}

/*
ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./hellomynameis
My name is Ricky
My Birthday is July 11, 1981
My Dogs name is Tiger
*/