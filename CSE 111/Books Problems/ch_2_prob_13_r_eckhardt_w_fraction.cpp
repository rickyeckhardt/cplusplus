#include <iostream>
#include "ch_2_prob_13_fraction.h"

using namespace std;

template <class DataType>
class Rectangle {
  public:
    Rectangle<DataType> () {};
    Rectangle<DataType> ( DataType, DataType );
   
    bool compare();
    DataType perimeter();
    DataType area();
    DataType frac_area();
    
  
  private:
    DataType recWidth;
    DataType recLength;
};

template <class DataType>
Rectangle<DataType>::Rectangle(DataType rWidth, DataType rLength) {
  recWidth = rWidth;
  recLength = rLength;
}

template <class DataType>
bool Rectangle<DataType>::compare() {
  if ( recLength > recWidth ) {
    return true;
  } else{
    return false;
  }
}

template <class DataType>
DataType Rectangle<DataType>::area() {
  DataType temp;
  temp = recWidth * recLength;
  return temp;
}

template <class DataType>
DataType Rectangle<DataType>::perimeter() {
  DataType temp;
  temp = recWidth + recLength + recWidth + recLength;
  return temp;
}


int main() {
  Fraction a (1,2); //sets width as 1/2
  Fraction b (1,2); //sets length as 1/2
  Rectangle<Fraction> rec (a,b); //inits rec with 1/2 width and 1/2 length
  Fraction temp; //scrath to hold return
  
  
  if (rec.compare()) {
    cout << "The length is greater than the width\n";
  } else {
    cout << "The length is shorter than the width\n";
  }
  
  temp = rec.area();
  
  cout << "The area of the rectangle is: " << temp.numerator << "/" << temp.denominator << endl;
  
  temp = rec.perimeter();
  
  cout << "The perimeter of the rectangle is: " << temp.numerator << "/" << temp.denominator << endl;
 
}


