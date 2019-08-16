//
// Written by Ramen Soldier on 21 June 2007
//
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int ifthen( int x ) {

	if( x == 1)
		return 100;
	else
		return -100;

}

char dowhile( char y ) {

	while( y != 'n' ) {
		cout << "That isn't the correct letter" << endl;
		cin >> y;
	}
	
}

void vectoruse() {

vector<string> words;
string word;

ifstream in("fivewords.txt");

while( in >> word) { //Takes one word at a time storing it as five strings
	words.push_back(word);
	}
	
int size = words.size();

for( int i = 0; i < size ; i++ )
	cout << "words[" << i << "]: "<< words[i] << endl;

}

void vectoruse2() {

vector<string> words;
string word;

ifstream in("fivewords.txt");

while( getline(in, word)) { //Takes one line at a time storing it as one string
	words.push_back(word);
	}
	
int size = words.size();

for( int i = 0; i < size ; i++ )
		cout << "words[" << i << "]: "<< words[i] << endl;
	
}

int usereturn() {
	return 100;
}

//Main Function
int main() {

	int ifthenval;
	char dowhileval;

	cout << "Enter 1 or another integer to demonstrate an If-Then: ";
	cin >> ifthenval;
	cout << ifthen(ifthenval);
	
	cout << "\nEnter a letter! If it isn't 'n' this demonstrates a while statement: ";
	cin >> dowhileval;	
	cout << dowhile(dowhileval);
	
	cout << "\nDemonstrates Return in a function: " << usereturn() << endl << endl;

	vectoruse();

	vectoruse2();

	cout << "\n\nHello World";

}