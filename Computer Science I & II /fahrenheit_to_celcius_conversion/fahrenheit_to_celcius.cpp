/************************************************************************	
 *																				
 *		Machine Problem: MP2			Course: CSCI 1470				
 *		Term: Summer 1 2004		
 *
 *		CREATED BY: RICKY ECKHARDT											
 *															
 *		Purpose:	Converts temperature in degrees Fahrenheit			
 *					to degrees Celsius									
 *																		
 ************************************************************************
*/

// Removed .h from iostream and iomanip
#include	<iostream>
#include	<iomanip>

// Added using namespace std;
using namespace std;

int main(void)
{

double fahrenheit, celsius;

cout	<< endl
		<< "\tTemperature Conversion from Fahrenheit to Centigrade"
		<< endl
		<<	"\t---------------------------------------------------"
		<< endl
		<< endl;

//Gets the temperature in fahrenheit from the user
cout	<< "\tGiven temperature in Fahrenheit is:\t" ;
cin		>>	fahrenheit ;

//Converts the temperature from fahrenheit to celsius
celsius = 5.0 / 9.0 * ( fahrenheit - 32.0 );

//Displays the fahrenheit temperature converted unformatted 
cout	<< endl
		<< endl
		<< "\tTemperature in Celsius is:\t\t"
		<< celsius
		<< "\t( unformatted )";
	
//Displays the fahrenheit temperature converted formatted
cout	<< endl
		<< endl
		<< "\tTemperature in Celsius is:\t\t"
		<< setiosflags( ios:: showpoint | ios:: fixed )
		<< setprecision(2)
		<< celsius
		<< "\t( formatted )"
		<< endl
		<< endl;

return 0;
}
//END MAIN

/*

        Temperature Conversion from Fahrenheit to Centigrade
        ---------------------------------------------------

        Given temperature in Fahrenheit is:     79.8


        Temperature in Celsius is:              26.5556 ( unformatted )

        Temperature in Celsius is:              26.56   ( formatted )

Press any key to continue
*/
