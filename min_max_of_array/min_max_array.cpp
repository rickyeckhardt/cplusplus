/************************************************************************	
 *																				
 *		Machine Problem:	MP9			
 *		Course:				CSCI 1470				
 *		Term:				Summer 1 2004		
 *
 *		Name:				RICKY ECKHARDT											
 *															
 *		Purpose:	Takes an array of given size and computes 
 *					the max, min, sum, and average. It outputs
 *					it to the screen with 5 values per line.
 *							
 *																		
 ************************************************************************
*/


#include <iostream>
#include <iomanip>

using namespace std;

/*	*************************
	* FUNCTION PROTOTYPES	*	
	*************************
*/

void getdata( double a[] , int &n );
double max( double a[] , int n );
double min( double a[] , int n );
double sum( double a[] , int n );
double avg( double a[] , int n );
void printdata( double a[] , int n );


//Declares Maximum size of array
const int maxsize = 20;


/*	*************************
	* MAIN FUNCTION			*	
	*************************
*/
int main(void)
{
	
	double array[maxsize];	//Declares an array of size n
	int size;				//Sets the size of the array

	//Outputs title 
	cout	<< "\n------------------------------------------"
			<< "\n\tWorking With Arrays\n"
			<< "------------------------------------------\n\n";

	//Gets the data for the array of type double
	getdata( array , size );
	cout	<< "\n\n";

	//Outputs the arrays data of size n to the screen
	cout	<<	"Array elements are:\n\n";

	printdata( array , size );
			
	//Outputs the largest number in the array 
	cout	<< "The largest element of array is:\t" 
			<< max( array , size ) 
			<< endl
			<< endl;

	//Outputs the smallest number in the array
	cout	<< "The smallest element of array is:\t" 
			<< min( array , size ) 
			<< endl
			<< endl;

	//Outputs the sum of all the numbers in the array
	cout	<< "The sum of array is:\t\t\t" 
			<< sum( array , size ) 
			<< endl
			<< endl;

	//Outputs the average of all the numbers in the array
	cout	<< "The average of array is:\t\t" 
			<< avg( array , size ) 
			<< endl
			<< endl;

	return 0;
}
//END OF FUNCTION




/*	*************************
	* GETDATA FUNCTION		*	
	*************************

	Gets the data for the array of size n
*/
void getdata( double a[] , int &n )
{
	cout << "Enter the size of the array:\t";

	cin >> n;

	for( int i = 0 ; i < n ; ++i )
		{
			cout	<< "Enter a value:\t";
			cin		>>	a[i];
		}
}
//END OF FUNCTION




/*	*************************
	* MAX FUNCTION			*	
	*************************

	Finds the largest number in the array
*/
double max( double a[] , int n )
{
	double temp; //temp holds largest value

	temp = a[0];

	for( int i = 0 ; i < n ; ++i )
		{
			if( a[i] > temp)
				temp = a[i];
		}

		return( temp );
}
//END OF FUNCTION



/*	*************************
	* MIN FUNCTION			*	
	*************************

	Finds the smallest number in the array
*/
double min( double a[] , int n )
{
	double temp; //temp holds smallest value

	temp = a[0];

	for( int i = 0 ; i < n ; ++i )
		{
			if( a[i] < temp)
				temp = a[i];
		}

	return( temp );
}
//END OF FUNCTION



/*	*************************
	* SUM FUNCTION			*	
	*************************

	Calculates the total of all numbers in the array
*/
double sum( double a[] , int n )
{
	double temp = 0; //temp holds sum of all values

	for( int i = 0 ; i < n ; ++i )
		temp = temp + a[i];
		
	return( temp );
}
//END OF FUNCTION



/*	*************************
	* AVG FUNCTION			*	
	*************************

	Calculates the average of all numbers in the array
*/
double avg( double a[] , int n )
{
	double temp; //temp holds average of all values

	temp = sum ( a , n ) / n;

	return( temp );
}
//END OF FUNCTION



/*	*************************
	* PRINT FUNCTION		*	
	*************************

	Outputs the array of size n to the screen five per line
*/
void printdata( double a[] , int n )
{
	cout.setf( ios :: fixed );
	cout.setf( ios :: showpoint );
	cout.precision( 2 );

	for( int i = 0 ; i < n ; i++ )
		{
		
		cout	<< a[ i ] << "\t"; 
		
		}
	
	cout	<< "\n\n";
}
//END OF FUNCTION

/*******************************PROGRAM RESULTS*******************************************


------------------------------------------
        Working With Arrays
------------------------------------------

Enter the size of the array:    20
Enter a value:  12.34
Enter a value:  15
Enter a value:  -7.89
Enter a value:  5.68
Enter a value:  76
Enter a value:  56.34
Enter a value:  63.32
Enter a value:  -98.45
Enter a value:  0.567
Enter a value:  1.78
Enter a value:  47.89
Enter a value:  54.345
Enter a value:  -34.21
Enter a value:  56
Enter a value:  73
Enter a value:  19
Enter a value:  33
Enter a value:  36.89
Enter a value:  -3.673
Enter a value:  .0789


Array elements are:

12.3400         15.0000         -7.8900         5.6800          76.0000
56.3400         63.3200         -98.4500        0.5670          1.7800
47.8900         54.3450         -34.2100        56.0000         73.0000
19.0000         33.0000         36.8900         -3.6730         0.0789


The largest element of array is:        76.0000

The smallest element of array is:       -98.4500

The sum of array is:                    407.0079

The average of array is:                20.3504

Press any key to continue


*******************************PROGRAM RESULTS*******************************************/
