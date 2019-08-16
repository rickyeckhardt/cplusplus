#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void searchRecord();

int main() {

  searchRecord();
 return 0; 
}

void searchRecord() {
    string line;
    string record;
    string term;
    
    cout << "Search: ";
    cin >> term;
    
    string searchTerm(term); 
    ifstream myfile ("address.txt", ios::app);
    if (myfile.is_open())
    {
        while (! myfile.eof() )
        {
            getline (myfile,line);
            if(line.find(searchTerm) != string::npos)
            {
                line.erase;
       
            }
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}