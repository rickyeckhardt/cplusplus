
//Written by ramen solider june 19 2007

//Opens a file of integers and displays contents backwards

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

vector<int> numbers;			//Declares vector of integers
ifstream in("numbers.txt");		//Opens file numbers.txt to be read

int getnum;						//Place holder for single integer being read

while( in >> getnum)
	numbers.push_back(getnum);	//Reads one integer at a time
	
int nlines = numbers.size();	//Assigns the size of the vector numbers to nlines
 
for( int i = 0 ; i < nlines ; i++ ) {
    int lineno = nlines-i-1;								//Takes the size of numbers and subtracts the value of i - 1 and assigns it to a new int named lineno
	cout << lineno << ":  " << numbers[lineno] << endl;		//Says print out lineno and then the element of the vector numbers at that position in the array
	}

}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./displayvectorback
9:  10
8:  9
7:  8
6:  7
5:  6
4:  5
3:  4
2:  3
1:  2
0:  1


*/
