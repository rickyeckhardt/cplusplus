#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void viewSort ( ) {
    string currentWord = "";
    ifstream myfile("address.txt");
    vector <string> addressBook;
    int lines = 0;
    addressBook.reserve(10000000);              
    while(getline(myfile, currentWord)) {
        addressBook.push_back(currentWord);     
        lines++;
    }
    
    sort(addressBook.begin(), addressBook.end());    
    
    for (int i = 0; i < addressBook.size(); i++ ) {
        cout << i << " " << addressBook[i] << endl;
      }
}
    