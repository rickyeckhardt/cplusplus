//TICPP Exercise using the return on a function

//Written by Ramen Soldier June 19 2007

//calls function to compare value sent using for loop. If value sent is equal to one of the
//conditional statesments it outputs the same number if not it outputs a zero


#include <iostream>

using namespace std;

float number(int i) {
	if( i == 0 )
		return 0;
	if( i == 1)
		return 1;
	if( i ==  2)
		return 2;
	if( i == 8)
		return 8;
	if( i == 9 )
		return 9;
	else
		return 0;
		
}

int main() {

	int integer;
	
	for ( int i = 0 ; i < 10 ; i++ )
		cout << i << " : " << number(i) << endl;	
}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./returninteger
0 : 0
1 : 1
2 : 2
3 : 0
4 : 0
5 : 0
6 : 0
7 : 0
8 : 8
9 : 9


*/