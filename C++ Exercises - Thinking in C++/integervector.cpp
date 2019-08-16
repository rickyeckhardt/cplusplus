
//TICPP Exercise CH 2 

//Written by Ramen Soldier on June 19 2007

//Opens a .txt file consisting of the integers 1-10 it then
//outputs those integers to the screen. In the next step
//it multiplies those integers by ten. Finally, it 
//adds to of the integers together and outputs the value

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

	vector<int> numbers; //Declares a vector of integers names numbers
	
	int getnum; //Declares integer named getnum
	
	ifstream in("numbers.txt"); //Opens the file numbers.txt to be read from
	
	while(in >> getnum)
		numbers.push_back(getnum); //Gets integers one at a time delineated by white-space
		
	cout << "\n::Begin Output of Integers in File::\n";	
		
	for(int i = 0; i < numbers.size(); i++)
		cout << numbers[i] << endl;			//Steps through vector and displays the integers
		
	cout << "::End of Integers in File::\n";
	cout << "\n::Begin multiplying values by ten::\n";
		
	for(int i = 0; i < numbers.size();  i++)
		numbers[i] = numbers[i] * 10;		//Steps through vector multiplying each number by ten
		
	for(int i = 0; i < numbers.size(); i++)
		cout << numbers[i] << endl;			//Steps through vector and displays the new multiplied integers
		
	cout << "::End of Integers in File::\n";
	
	cout << "\n::Add two vector values after they are multiplied:: ";
	
	numbers[0] = numbers[1] + numbers[2]; //Assigns the value of number[1] + number[2] to number[0]
	
	cout << numbers[1] << " + " << numbers[2] << " = " << numbers[0] << "\n\n"; 
		
	}
	
/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./integervector

::Begin Output of Integers in File::
1
2
3
4
5
6
7
8
9
10
::End of Integers in File::

::Begin multiplying values by ten::
10
20
30
40
50
60
70
80
90
100
::End of Integers in File::

::Add two vector values after they are multiplied:: 20 + 30 = 50

*/