
#include <iostream>
#include <math.h>

using namespace std;

int main () {

	float i , temp_one, temp_two, input;
	
	cout << "Enter a number: ";
	cin >> input;
	
	i = 0;
	
	while ( ( i * i ) <= input ) 
		i += 0.1;
		
		temp_one = i;
		
		for ( int j = 0 ; j < 10 ; j++ ) {
				temp_two = input;
				temp_two /= temp_one;
				temp_two += temp_one;
				temp_two /= 2;
				temp_one = temp_two;
			}
			
		cout << "The sqrt of " << input << " is " << temp_two << endl;
		cout << "The sqrt using sqrt() is " << sqrt(input) << endl;
	
	
}
				