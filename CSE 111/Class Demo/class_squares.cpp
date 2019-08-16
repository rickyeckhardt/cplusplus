#include <cstdio> 
#include <cstdlib> 
#include <iostream> 
 
using namespace std; 
 
class SQUARES { 
public: 
 
 double square (double doubleVar) 
 { 
 return (doubleVar * doubleVar); 
 } 
 
 void displayExplanation(void) // show the rules 
 { 
 cout << "This program sums the square of multiple\n" 
 << "series of positive numbers. \n\nTerminate each sequence\n" 
 << "by entering a negative number.\n\n" 
 << "Terminate the series by entering an\n" 
 << "empty sequence.\n" 
 << endl; 
 return; 
 } 
 
 double sumSquareSequence(double dValue) 
 { 
 double accumulator = 0.0; 
 
 if (dValue < 0) // check to see if negative 
 { 
 return 0; 
 } 
 
 double sqvalue = square(dValue); 
 accumulator += sqvalue; 
 
 
 return accumulator; 
 } 
private: 
 
 double doubleVar; 
}; 

int main(){
  return 0;
}