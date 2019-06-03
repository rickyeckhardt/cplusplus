/************************************************************************	
 *																				
 *		Machine Problem: MP3			Course: CSCI 1470				
 *		Term: Summer 1 2004	
 *
 *		CREATED BY: RICKY ECKHARDT											
 *														
 *		Purpose:	Calculates the roots of a quadratic equation		
 *					Given the equation ax^2 + bx + c = 0				
 *																		
 ************************************************************************
*/


// Removed .h
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(void)
{

// A is the coeffient of x^2 - B is the coeffient of x - C is the constant 
// Root one and Root two are the real roots of the equation
double a, b, c, root_one, root_two;

//Outputs title of program
cout	<< endl
		<< endl
		<< "\tReal Roots of a Quadratic Equation"
		<< endl
		<< "\t----------------------------------"
		<< endl
		<< endl;

//Gets the coeffient of x^2
cout	<< "\tEnter coeffient of x^2:\t";
cin		>> a;

//Gets the coeffient of x
cout	<< "\tEnter coeffient of x:\t";
cin		>> b;

//Gets the constant
cout	<< "\tEnter constant:\t\t";
cin		>> c;
cout	<< endl;


//Outputs the equation
cout	<< endl
		<< "\tGiven quadratic equation is:"
		<< endl
		<< endl
		<< "\t\t"
		<< a << "x ^ 2 + " 
		<< b
		<< "x + "
		<< c
		<< " = 0"
		<< endl;

//Calculates the first root
root_one = (-b + sqrt( b * b - 4 * a * c )) / ( 2 * a );

//Calculates the second root
root_two = (-b - sqrt( b * b - 4 * a * c )) / ( 2 * a );

//Outputs the two roots unformatted
cout	<< endl
		<< endl
		<< "\tThe first root is:\t"
		<< root_one
		<< "\t\t( unformatted )"
		<< endl
		<< "\tThe second root is:\t"
		<< root_two
		<< "\t( unformatted )"
		<< endl;

//Outputs the two roots formatted
cout	<< endl
		<< endl
		<< "\tThe first root is:\t"
		<< setiosflags( ios:: showpoint | ios:: fixed )
		<< setprecision(2)
		<< root_one
		<< "\t\t( formatted )"
		<< endl
		<< "\tThe second root is:\t"
		<< setiosflags( ios:: showpoint | ios:: fixed )
		<< setprecision(2)
		<< root_two
		<< "\t\t( formatted )"
		<< endl
		<< endl;

return 0;
}
//END OF MAIN

/*


        Real Roots of a Quadratic Equation
        ----------------------------------

        Enter coeffient of x^2: 7.5
        Enter coeffient of x:   -12.5
        Enter constant:         3.5


        Given quadratic equation is:

                7.5x ^ 2 + -12.5x + 3.5 = 0


        The first root is:      1.31059         ( unformatted )
        The second root is:     0.356073        ( unformatted )


        The first root is:      1.31            ( formatted )
        The second root is:     0.36            ( formatted )

Press any key to continue
*/