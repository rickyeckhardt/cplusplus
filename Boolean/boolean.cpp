#include <iostream>

using namespace std;

void clear() {
	system("clear");
}

int main (int argc, char * const argv[]) {

	clear();

	int i, j;

	cout << "Enter an integer: ";
	cin >> i;
	
	cout << "Enter another integer: ";
	cin >> j;
	
	cout << "i > j is " << (i > j) << endl;
	cout << "i < j is " << (i < j) << endl;
	cout << "i >= j is " << (i >= j) << endl;
	cout << "i <= j is " << (i <= j) << endl;
	cout << "i == j is " << (i == j) << endl;
	cout << "i != j is " << (i != j) << endl;
	cout << "i && j is " << (i && j) << endl;
	cout << "i || j is " << (i || j) << endl;
	cout << " (i < 10) && (j < 10) is "
         << ((i < 10) && (j < 10))  << endl;
} 
