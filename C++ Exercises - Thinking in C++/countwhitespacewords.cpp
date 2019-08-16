

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

vector<string> words;
int count; //Holds the number of whitespace-seperated wordss

ifstream in("fivewords.txt");

string word;

while(in >> word)
	words.push_back(word);

count = words.size();

cout << "\nThere are " << count << " whitespace-seperated words in this file!";

cout << "The words are: \n\n";

for(int i = 0; i < words.size(); i++)
	cout << words[i] << "\n\n";

}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./countwhitespacewords

There are 5 whitespace-seperated words in this file!The words are: 

one

two

three

four

five



*/