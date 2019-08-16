//
// main.cpp
// SQUARES_passbyvalue
//
// SquareDemo - demonstrate the use of a 
function
// which processes arguments 
passed by value
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
class SQUARES {
public:
double square(double doubleVar) // 
square - returns the square of its argument
 {
return (doubleVar * doubleVar);
 }
void displayExplanation(void) // 
displayExplanation - prompt the user as to 
the rules
 {
cout << "This program sums the 
square of multiple\n"
 << "series of positive numbers. \n\nTerminate each sequence\n"
 << "by entering a negative number.
\n\n"
 << "Terminate the series by 
entering an\n"
 << "empty sequence.\n"
 << endl;
return;
 }
double sumSquareSequence(double
dValue) // return square of passed value
 {
double accumulator = 0.0;
 {
if (dValue < 0)//  check to seeif it's negative
 {
return 0;
 }
double sqvalue = 
square(dValue); // ...otherwise calculate 
the square
 accumulator += sqvalue; // now 
add the square to the accumulator
 }
return accumulator; // return the 
accumulated value
 }private:
double doubleVar;
};
int main()
{
SQUARES SQ; 
double AC_value = 0.0;
double accumulator = 0.0;
int resp=1;
 SQ.displayExplanation();
for(;;) // loop 
 {
double dValue = 0;
cout << "Enter a number: "; // 
fetch a number
cin >> dValue;
 AC_value = 
SQ.sumSquareSequence(dValue);
 accumulator += AC_value;
if (dValue < 0) //check to see if it's negative// then output 
accumulator value 
 {
cout << "\nThe total of the 
values squared is " << accumulator << "\n
\n"; accumulator = 0.0;
cout << "To exit enter a 
'0': ";
cin >> resp;
 }
if (resp == 0) // terminate
 {
cout << "\n\n";
cout << "Thank you" << 
endl;
cout << "Goodbye :-} \n";
return 0;
 }
 }
return 0;
}