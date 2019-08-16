//***************************************
//	PROBLEM 8A TWO						
//	CREATED BY: RICKY ECKHARDT
//	PURPOSE: Fibonacci Number Sequence	
//***************************************

// Removed .h from iostream
#include <iostream>

// Added using namespace std;
using namespace std;

//FUNCTION PROTOTYPES
int fib(int);

//MAIN FUNCTION
int main()
{
	int quit;

	//Outputs program title to screen
	cout	<< "\n\t\tSequence of Fibonacci Numbers\n"
			<< "\t\t-----------------------------\n\n";

	//Gets how many Fibonacci numbers to be generated
	cout	<< "\t\tEnter how many Fibonacci numbers you want generated:\t";
	cin		>>	quit;

	//Outputs the data tables title/header
	cout	<< "\n\n\t\tn\t\tf(n)\n"
			<< "\t\t--------------------\n";

	//Generates the sequence of Fibonacci numbers
	for ( int x = 0 ; x <= quit ; x++)
		{
			cout	<< "\t\t"
					<< x 
					<< "\t\t"
					<< fib(x) 
					<< "\n";
		}

	//Outputs that the sequence has ended
	cout	<< "\t\t--------------------\n"
			<< "\t\t  END OF SEQUENCE\n\n";

	return 0;

}//END OF MAIN FUNCTION



//**************************************
//FUNCTION GENERATES FIBONACCI NUMBERS *
//**************************************

int fib(int n)
{
	if ( n <= 0 )
		return 1;
	else if ( n == 1 )
		return 1;
	else
		return fib( n - 1 ) + fib( n - 2);
}

//**************************************
//END OF FUNCTION					   *
//**************************************


/*********************************PROGRAM RESULTS*************************

  
                Sequence of Fibonacci Numbers
                -----------------------------

                Enter how many Fibonacci numbers you want generated:    15


                n               f(n)
                --------------------
                0               1
                1               1
                2               2
                3               3
                4               5
                5               8
                6               13
                7               21
                8               34
                9               55
                10              89
                11              144
                12              233
                13              377
                14              610
                15              987
                --------------------
                  END OF SEQUENCE

				Press any key to continue

**********************************************END OF PROGRAM RESULTS**********/