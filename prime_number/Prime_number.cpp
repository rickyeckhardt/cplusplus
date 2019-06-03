

#include <math.h>
#include <iostream>

using namespace std;

int main ()
{
        int num, i, prime;
		
		double count;

        num =2;
        for (count=0; count< 100; num++) { /* keep track of primes found, stop at 100, increase the value of the number tested */

                prime=1; /* prime keeps track of if a number is found to be prime or not--1=prime 0=not prime */


                for (i=2; i<=sqrt(num); i++)
				 {
                        if (num%i==0) prime=0; 
				 } /*test to see in num is prime */
				 
                if (prime!=0) {
                        cout << num << " is prime" << endl; /* print primes */
						
						} 		
			count++;
        }

}
 

