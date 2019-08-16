// Removed .h from iostream
#include <iostream>

// Added using namespace std
using namespace std;

int main(int argc, char **argv)
{
  //Variable Declaration/Initialization
  int i = 0;
  char **all_fields = NULL;

  //Display the number of command line arguments
  cout << "Number of arguments: " << argc << endl;

  //Address of where element 0 of array char* is found
  cout << "Address where element 0 of array of char*s is located: " 
       << argv << endl;

  //Display each argument
  for (i = 0; i < argc; i++)
  {
    //Display each field
    cout << "Field " << (i +1) << " is " << argv[i] << endl;

  }

  return 0;

}