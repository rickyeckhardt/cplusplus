/*	#####################################################################	
	#																	
	#	Machine Problem: MP5											
	#												
	#	CREATED BY: RICKY ECKHARDT											
	#													
	#	Purpose:	Calculates student grade based on given				
	#				scores of tests and quizs.							
	#																	
	#####################################################################
*/

// Removed .h
#include <iostream>

// Added
using namespace std;

int main(void)
{
	char	student_Name[21],
			letter_Grade;

	int		student_Id,
			test_One,
			test_Two,
			test_Three,
			quiz_One,
			quiz_Two,
			quiz_Three,
			average_Score;
		
	float   average_Temp;
	
	//Outputs Title
	cout	<< endl
			<< "\t-----------------------------------------------------------"
			<< endl
			<< "\tStudent Grade Calculator                                  "
			<< endl
			<< "\t-----------------------------------------------------------"
			<< endl;

	//Gets the Students Name
	cout	<<	"\tEnter your full name:\t";
	cin.getline(student_Name, 21);

	//Gets the Students ID
	cout	<< endl
			<< "\tEnter your student ID:\t";
	cin		>> student_Id;

	//Gets the Students Test Scores
	cout	<< endl
			<< endl
			<< "\tEnter your test scores"
			<< endl
			<< "\t---------------------------"
			<< endl
			<< "\t\tTest One:\t";

	//Test One
	cin		>> test_One;
	
	//Test Two
	cout	<< endl
			<< "\t\tTest Two:\t";
	cin		>> test_Two;

	//Test Three
	cout	<< endl
			<< "\t\tTest Three:\t";
	cin		>> test_Three;

	//Gets the Students Quiz Scores
	cout	<< endl
			<< endl
			<< "\tEnter your Quiz scores:"
			<< endl
			<< "\t---------------------------"
			<< endl
			<< "\t\tQuiz One:\t";

	//Test One
	cin		>> quiz_One;
	
	//Test Two
	cout	<< endl
			<< "\t\tQuiz Two:\t";
	cin		>> quiz_Two;

	//Test Three
	cout	<< endl
			<< "\t\tQuiz Three:\t";
	cin		>> quiz_Three;

	
	//Calculates the Temporary Average
	
	average_Temp	=	.30 * ( test_One + test_Two + test_Three ) +
						.10 * ( ( quiz_One + quiz_Two + quiz_Three ) / 30.0 * 100 );

	//Calculates the Average Score to Integer
	average_Score	=	int ( average_Temp + .5 );

	//Assigns Grade Letter
	if ( average_Score >= 90 )
					letter_Grade	=	'A';
		else if ( average_Score >= 80 )
					letter_Grade	=	'B';
		else if ( average_Score >= 70 )
					letter_Grade	=	'C';
		else if ( average_Score >= 60 )
					letter_Grade	=	'D';
		else if ( average_Score >  60 )
					letter_Grade	=	'F';

	//Outputs Final Grade Title
	cout	<< endl
			<< "\t-----------------------------------------------------------"
			<< endl
			<< "\tStudents Caluculated Grade Average"
			<< endl
			<< "\t-----------------------------------------------------------"
			<< endl;

	
	//Outputs Student Name
	cout	<< endl
			<< endl
			<< "\tStudent Name:\t"
			<< student_Name;
	
	//Outputs Student ID Number
	cout	<< endl
			<< "\tStudent ID:\t"
			<< student_Id;

	//Outputs Test Scores
	cout	<< endl
			<< "\tTest Scores:\t"
			<< test_One
			<< "\t"
			<< test_Two
			<< "\t"
			<< test_Three
			<< endl;
	
	//Outputs Quiz Scores
	cout	<< "\tQuiz Scores:\t"
			<< quiz_One
			<< "\t"
			<< quiz_Two
			<< "\t"
			<< quiz_Three
			<< endl;

	//Outputs Average Score
	cout	<< endl
			<< "\tAverage Score:\t"
			<< average_Score;

	//Outputs Letter Grade
	cout	<< endl
			<< "\tLetter Grade:\t"
			<< letter_Grade
			<< endl
			<< endl;

	return 0;
}
//END OF MAIN			

/*
****************************PROGRAM RESULTS************************************************

		-----------------------------------------------------------
	    Student Grade Calculator
        -----------------------------------------------------------
        Enter your full name:   Ricky Eckhardt

        Enter your student ID:  7420


        Enter your test scores
        ---------------------------
                Test One:       68

                Test Two:       79

                Test Three:     95


        Enter your Quiz scores:
        ---------------------------
                Quiz One:       7

                Quiz Two:       8

                Quiz Three:     10

        -----------------------------------------------------------
        Students Caluculated Grade Average
        -----------------------------------------------------------


        Student Name:   Ricky Eckhardt
        Student ID:     7420
        Test Scores:    68      79      95
        Quiz Scores:    7       8       10

        Average Score:  81
        Letter Grade:   B

		Press any key to continue

****************************PROGRAM RESULTS************************************************
*/

//END OF PROGRAM RESULTS
