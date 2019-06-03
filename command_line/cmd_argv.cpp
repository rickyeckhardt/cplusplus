
#include <iostream>

using namespace std;

// Added int before main
int main ( int argc, char* argv[] ) {

	int i;
	
	cout << "The number of elements on the command line: " << argc << endl;
	
	cout << "The name of the program: " << argv[0] << endl;
	
	for ( i = 1 ; i < argc ; i++ ) {
		cout << "Command line argument number" << i << " : " 
			 << argv[i] << endl;
		}
		
	}