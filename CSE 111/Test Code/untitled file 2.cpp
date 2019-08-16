#include <iostream>

using namespace std;

//Was passed by value instead of reference
void Increment(int &nextNumber); 

int main() {
  int count = 1; 
  
    
  while( count < 10 ) {       // No {} brackets used for while loop
     cout << count << " ";   // Call to Increment was inside comment block
     Increment(count);  
     cout << count << endl;
  }    
   
  return 0;
}

//Was passed by value instead of reference so count never incremented 
void Increment (int &nextNumber) { 
 nextNumber++;
}
