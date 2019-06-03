/*
	=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)
	=(																					
	=(	Machine Problem:	MP7															
	=(	Term:				Summer I 2004												
	=(	CREATED BY:			RICKY ECKHARDT											
	=(													
	=(	Purpose:			Converts a temperature in celsius to farenheit.				
	=(						After the conversion it repeats the output					
	=(						in a loop to add a given increment for a given				
	=(						number of times.											
	=(																				
	=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)
*/

// Removed .h after <iostream> and <iomanip>
#include <iostream>
#include <iomanip>

// Added "using namespace std;"
using namespace std;


int main(void)
{
	double	farenheit, conversion_Increment, celsius;

	int		number_Conversion, repeat_Conversion;

	//Outputs title
	cout	<< endl
			<< "\t------------------------------------------------------"
			<< endl
			<< "\tConverts Celsius to Farenheit: Adds a Degree Increment"
			<< endl
			<< "\t------------------------------------------------------"
			<< endl;

	//Gets the temperature to be converted to celsius
	cout	<< "\tEnter Temperature in Celsius:\t\t";
	cin		>> celsius;
	cout	<< endl;

	//Gets the number of conversions needed
	cout	<< "\tEnter the Number of Conversions:\t";
	cin		>> number_Conversion;
	cout	<< endl;

	//Gets the conversion increment needed
	cout	<< "\tEnter the Conversion Increment:\t\t";
	cin		>> conversion_Increment;
	cout	<< endl;

	//Converts celsius to farenheit
	farenheit = (9.0/5.0) * celsius + 32.0;

	//Starting loop increment
	repeat_Conversion = 1;

	//Outputs table titles
	cout	<< "\tConversion Number\t\tCelsius\t\tFarenheit"
			<< endl
			<< "\t---------------------------------------------------------"
			<< endl;

	//loop on celsius to farenheit conversion
	while( repeat_Conversion <= number_Conversion )
		{
			//Outputs conversion number, farenheit formatted, and incremented.
			cout	<< "\t"
					<< repeat_Conversion 
					<< "\t\t\t\t"
					<< setiosflags ( ios :: showpoint | ios :: fixed )
					<< setprecision( 2 )
					<< celsius
					<< "\t\t"
					<< farenheit
					<< endl;

			//adds conversion increment to celsius
			celsius += conversion_Increment;
			
			//adds conversion increment to farenheit
			farenheit = (9.0/5.0) * celsius + 32.0;
	
			//updates counter variable
			repeat_Conversion++;			
		}

	//Outputs conversion complete
	cout	<< endl
			<<"\t***Conversions Completed***"
			<< endl
			<< endl;

	return 0;
}	//END OF MAIN FUNCTION

/***********************************PROGRAM RESULTS********************************************

  
       
        ------------------------------------------------------
        Converts Celsius to Farenheit: Adds a Degree Increment
        ------------------------------------------------------
        Enter Temperature in Celsius:           15

        Enter the Number of Conversions:        10

        Enter the Conversion Increment:         5.5

        Conversion Number               Celsius         Farenheit
        ---------------------------------------------------------
        1                               15.00           59.00
        2                               20.50           68.90
        3                               26.00           78.80
        4                               31.50           88.70
        5                               37.00           98.60
        6                               42.50           108.50
        7                               48.00           118.40
        8                               53.50           128.30
        9                               59.00           138.20
        10                              64.50           148.10

        ***Conversions Completed***

Press any key to continue
*********************************END OF PROGRAM RESULTS*****************************************/
