//CH02 TICPP Copy file 2 string

//Written by Ramen Soldier June 17 2007

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main() {

ifstream in("copyfile2string.cpp");

string contents, lineread;

while(getline(in, lineread)) {
	contents += lineread + "\n"
	cin.getline();
	};
	
cout << "The contents of this filed are copied to a string then displayed:\n\n";	
	
cout << contents;

}

/*

ramen-soldiers-ibook-g4:~/Desktop/Computer /C++/programs/TICPP-Exercise ramensoldier$ ./copyfile2string
The contents of this filed are copied to a string then displayed:

//CH02 TICPP Copy file 2 string

//Written by Ramen Soldier June 17 2007

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main() {

ifstream in("copyfile2string.cpp");

string contents, lineread;

while(getline(in, lineread))
        contents += lineread + "\n";

cout << "The contents of this filed are copied to a string then displayed:\n\n";

cout << contents;

}


*/