   
	//Written by Ramen Soldier on 19 June 2007
	
	//Simply outputs the number of elements in the vector
	 
	#include <string>
    #include <iostream>
    #include <fstream>
    #include <vector>
    using namespace std;

    int main() {
	
      vector<string> words; //Declares Vector Words
	  long wcount;			//Declares a long to hold wordcount
	  string word;			//Declates sting word
	  
      ifstream in("repeatwords.txt"); //Opens file repeatwords.txt
 
      while(in >> word)
		words.push_back(word);		//Puts elements into vector one at a time
     
	  wcount = words.size();		//Assings vector size to wcount
	
	  cout << wcount;				//Outputs how many element in the vector
    } ///:~

