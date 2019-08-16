
//TICPP Exercise
//Written by Ramen Soldier 19 June 2007

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

vector<float> numbers;			//Declares vector of floats named numbers
ifstream in("numbers.txt");		//Opens file numbers.txt to be fed into vector numbers

float number;	//Declares a float name number to hold each number

while( in >> number )
	numbers.push_back(number);	//puts each element into vector
	
for( int i = 0 ; i < numbers.size() ; i++ )
	numbers[i] = numbers[i] * numbers[i];	//Squares each input
	
for( int i = 0 ; i < numbers.size() ; i++ )
	cout << i + 1 << " * " << i + 1 << " = " << numbers[i] << endl; //Outputs each squared number

}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./squarevectorofints
1 * 1 = 1
2 * 2 = 4
3 * 3 = 9
4 * 4 = 16
5 * 5 = 25
6 * 6 = 36
7 * 7 = 49
8 * 8 = 64
9 * 9 = 81
10 * 10 = 100


*/