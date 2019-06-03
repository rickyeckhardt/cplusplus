/*   /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\	
	/	Machine		Probem: MP4										 
	\	Course:		CSCI 1470										 
	/										 
	\	CREATED BY: RICKY ECKHARDT									 
	/										 
	\	Purpose:	Calculates monthly loan payment					 
	/				based on yearly interest, loan					 
	\				amount, and loan duration.						 
	/																 
	\																 
	 \/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main(void)
{
	float	interest_Monthly,	
			interest_Yearly,	
			duration_Monthly,	
			duration_Yearly,	
			loan_Amount,		
			monthly_Payment,
			numerator,
			denominator;

	//Outputs title
	cout	<< endl
			<< "\t\t Calculates Monthly Loan Payment"
			<< endl
			<< "\t  ----------------------------------------------------"
			<< endl;

	//Gets the loan amount
	cout	<< "\t\tEnter loan amount:\t\t"
			<< "$";
	cin		>> loan_Amount;

	//Gets yearly interest rate
	cout	<< endl	
			<< "\t\tEnter yearly interest rate:\t";
	cin		>> interest_Yearly;

	//Gets loan duration in years
	cout	<< endl
			<< "\t\tDuration of the loan in years:\t";
	cin		>> duration_Yearly;


	//Caculates monthly interest
	interest_Monthly = interest_Yearly / 1200;

	//Converts duration in years to months
	duration_Monthly = duration_Yearly * 12;

	//Calculates the numerator
	numerator = interest_Monthly * loan_Amount * pow( 1 + interest_Monthly, duration_Monthly);

	//Calculates the denominator
	denominator = pow( 1 + interest_Monthly, duration_Monthly ) - 1;

	//Calculates the monthly payment 
	monthly_Payment = numerator / denominator;

	//Outputs loan amount, yearly interest, duration in years, and monthly payment
	cout	<< endl
			<< "\t\tThe loan amount is:\t\t" 
			<< "$"
			<< loan_Amount
			<< endl

			<< "\t\tThe yearly interest is:\t\t"
			<< interest_Yearly
			<< "%"
			<< endl

			<< "\t\tThe duration in years is:\t"
			<< duration_Yearly
			<< " Years"
			<< endl

			<< "\t\tThe monthly payment would be:\t"
			<< "$"
			<< setprecision(2)
			<< setiosflags( ios :: fixed | ios :: showpoint )
			<< monthly_Payment
			<< endl
			<< endl;

	return 0;
}

//END MAIN

/*
	 -------------------------------------------------------------------------
	|																		  |
	|							RESULTS BOX									  |
	 -------------------------------------------------------------------------
	|																		  |	
    |            Calculates Montly Loan Payment								  |			
    |     ----------------------------------------------------				  |
    |           Enter loan amount:              $100000	                      |
	|                                                                         |
    |           Enter yearly interest rate:     7.5                           |
	|																		  |
    |           Duration of the loan in years:  30							  |
	|                                                                         |
    |           The loan amount is:             $100000                       |
    |           The yearly interest is:         7.5%                          |
    |           The duration in years is:       30 Years                      |
    |           The monthly payment would be:   $699.21						  |
    |																		  |
	|																		  |
	|			Press any key to continue									  |
	|																		  |
	 -------------------------------------------------------------------------
*/
