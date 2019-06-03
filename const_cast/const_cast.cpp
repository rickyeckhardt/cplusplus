#include <iostream>

using namespace std;

#define PR( VAL ) \
cout << VAL << endl;
	

int main (int argc, char * const argv[]) {
   const int i = 0;
  int* j = (int*)&i; // Deprecated form
  j  = const_cast<int*>(&i); // Preferred
  // Can't do simultaneous additional casting:
  //! long* l = const_cast<long*>(&i); // Error
  volatile int k = 0;
  int* u = const_cast<int*>(&k);
  
  PR(i);
  PR(long(&i)); //Cast to long instead of seeing HEX value
  PR(long(j)); //Cast to long instead of seeing HEX value
  PR(*j);	//Dereference to get to the value stored in i
  PR(k);
  PR(long(&k)); //Cast to long instead of seeing HEX value
  PR(long(u)); //Cast to long instead of seeing HEX value
  
}