/*
	+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	+																							
	+		MACHINE PROBLEM: MP4B														
	+                  TERM: SUMMER I 2004								  				
	+		     CREATED BY: RICKY ECKHARDT								 				
	+					 												
	+			    PURPOSE: Takes a given positive five digit number					
	+						 and breaks it into individual digits. It					
	+						 then outputs the given number and its						
	+						 break down. Then it outputs the reverse of					
	+						 the number, and it's individual break down.				
    +																					
    +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ 
*/

// Removed .h from iostream
#include <iostream>

using namespace std;

int main(void)
{
	int	ch0,			//ones 
		ch1,			//tens
		ch2,			//hundreds 
		ch3,			//thousands
		ch4,			//ten-thousands
		five_Digit,		//starting ten-thousands number
		four_Digit,		//thousands
		three_Digit,	//hundreds
		two_Digit,		//tens
		one_Digit;		//ones

	//Outputs title to screen
	cout	<< " -------------------------------------------------"
			<< "\n Five Digit Decimal Digit Extractor\n"
			<< " -------------------------------------------------\n\n";

	//Gets a five-digit number from user
	cout	<< "Enter a five digit number:\t";
	cin		>> five_Digit;
	cout	<< "\n\n";

	//Extracts the four digit number and the ones place digit from the five digit
	four_Digit	= five_Digit / 10;
	ch0			= five_Digit % 10;
	
	//Extracts the three digit number and the tens place digit
	three_Digit	= four_Digit / 10;
	ch1			= four_Digit % 10;

    //Extracts the two digit number and the hundreds place digit
	two_Digit	= three_Digit / 10;
	ch2			= three_Digit % 10;

	//Extracts the one digit number and the thousands place digit
	one_Digit	= two_Digit / 10;
	ch3			= two_Digit % 10;

	//Assigns the one digit number which is the ten-thousands place digit
	ch4			= one_Digit;


	//Outputs the given positive integer number
	cout	<< "The given positive integer is:\t\t\t\t"
			<< ch4
			<< ch3
			<< ch2
			<< ch1
			<< ch0
			<< "\n\n";

	//Outputs the given positive integers individual decimal digits
	cout	<< "The decimal digits are ( from L to R ):\t\t\t"
			<< ch4 << " , "
			<< ch3 << " , "
			<< ch2 << " , "
			<< ch1 << " , "
			<< ch0
			<< "\n\n";

	//Ouputs the reverses of the given positive integer 
	cout	<< "The reverse of the five digit number is:\t\t"
			<< ch0
			<< ch1 
			<< ch2 
			<< ch3 
			<< ch4
			<< "\n\n";

	//Outputs the reverse individual decimal digits of given positive integer
	cout	<< "Decimal digits of the reverse are ( from L to R ):\t"
			<< ch0 << " , "
			<< ch1 << " , "
			<< ch2 << " , "
			<< ch3 << " , "
			<< ch4
			<< "\n\n";

	return 0;

}//END OF MAIN

/****************OUTPUT WITH GIVEN DATA***************************************************

				***********************
				*	DATA:	87503	  *
				*			91543	  *
				*			70012	  *
				***********************

 -------------------------------------------------
 Five Digit Decimal Digit Extractor
 -------------------------------------------------

	Enter a five digit number:      87503


	The given positive integer is:                          87503

	The decimal digits are ( from L to R ):                 8 , 7 , 5 , 0 , 3

	The reverse of the five digit number is:                30578

	Decimal digits of the reverse are ( from L to R ):      3 , 0 , 5 , 7 , 8

	Press any key to continue

 -------------------------------------------------
 Five Digit Decimal Digit Extractor
 -------------------------------------------------

	Enter a five digit number:      91543


	The given positive integer is:                          91543

	The decimal digits are ( from L to R ):                 9 , 1 , 5 , 4 , 3

	The reverse of the five digit number is:                34519

	Decimal digits of the reverse are ( from L to R ):      3 , 4 , 5 , 1 , 9

	Press any key to continue

 -------------------------------------------------
 Five Digit Decimal Digit Extractor
 -------------------------------------------------

	Enter a five digit number:      70012


	The given positive integer is:                          70012

	The decimal digits are ( from L to R ):                 7 , 0 , 0 , 1 , 2

	The reverse of the five digit number is:                21007

	Decimal digits of the reverse are ( from L to R ):      2 , 1 , 0 , 0 , 7

	Press any key to continue


*********************END OF GIVEN DATA RESULTS************************************************/
