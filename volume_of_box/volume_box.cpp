/******************************************************************************

	Machine Problem: MP0B ( Sample Program ) 

	Created By: Ricky Eckhardt
  
	Description: Calculate the area and volume of a box given height, length, and width

******************************************************************************/

// Removed .h from iostream
#include <iostream>

// Added 
using namespace std;


	//Start function main
int main(void) {
	//declarations
	float height, length, width, area, volume;			

	//read height
	cout << "Enter height of a box in inches" << endl;
	cin	 >> height;										
	
	//read width
	cout << "Enter width of a box in inches" << endl;
	cin	 >> width;

	//read length
	cout << "Enter length of a box in inches" << endl;
	cin  >> length;

	//compute area
	area = length * width;

	//compute volume
	volume = area * height;

	//display height, width, length, area, and volume
	cout << "Height of box is:" << height << endl;
	cout << "\n Width of box is:"	<< width << endl;
	cout << "\n Length of box is:" << length << endl;
	cout << "\n Area of box is:" << area << endl;
	cout << "\n Volume of box is:" << volume << endl;

	return 0;
}
	
//end of function main
