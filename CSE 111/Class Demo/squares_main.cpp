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
cout << "Enter a number: "; 
cin >> dValue;
AC_value = SQ.sumSquareSequence(dValue);
accumulator += AC_value;
if (dValue < 0) 
{
cout << "\nThe total of the
values squared is " << accumulator << "\n\n";
accumulator = 0.0;
cout << "To exit enter a '0': ";
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