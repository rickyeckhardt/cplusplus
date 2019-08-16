#include <iostream>

using namespace std;

//Declares a structure
typedef struct {
	int h, j, k;
	} Three;

int main (int argc, char * const argv[]) {
   
   //Declares an array of ten integers
   int array[10];
   
   //Fills the array with 10 time the value of i and outputs it
   for ( int i = 0 ; i <  10 ; i++ ) {
		array[i] = i * 10;
		cout << "array[" << i << "] = " << array[i] << endl;
	}
	
	//Declares an array of a structure
	Three j[10];
	
	//Cycles through each array type and assigns it a value
	for( int i = 0 ; i < 10 ; i++ ) {
		j[i].h = i * 10;
		j[i].j = i * 20;
		j[i].k = i * 30;
	}
	
	//Outputs j[i].h
	for( int i = 0 ; i < 10 ; i++ ) {
		cout << "j[" << i << "].h = " << j[i].h << endl;
	}
	
	//Outputs j[i].j
	for( int i = 0 ; i < 10 ; i++ ) {
		cout << "j[" << i << "].j = " << j[i].j << endl;
	}
	
	//Outputs j[i].k
	for( int i = 0 ; i < 10 ; i++ ) {
		cout << "j[" << i << "].k = " << j[i].k << endl;
	}
	
}

/*

array[0] = 0
array[1] = 10
array[2] = 20
array[3] = 30
array[4] = 40
array[5] = 50
array[6] = 60
array[7] = 70
array[8] = 80
array[9] = 90
p[0].h = 0
p[1].h = 10
p[2].h = 20
p[3].h = 30
p[4].h = 40
p[5].h = 50
p[6].h = 60
p[7].h = 70
p[8].h = 80
p[9].h = 90
p[0].j = 0
p[1].j = 20
p[2].j = 40
p[3].j = 60
p[4].j = 80
p[5].j = 100
p[6].j = 120
p[7].j = 140
p[8].j = 160
p[9].j = 180
p[0].k = 0
p[1].k = 30
p[2].k = 60
p[3].k = 90
p[4].k = 120
p[5].k = 150
p[6].k = 180
p[7].k = 210
p[8].k = 240
p[9].k = 270


*/