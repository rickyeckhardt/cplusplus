

//Written by Ramen Soldier 20 June 2007

//Takes numbers from the user and adds them until the exit value is typed

#include <iostream>

using namespace std;


int main() {

float input = 0; //Declares float input and assigns value of zero
float total = 0; //Declares float total and assigns value of zero

cout << "\n:::Enter Numbers For Addition:::\n\n ";
 
//While input is not equal to -999 keep adding numbers.
while ( input != -999 ) {

cout << "\nType -999 To Exit" << endl;
cout << "Enter Number: ";
cin >> input;			//takes input from user and passes it to cin

total = total + input; //adds previous total to the new input

cout << "\n\tTotal = " << total << endl; //outputs total


}



}