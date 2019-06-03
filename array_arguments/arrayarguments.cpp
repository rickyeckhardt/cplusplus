// Removed .h from iostream
#include <iostream>

// Added using namespace std;
using namespace std;

void func1( int a[] , int size ) {
	for( int i = 0; i < size ; i++ )
		a[i] = i * 10;
}

void func2( int* a, int size ) {
	for( int i = 0 ; i < size ; i++ ) 
		a[i] = i * 20;
}

void print( int a[], string name, int size ) {
	for( int i = 0 ; i < size ; i++ ) 
		cout << name << "[" << i << "] = " << a[i] << endl;
}

int main (int argc, char * const argv[]) {
   int a[5], b[5];
   
   //Output to show garbage is in memory until initialized by func
   print(a, "a", 5);
   print(b, "b", 5);
   
   //Initalizing values  
   func1(a, 5);
   func1(b, 5);
   print(a, "a", 5);
   print(b, "b", 5);   
   
   //Notice values have changed 
   func2(a, 5);
   func2(b, 5);
   print(a, "a", 5);
   print(b, "b", 5);   
   
}

/*
[0] = 0
a[1] = 0
a[2] = 0
a[3] = 0
a[4] = 0
b[0] = -1645211184
b[1] = 32718
b[2] = 32
b[3] = 0
b[4] = 204644352
a[0] = 0
a[1] = 10
a[2] = 20
a[3] = 30
a[4] = 40
b[0] = 0
b[1] = 10
b[2] = 20
b[3] = 30
b[4] = 40
a[0] = 0
a[1] = 20
a[2] = 40
a[3] = 60
a[4] = 80
b[0] = 0
b[1] = 20
b[2] = 40
b[3] = 60
b[4] = 80
*/