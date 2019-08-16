#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class Persons {
   public:
      void setFirstName(string fname) { firstName = fname; }
      void setLastName(string lname) { lastName = lname; }
      void setPhoneNumber(string phone) { phoneNumber = phone; }
      void setHomeAddress(string address) { homeAddress = address; }
      void setStateAbbr(string abbr) {stateAbbr = abbr;}
      void setZipCode(string zip) {zipCode = zip; }

      string getFirstName() { return firstName; }
      string getLastName() { return lastName; }
      string getPhoneNumber() { return phoneNumber; }
      string getHomeAddress() { return homeAddress; }
      string getStateAbbr() { return stateAbbr;}
      string getZipCode() { return zipCode; }
      string getPerson() { return firstName + "\t" + lastName + "\t" + phoneNumber + "\t" + stateAbbr + "\t" + zipCode; }

   private:
      string firstName;
      string lastName;
      string phoneNumber;
      string homeAddress;
      string stateAbbr;
      string zipCode;
};

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

void inputPerson() {
 Persons person;
   string fname, lname, pnum, zippy, staty, addy;


   ofstream myfile ("address.txt", ios::app);
   if (myfile.is_open())
   {

       cout << "\tFirst Name: ";
       cin >> fname;
       person.setFirstName(fname);

       cout << "\tLast Name: ";
       cin >> lname;
       person.setLastName(lname);

       cout << "\tPhone Number ( xxx-xxx-xxxx ): ";
       cin >> pnum;
       person.setPhoneNumber(pnum);

       cout << "\tState ( xx ): ";
       cin >> staty;
       person.setStateAbbr(staty);

       cout << "\tZip Code ( xxxxx ): ";
       cin >> zippy;
       person.setZipCode(zippy);

       myfile <<  person.getPerson() + "\n";
       myfile.close();
   }

   else cout << "Unable to open file";
}

void menu() {

 int choice = 0 ;
 cout << "\t---------------------------------------------------------\n";
 cout << "\t\tADDRESS\n";
 cout << "\t---------------------------------------------------------\n\n\n";
 cout << endl;
 viewSort();
 cout << endl;
 menuText();

 do  {
   cin >> choice;
   if (choice == 1 ) {
     cout << "\t---------------------------------------------------------\n";
     cout << " \t\tEnter Person\n";
     cout << "\t---------------------------------------------------------\n";
     inputPerson();
     menuText();

   } else if (choice == 2) {
     cout << "\t---------------------------------------------------------\n";
     cout << "\t\tPeople You Know\n";
     cout << "\t---------------------------------------------------------\n";
     viewSort();
     menuText();

   }
   else if (choice == 3) {
         cout << "\t---------------------------------------------------------\n";
         cout << "\t\tSearch Name, Number or Address ( Case Sensitive )\n";
         cout << "\t---------------------------------------------------------\n";
         searchRecord();
         menuText();
       }
    else if (choice == 4) {
             cout << "\t---------------------------------------------------------\n";
             cout << "\t\tRemove Record\n";
             cout << "\t---------------------------------------------------------\n";
             removeRecord();
             menuText();
           }
 } while(choice != 5);

 cout << "\n\tGoodbye!";
}

void menuText(){
 cout << "\t---------------------------------------------------------\n";
   cout << "\t\tMENU\n";
   cout << "\t---------------------------------------------------------\n";
   cout << " \t1\tEnter Person\n";
   cout << " \t2\tSee Address Book\n";
   cout << " \t3\tSearch\n";
   cout << " \t4\tRemove Record\n";
   cout << " \t5\tQuit\n";
   cout << "\t---------------------------------------------------------\n";
   cout << " \t\t: ";
}

void searchRecord() {
   string line;
   string record;
   string term;

   cout << "\tSearch: ";
   cin >> term;

   string searchTerm(term);
   ifstream myfile ("address.txt");
   if (myfile.is_open())
   {
       cout << "\tENTRIES FOUND:\n";
       while (! myfile.eof() )
       {
           getline (myfile,line);
           if(line.find(searchTerm) != string::npos)
           {
               cout << "\t\t" << line << endl;
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
         myfile.close();
         sort(addressBook.begin(), addressBook.end());

         for (int i = 0; i < addressBook.size(); i++ ) {
             cout << "\t" << i << " " << addressBook[i] << endl;
           }

   cout << endl << "\tRemove entry (number): ";
   cin >> elementNumber;

   addressBook.erase(addressBook.begin() + elementNumber );

   cout << "\tEntry has been removed." << endl;

   ofstream newfile ("tempfile.txt", ios::app);
   if (newfile.is_open())
   {
       for (int i = 0; i < addressBook.size(); i++ ) {
               newfile << addressBook[i] << endl;
             }
       newfile.close();
   }
  bool kill = remove ("address.txt");
    if ( kill == 0 )
    puts ( "File successfully deleted" );
  else
    perror( "Error cannot delete file" );
    bool result = rename("tempfile.txt", "address.txt");
  if ( result == 0 )
    puts ( "File successfully renamed" );
  else
    perror( "Error renaming file" );
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
         cout << "\t" << i << " " << addressBook[i] << endl;
       }
 }

