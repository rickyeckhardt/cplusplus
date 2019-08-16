//CH2 TICPP Exercise Copys one files content into another file and then outputs one line at a time using enter key

//Written by Ramen Soldier June 17 2007


#include <iostream>
#include <fstream>

using namespace std;

int main() {

string contents; //Declares a string to hold the contents of the file

ifstream in("copyfile2file.cpp"); //Opens the while to be read
ofstream out("copyfile2file.txt"); //Opens the while to be written to

cout << "\nThe Following Was Copied:\n\n";

while(getline(in, contents)) { //Discards newline character
	out << contents << "\n";   // Adds newline character back in
	cout << contents << "\n"; //Output strings of content being copied
	cin.get();
	}
		
}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./copyfile2file

The Following Was Copied:

//CH2 TICPP Exercise Copys one files content into another file

//Written by Ramen Soldier June 17 2007


#include <iostream>
#include <fstream>

using namespace std;

int main() {

string contents; //Declares a string to hold the contents of the file

ifstream in("copyfile2file.cpp"); //Opens the while to be read
ofstream out("copyfile2file.txt"); //Opens the while to be written to

cout << "\nThe Following Was Copied:\n\n";

while(getline(in, contents)) { //Discards newline character
        out << contents << "\n";   
        cout << contents << "\n";
        }// Adds it back in


}



*/



