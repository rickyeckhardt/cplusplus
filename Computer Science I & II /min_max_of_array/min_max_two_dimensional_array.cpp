/*		*********************************************************************************
		*																				*
		*		MACHINE PROBLEM 10														*
		*																				*
		*		TERM: Summer 1 2004														*
		*		NAME: RICKY ECKHARDT													*
		*		ID: 000-21-9868															*
		*																				*
		*	 Purpose: Uses a two-dimensional array to sum,								*
		*	          average, find the max, and min of n								*
		*			  given elements.  Then outputs all									*
		*			  inputted data.													*
		*			  																	*
		*********************************************************************************
*/

// Removed .h from iostream
#include <iostream>

using namespace std;



//CONSTANT DECLARATIONS

const int MAXROWS		= 100;
const int MAXCOLUMNS	= 100;



//*******************************
// FUNCTION PROTOTYPES			*
//*******************************

void getdata( double x[][MAXCOLUMNS], int &row, int &col);
double	max(double x[][MAXCOLUMNS], int row, int col);
double	min(double x[][MAXCOLUMNS], int row, int col);
double	sum(double x[][MAXCOLUMNS], int row, int col);
double	avg(double x[][MAXCOLUMNS], int row, int col);
void printdata(double x[][MAXCOLUMNS], int row, int col);

//END OF FUNCTION PROTOTYPES



//*******************************
// MAIN FUCNTION				*
//*******************************

int main(void)
{
	double	array[MAXROWS][MAXCOLUMNS];

	int		rows, 
			columns;

	//OUTPUTS THE PROGRAM TITLE
	cout	<< "\n\t-----------------------------------------------------\n"
			<< "\t\tWORKING WITH TWO-DIMENSIONAL ARRAYS\n"
			<< "\t-----------------------------------------------------\n\n";


	//GETS THE DATA FOR THE ARRAY
	getdata( array, rows, columns);

	 
	//OUTPUTS THE ARRAY
	cout	<< "\tThe elements of the array are:\n"
			<< "\t------------------------------------------------------------------\n";
	printdata( array, rows, columns);
	cout	<< "\t------------------------------------------------------------------\n"
			<< endl;

	cout.setf( ios :: fixed);
	cout.setf( ios :: showpoint );
	cout.precision( 4 );

	//OUTPUTS THE LARGEST ELEMENT OF THE ARRAY
	cout	<< "\tThe largest element of the array:\t";
	cout	<< max( array, rows, columns )
			<< endl
			<< endl;


	//OUTPUTS THE SMALLEST ELEMENT OF THE ARRAY
	cout	<< "\tThe smallest element of the array:\t";
	cout	<< min( array, rows, columns )
			<< endl
			<< endl;


	//OUTPUTS THE SUM OF ALL ELEMENTS OF THE ARRAY
	cout	<< "\tThe sum of the array:\t\t\t";
	cout	<< sum( array, rows, columns) 
			<< endl
			<< endl;


	//OUTPUTS THE AVERAGE OF ALL THE ELEMENTS OF THE ARRAY
	cout	<< "\tThe average of the array:\t\t";
	cout	<< avg( array, rows, columns) 
			<< endl
			<< endl;

	return 0;

}

//END OF MAIN FUNCTION



//***************************************
//	GETDATA FUNCTION					*
//***************************************

void getdata( double x[][MAXCOLUMNS], int &row, int &col)
{
	cout	<< "\tEnter the number of rows:\t";
	cin		>> row;

	cout	<< "\tEnter the number of columns:\t";
	cin		>> col;

	cout	<< endl
			<< endl;

	for( int i = 0 ; i < row ; ++i )
		{
			for( int j = 0 ; j < col ; ++j )
				{
					cout	<< "\tEnter a real value:\t";
					cin		>> x[i][j];
				}

		}

	cout	<< endl
			<< endl;
}

//END OF FUNCTION




//***************************************
// MAXIMUM FUNCTION						*
//***************************************

double	max(double x[][MAXCOLUMNS], int row, int col)
{
	double temp;

	temp = x[0][0];

	for( int i = 0 ; i < row ; ++i )
		{	
			for( int j = 0 ; j < col ; ++j )
				{
					if( x[i][j] > temp )
						temp = x[i][j];
				}
		}

	return ( temp );
}

//END OF MAX FUNCTION



//***************************************
// MINIMUM FUNCTION						*
//***************************************

double	min(double x[][MAXCOLUMNS], int row, int col)
{
	double temp;

	temp = x[0][0];

	for( int i = 0 ; i < row ; ++i )
		{	
			for( int j = 0 ; j < col ; ++j )
				{
					if( x[i][j] < temp )
						temp = x[i][j];
				}
		}

	return ( temp );
}

//END OF MIN FUNCTION



//***********************************
//	SUM FUNCTION					*
//***********************************

double sum(double x[][MAXCOLUMNS], int row, int col)
{
	double temp;

	temp = 0;

	for( int i = 0 ; i < row ; ++i )
		{
			for( int j = 0 ; j < col ; ++j )
				{
					temp += x[i][j];
				}
		}

	return ( temp );
}

//END OF FUNCTION



//***********************************
// AVERAGE FUNCTION					*
//***********************************

double	avg(double x[][MAXCOLUMNS], int row, int col)
{
	double temp;

	temp = x[0][0];

	for( int i = 0 ; i < row ; ++i )
		{
			for( int j = 0 ; j < col ; ++j )
				{
					temp = sum ( x , row , col ) / ( row * col );
				}
		}

	return ( temp );
}

//END OF FUNCTION



//***********************************
// PRINTDATA FUNCTION				*
//***********************************

void printdata(double x[][MAXCOLUMNS], int row, int col)
{
	for( int i = 0 ; i < row ; ++i )
	{
		for( int j = 0 ; j < col ; ++j )
			{
				cout << "\t"
					 << x[i][j] 
					 << "\t";
			}

		cout << endl;
	}

}

//END OF FUNCTION



//*****************************************************************************************
//						PROGRAM RESULTS
/******************************************************************************************

  
        -----------------------------------------------------
                WORKING WITH TWO-DIMENSIONAL ARRAYS
        -----------------------------------------------------

        Enter the number of rows:       4
        Enter the number of columns:    5


        Enter a real value:     12.34
        Enter a real value:     15
        Enter a real value:     -7.89
        Enter a real value:     5.68
        Enter a real value:     76
        Enter a real value:     56.34
        Enter a real value:     63.32
        Enter a real value:     -98.45
        Enter a real value:     0.567
        Enter a real value:     1.78
        Enter a real value:     47.89
        Enter a real value:     54.345
        Enter a real value:     -34.21
        Enter a real value:     56
        Enter a real value:     73
        Enter a real value:     19
        Enter a real value:     33
        Enter a real value:     36.89
        Enter a real value:     -3.673
        Enter a real value:     .0789


        The elements of the array are:
        ------------------------------------------------------------------
        12.34           15              -7.89           5.68            76

        56.34           63.32           -98.45          0.567           1.78

        47.89           54.345          -34.21          56              73

        19              33              36.89           -3.673          0.0789

        ------------------------------------------------------------------

        The largest element of the array:       76.0000

        The smallest element of the array:      -98.4500

        The sum of the array:                   407.0079

        The average of the array:               20.3504

Press any key to continue

******************************************************************************************/
//							END OF RESULTS
//****************************************************************************************

