#include <iostream>

using namespace std;


void Increment(int);

int main() {
  int count = 1; 
  
    
 while( count < 10 ) {
  cout << count << " ";
 Increment(count);  
cout << count << endl;
  }     
return 0;
}

void Increment (int &nextNumber) {
 nextNumber++;
}
