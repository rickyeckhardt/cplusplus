//Written by Ramen Soldier

//Example of using break and continue to make a menu

#include <iostream>

using namespace std;

int main() {
	char response;
	
	while(true) {
		cout << "\nMain Menu:" << endl;
		cout << "a: alpha, b: beta, c: charlie --> ";
		cin >> response;
		
		if ( response == 'c')
			break;		//Breaks out of WHILE and Ends program
			
		if( response == 'a') {
			cout << "alpha:" << endl;
			cout << "select a or b --> ";
			cin >> response;
			
			if( response == 'a') {
				cout << "a:" << endl;
				continue;
			}
			if( response == 'b') {
				cout << "b:" << endl;
				continue;
			}
			
			
				}
		if( response == 'b') {
			cout << "beta:" << endl;
			cout << "select x or y --> ";
			cin >> response;
			
			if( response == 'x') {
				cout << "x:" << endl;
				continue;
			}
			if( response == 'y') {
				cout << "y:" << endl;
				continue;
			}
			
			
				}
			else {
				cout << "You didn't choose a, b, or c!" << endl;
				}	
			}

			cout << "quitting menu..." << endl;
			
}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./breakandcon

Main Menu:
a: alpha, b: beta, c: charlie --> a
alpha:
select a or b --> a
a:

Main Menu:
a: alpha, b: beta, c: charlie --> b
beta:
select x or y --> x 
x:

Main Menu:
a: alpha, b: beta, c: charlie --> y
You didn't choose a, b, or c!

Main Menu:
a: alpha, b: beta, c: charlie --> c
quitting menu...


*/
		