
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Persons {
    public:
       void setFirstName(string fname) { firstName = fname; }
       void setLastName(string lname) { lastName = lname; }
       void setWholeName(string fname, string lname ) { wholeName = fname + " " + lname; }
       void setPhoneNumber(string phone) { phoneNumber = phone; }
      
       string getFirstName() { return firstName; }
       string getLastName() { return lastName; }
       string getPhoneNumber() { return phoneNumber; }
       string getPerson() { return firstName + " | " + lastName + " | " + phoneNumber + " | " + wholeName; }
    
    private:
       string firstName;
       string lastName;
       string wholeName;
       string phoneNumber;
};

//void readFile();
void inputPerson();
void menu();
void menuText();
void searchRecord();
void removeRecord();
void viewSort();

int main () {
  
  menu();
  
  return 0;
}
/*
void readFile() {
  string line;
    ifstream myfile ("address.txt");
    if (myfile.is_open())
    {
      while ( myfile.good() )
      {
        getline (myfile,line);
        cout << line << endl;
      }
      myfile.close();
    }

    else cout << "Unable to open file"; 
}
*/
void inputPerson() {
  Persons person;
    string fname, lname, pnum; 
    
    ofstream myfile ("address.txt", ios::app);
    if (myfile.is_open())
    {
     
        cout << "First Name: ";
        cin >> fname;
        person.setFirstName(fname);
        
        cout << "Last Name: ";
        cin >> lname;
        person.setLastName(lname);
        
        person.setWholeName(fname, lname);
        
        cout << "Phone Number: ";
        cin >> pnum;
        person.setPhoneNumber(pnum);
        
        myfile <<  person.getPerson() + "\n";
        myfile.close();
    }
    
    else cout << "Unable to open file";
}
  
void menu() {
  
  int choice = 0 ;
  viewSort();
  menuText();

  do  {
    cin >> choice;
    if (choice == 1 ) {
      cout << "---------------------------------------------------------\n";
      cout << " Enter Person\n";
      cout << "---------------------------------------------------------\n";
      inputPerson();
      menuText();
      
    } else if (choice == 2) {
      cout << "---------------------------------------------------------\n";
      cout << "People You Know\n";
      cout << "---------------------------------------------------------\n";
      viewSort();
      menuText();
            
    }
    else if (choice == 3) {
          cout << "---------------------------------------------------------\n";
          cout << "Search Name, Number or Address\n";
          cout << "---------------------------------------------------------\n";
          searchRecord();
          menuText();
        }
     else if (choice == 4) {
              cout << "---------------------------------------------------------\n";
              cout << "Remove Record\n";
              cout << "---------------------------------------------------------\n";
              removeRecord();
              menuText();
            }
  } while(choice != 5);  
  
  cout << "\nGoodbye!";
}

void menuText(){
  cout << "---------------------------------------------------------\n";
    cout << " ADDRESS BOOK\n";
    cout << "---------------------------------------------------------\n";
    cout << " 1\tEnter Person\n";
    cout << " 2\tSee Address Book\n";
    cout << " 3\tSearch\n";
    cout << " 4\tRemove Record\n";
    cout << " 5\tQuit\n";
    cout << "---------------------------------------------------------\n";
    cout << " : ";
}

void searchRecord() {
    string line;
    string record;
    string term;
    
    cout << "Search: ";
    cin >> term;
    
    string searchTerm(term); 
    ifstream myfile ("address.txt");
    if (myfile.is_open())
    {
        while (! myfile.eof() )
        {
            getline (myfile,line);
            if(line.find(searchTerm) != string::npos)
            {
                cout << line << endl;
            }
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}

void removeRecord ( ) {
    int elementNumber;

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

    
    int entry;
    
    cout << endl << "Remove entry (number): ";
    cin >> elementNumber;
    
    addressBook.erase(addressBook.begin() + elementNumber );    
    
    cout << "Entry has been removed." << endl;
    
    ofstream newfile ("tempfile.txt", ios::app);
    if (newfile.is_open())
    {
        for (int i = 0; i < addressBook.size(); i++ ) {
                newfile << addressBook[i] << endl;
              }
        newfile.close();
    }
    rename("tempfile.txt", "address.txt");
}

void viewSort() {
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
