/*		*********************************************
		*											*
		*											*
		*	Machine Problem 11						*
		*											*
		*	Term: Summer 1 2004						*
		*											*
		*	Name: Ricky Eckhardt					*
		*											*
		*	Purpose: Uses stuructures and arrays	*
		*			 to compute the grades of up	*
		*			 to 25 students.  The input		*
		*			 is three test scores which		*
		*			 are averaged to find the		*
		*			 letter grade.					*
		*											*
		*********************************************
*/

// Removed .h
#include <iostream>

using namespace std;


//Declares a stucture named student
struct student
	{
		char		name[20];
		unsigned	id;
		unsigned	test_one;
		unsigned	test_two;
		unsigned	test_three;
		double		average;
		char		grade;
	};



//Declares a constant MAX and initializes it to 25. 
//MAX is the largest size the array csci_1470 can be.
const int MAX = 25;



//Funtion Prototypes
void print_heading( void );
void get_data( student x[], int &n );
void compute_print( student x[], int n );



//**************************
// MAIN FUNCTION
//**************************

int main( void )
	{	 
		//Declares an array of size max named csci_1470
		student csci_1470[MAX];

		//Sets the size of the array
		int	size;

		//Outputs the program title
		cout	<< "\n\t\t-------------------------------------------\n"
				<< "\t\t\tStudent Grades Reporter\n"
				<< "\t\t-------------------------------------------\n\n";

		//Calls function get_data to get the data for the array
		get_data( csci_1470 , size );

		//Calls the function print_heading to print the heading for the data
		print_heading();

		//Calls the function compute_print to compute the average and letter
		//grade for the structure and then outputs all data.
		compute_print( csci_1470 , size );

		return 0;
	}

//**************************
// END OF MAIN
//**************************



//**************************
// FUNCTION GET_DATA
//**************************

//Function gets data from the user
//and stores it in the array.

void get_data( student x[] , int &n )
	{
		//Gets the number of students which is the size of the array
		cout	<< "\t\tEnter the number of students < 25:\t";
		cin		>> n;

		cout	<< "\n\n";

		//Gets all the fields from the user for each student.
		for( int i = 0 ; i < n ; ++i )
			{
				//Outputs which number of student the data is for
				cout << "\t\tStudent\t" << i;
				cout << "\n\t\t-------------------------------------------\n";
				
				//Gets the field name
				cout << "\t\tFull Name:\t";
				cin.ignore();
				cin.getline(x[i].name , 20);

				//Gets the field id
				cout << "\n\t\tID:\t\t";
				cin	>> x[i].id;

				//Gets the field test one
				cout << "\n\n\t\tTest One:\t";
				cin >> x[i].test_one;

				//Gets the field test two
				cout << "\n\t\tTest Two:\t";
				cin >> x[i].test_two;

				//Gets the field test three
				cout << "\n\t\tTest Three:\t";
				cin >> x[i].test_three;

				cout << "\n\n";
			}
	}

//**************************
// END OF GET_DATA
//**************************



//**************************
// FUNCTION COMPUTE_PRINT
//**************************

//Takes the fields test_one, test_two, test_three
//and averages them to compute the average. Also,
//takes the average to find the letter grade. 
//Finally, outputs all data to the caller.

void compute_print( student x[] , int n )
	{
		for( int i = 0 ; i < n ; ++i )
			{
				//Temp holds the average temporarely
				double temp;	

				//ch holds the letter grade temporarely
				char ch;		 
				
				//Calculates the average score
				temp = ( x[i].test_one + x[i].test_two + x[i].test_three ) / 3;

				//Puts the average score in the field average
				x[i].average = temp;

				//Assigns the letter grade based on average to ch
				switch( int( x[i].average + .5 ) / 10 )
					{
						case 9:
						case 10:	ch = 'A';
									break;
						case 8:		ch = 'B';
									break;
						case 7:		ch = 'C';
									break;
						case 6:		ch = 'D';
									break;
						default:	ch = 'F';
									break;	
					}

				//Assigns the letter grade to field grade
				x[i].grade = ch;

				//Outputs all fields to the caller.
				cout	<< "\t"
						<< x[i].name
						<< "\t"
						<< x[i].id
						<< "\t"
						<< x[i].test_one
						<< "\t"
						<< x[i].test_two
						<< "\t"
						<< x[i].test_three
						<< "\t"
						<< x[i].average
						<< "\t\t"
						<< x[i].grade;

				cout	<< endl
						<< endl;
			}
	}

//**************************
// END OF COMPUTE_PRINT
//**************************



//**************************
// FUNCTION PRINT_HEADING
//**************************

//Prints the headings for the
//fields to the screen.

void print_heading( void )
	{
		cout	<< "\t\n\n\t\t-------------------------------------------\n"
				<< "\t\t\t\tStudent Grades\n"
				<< "\t\t-------------------------------------------\n";

		cout	<< "\tName\t\t"
				<< "ID\t"
				<< "Test 1\t"
				<< "Test 2\t"
				<< "Test 3\t"
				<< "Average\t\t"
				<< "Grade\n\n";
	}

//**************************
// END OF PRINT_HEADING
//**************************



//**************************
// PROGRAM RESULTS
//**************************
	
/******************************************************************************************




                -------------------------------------------
                        Student Grades Reporter
                -------------------------------------------

                Enter the number of students < 25:      6


                Student 0
                -------------------------------------------
                Full Name:      Sheila Reddy

                ID:             12345


                Test One:       98

                Test Two:       78

                Test Three:     89


                Student 1
                -------------------------------------------
                Full Name:      Cathy Clinton

                ID:             23451


                Test One:       75

                Test Two:       81

                Test Three:     96


                Student 2
                -------------------------------------------
                Full Name:      John Thomas

                ID:             34512


                Test One:       45

                Test Two:       36

                Test Three:     87


                Student 3
                -------------------------------------------
                Full Name:      Terry Jefferson

                ID:             43123


                Test One:       78

                Test Two:       59

                Test Three:     69


                Student 4
                -------------------------------------------
                Full Name:      Steve Martin

                ID:             54789


                Test One:       63

                Test Two:       68

                Test Three:     73


                Student 5
                -------------------------------------------
                Full Name:      Mohan Chow

                ID:             90671


                Test One:       75

                Test Two:       39

                Test Three:     81




                -------------------------------------------
                                Student Grades
                -------------------------------------------
        Name            ID      Test 1  Test 2  Test 3  Average         Grade

        Sheila Reddy    12345   98      78      89      88              B

        Cathy Clinton   23451   75      81      96      84              B

        John Thomas     34512   45      36      87      56              F

        Terry Jefferson 43123   78      59      69      68              D

        Steve Martin    54789   63      68      73      68              D

        Mohan Chow      90671   75      39      81      65              D

Press any key to continue


******************************************************************************************/

//**************************
// END OF PROGRAM RESULTS
//**************************




