    // Counts the occurrences of a word
	
	//Changed from taken command line arguments to taken user input for word
	//Set it to static file, but could be taken from command line instead
	
	//Edited by Ramen Solider June 19 2007
	
    #include <iostream>
    #include <fstream>
    #include <string>
	
	using namespace std;

    int main() {
     
	  string word;
	  string file;
	  
	  ifstream in("repeatwords.txt"); //Opens file repeatwords.txt
	  
	  cout << "Enter word to search for: ";
	  cin >> word;						//Gets word to search for

      // Count occurrences:
      long wcount = 0;
	  
      string token;
	  
      while (in >> token)
        if (word == token)
          ++wcount;

      // Print result:
      cout << '"' << word << "\" appeared "
           << wcount << " times\n";
    } 
	
/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./countrepeatword
Enter word to search for: word    
"word" appeared 3 times

*/