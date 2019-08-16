/*   /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\	
	/	Machine		Probem: MP4c									 
	\	Course:		CSCI 1470										 
	/	Term:		Summer 1 2004									 
	\	CREATED BY: RICKY ECKHARDT									 
	/										 
	\	Purpose:	Calculates	amount of 							 
	/				quarters, nickels, dimes, 					     
	\				and pennies are in the  					     
	/			    amount given.									 
	\																 
	 \/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
*/

// Removed .h after <iostream>
#include <iostream>

// Added "using namespace std;"
using namespace std;

int main(void)
{
	int quarter, 
		quarter_remain, 
		dimes, 
		dimes_remain, 
		nickels, 
		nickels_remain, 
		pennies, 
		change;

	//Outputs title
	cout	<< endl
			<< "\t\tChange calculator"
			<< endl
			<< "\t--------------------------------------------"
			<< endl
			<< endl;

	//Gets the amount of change
	cout	<< "\t\tEnter an amount of change:\t";
	cin		>> change;
	cout	<< endl
			<< endl;

	
	quarter = change / 25;				//Calculates how many quarters

	quarter_remain = change % 25;		//Calculates remainder after quarters

	dimes = quarter_remain / 10;		//Calculates how many dimes

	dimes_remain = quarter_remain % 10; //Calculates remainder after dimes

	nickels = dimes_remain / 5;			//Calculates how many nickels

	nickels_remain = dimes_remain % 5;	//Calculates remainder after nickels

	pennies = nickels_remain / 1;		//Calulates how many pennies

	//Outsputs the amount of quarters, dimes, nickels, and pennies in the given amount
	cout	<< "\t\tAmount of change given:\t\t"
			<< change
			<< " cents"
			<< endl
			<< endl

			<< "\t\tNumber of quarters:\t\t"
			<< quarter
			<< endl
			<< endl

			<< "\t\tNumber of dimes:\t\t"
			<< dimes
			<< endl
			<< endl

			<< "\t\tNumber of nickels:\t\t"
			<< nickels
			<< endl
			<< endl

			<< "\t\tNumber of pennies:\t\t"
			<< pennies
			<< endl
			<< endl;

	return 0;
}
	//END OF MAIN

/*
	 -------------------------------------------------------------------------
	|																		  |
	|							RESULTS BOX									  |
	 -------------------------------------------------------------------------
	|																		  |	
    |																		  |
    |            Change calculator											  |	
    |    --------------------------------------------                         |
    |                                                                         |
    |           Enter an amount of change:      99                            |
    |                                                                         |
    |                                                                         |
    |           Amount of change given:         99 cents                      | 
    |                                                                         |
    |           Number of quarters:             3                             |
	|	                                                                      | 
    |           Number of dimes:                2                             |
    |                                                                         |
    |           Number of nickels:              0                             |  
    |                                                                         | 
    |           Number of pennies:              4                             |
    |                                                                         |
	|			Press any key to continue									  |
	|											                              |
	|																		  |
	 -------------------------------------------------------------------------
*/