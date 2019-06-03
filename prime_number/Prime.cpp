#include <iostream>
#include <math.h>

using namespace std;

int main() {

int i, count, num, isprime;

num = 2;

for ( count = 0 ; count < 97 ; num++ ) {

	isprime = 1;

	for ( i = 2 ; i <= sqrt(num) ; i++ ) {
			if ( num % i == 0 ) {
				isprime = 0;
				}
			}
	
	
if ( isprime!=0 ){
		cout << num << " \t";
	}
	
	count++;
	}
}

