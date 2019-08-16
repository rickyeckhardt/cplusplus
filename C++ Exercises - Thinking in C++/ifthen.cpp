//TICPP Exercise 

//Written by Ramen Soldier June 19 2007

//Uses if-then statement to compare if values given are >, =, <, 

#include <iostream>

using namespace std;

int main() {

	int num;
	int num2;

	cout << "\nType a number and hit 'Enter': ";
	cin >> num;
	
	if( num > 5 )
		cout << "\nIt's greater than 5" << endl;
	else
		if( num < 5 )
			cout << "\nIt's less than 5" << endl;
		else
			cout << "It's equal to 5" << endl;
			
	cout << "\nType a number and hit 'Enter': ";
	cin >> num2;
	if( num2 < 100)
		if( num2 > 50 )
			cout << "50 < " << num2 << " < 100" << endl;
		else
			cout << num2 << " <= 50" << endl;
	else
		cout << num2 << " >= 100" << endl;

}
	
/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./ifthen

Type a number and hit 'Enter': 2

It's less than 5

Type a number and hit 'Enter': 88
50 < 88 < 100


*/

