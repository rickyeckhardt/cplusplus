//***************************************
//	PROBLEM 8A ONE				
//	CREATED BY: RICKY ECKHARDT		
//	PURPOSE: Fibonacci Number Sequence	
//	
//***************************************

// Removed .h from iostream
#include <iostream>

// Added using namespace std;
using namespace std;

int main(void)
{
	unsigned int	fib_zero = 1, 
					fib_one = 1, 
					fib_next, 
					number_times, 
					quit;

	//Outputs the title to the screen
	cout	<< "Sequence of Fibonacci Numbers\n"
			<< "-------------------------------\n\n";

	//Gets how many Fibonacci numbers need to be generated
	cout	<< "Enter how many Fibonacci numbers you want generated:\t";
	cin		>> quit;

	//Outputs the first two Fibonacci numbers and the table header
	cout	<< "\n"
			<< "n\t\tf(n)\n"
			<< "-------------------------------\n"
			<< "0\t\t"
			<< fib_zero
			<< "\n1\t\t"
			<< fib_one
			<< endl;
			
	//Generates Fibonacci numbers past n > 2
	for ( number_times = 2 ; number_times <= quit ; ++number_times )   
		{
			fib_next = fib_zero + fib_one;
			fib_zero = fib_one;
			fib_one	 = fib_next;

			cout	<< number_times
					<< "\t\t"
					<< fib_next 
					<< "\n";
		}

	//Outputs that the sequence is completed
	cout	<< "-------------------------------\n"
			<< "Sequence Completed!\n\n";

	return 0;
}//END OF FUNCTION

/*******************************PROGRAM RESULTS****************************

		Sequence of Fibonacci Numbers
		-------------------------------

		Enter how many Fibonacci numbers you want generated:    15

		n               f(n)
		-------------------------------
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
		-------------------------------
		Sequence Completed!

Press any key to continue

*******************************END PROGRAM RESULTS*******************************/