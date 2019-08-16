#include <iostream>
#include <fstream>
#include "StdAfx.h"

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

void readFile();
void inputPerson();
void menu();
void menuText();

int main () {
 
 menu();
 
 return 0;
}

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
     readFile();
     menuText();
           
   }
 } while(choice != 3);  
 
 cout << "\nGoodbye!";
}

void menuText(){
 cout << "---------------------------------------------------------\n";
   cout << " ADDRESS BOOK\n";
   cout << "---------------------------------------------------------\n";
   cout << " 1\tEnter Person\n";
   cout << " 2\tSee Address Book\n";
   cout << " 3\tQuit\n";
   cout << "---------------------------------------------------------\n";
   cout << " : ";
}
 
 
 
/*
---------------------------------------------------------
ADDRESS BOOK
---------------------------------------------------------
1	Enter Person
2	See Address Book
3	Quit
---------------------------------------------------------
: 1
---------------------------------------------------------
Enter Person
---------------------------------------------------------
First Name: Ricky
Last Name: Eckhardt
Phone Number: 555-555-5555
---------------------------------------------------------
ADDRESS BOOK
---------------------------------------------------------
1	Enter Person
2	See Address Book
3	Quit
---------------------------------------------------------
: 2
---------------------------------------------------------
People You Know
---------------------------------------------------------
Ricky | Eckhardt | 808-469-5991 | Ricky Eckhardt
Ricky | Eckhardt | 458-999-0000 | Ricky Eckhardt
Ricky | Eckhardy | 555-555-5555 | Ricky Eckhardy
Ricky | Eckhardt | 999-999-9999 | Ricky Eckhardt
bob | shoe | 888-888-8888 | bob shoe
Ricky | Eckhardt | 555-555-5555 | Ricky Eckhardt

---------------------------------------------------------
ADDRESS BOOK
---------------------------------------------------------
1	Enter Person
2	See Address Book
3	Quit
---------------------------------------------------------
: 3

Goodbye!
*/