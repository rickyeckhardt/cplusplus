#include <iostream>

using namespace std;

class Road {
public:

  void setWidth( float width );
  void setLength( float length );
  void setThick( float thick );

  float getWidth() {return widthRoad;}
  float getLength() {return lengthRoad;}

  float asphalt();

private:
  float widthRoad;
  float lengthRoad;
  float thickness;
  float asphaltNeeded;

};

void Road::setWidth( float width ) {
  widthRoad = width; //Width in feet
}

void Road::setLength( float length ) {
  lengthRoad = length ; //Length in miles
}

void Road::setThick( float thick ) {
 thickness = thick;
}

float Road::asphalt() {
 asphaltNeeded = widthRoad * (lengthRoad * 5280 ) * thickness; //assumes all values in feet
 return asphaltNeeded;
}

int main() {
 Road newLane;
 float width, length, thick;

 cout << "\n\tEnter the road width in feet: ";
 cin >> width;
 cout << "\n\tEnter the road length in miles: ";
 cin >> length;
 cout << "\n\tEnter the road thickness in feet: ";
 cin >> thick;

 newLane.setWidth(width);
 newLane.setLength(length);
 newLane.setThick(thick);

 cout << "\n\tYou need " << newLane.asphalt() << " cubic feet of asphalt to pave the road.\n\n";


 return 0;
}

/*************

  EXPECTED RESULTS
  
    Enter the road width in feet: 30

    Enter the road length in miles: 2

    Enter the road thickness in feet: 1

    You need 316800 cubic feet of asphalt to pave the road.
    
 *****************/


