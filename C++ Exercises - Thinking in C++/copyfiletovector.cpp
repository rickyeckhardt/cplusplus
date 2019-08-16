#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> backwards;
  
  int wordcount;
  
  ifstream in("copyfiletovector.cpp");
  
  string line;
  
  while(getline(in, line)) {
    backwards.push_back(line); // Add the line to the end
  }
	  
 wordcount = backwards.size();	  
	  
  for(int i = wordcount ; i > 0; i--)
    cout << i << ": " << backwards[i] << endl;
} 