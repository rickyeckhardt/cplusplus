#include <iostream>


using namespace std;

template <class DataType>
class Rectangle {
  public:
    Rectangle<DataType> () { recWidth = 0; recLength = 0;};
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
  Rectangle<float> recOne (2,4); //init rectangle with width of 1 and length of 2
  
  if ( recOne.compare()) {
    cout << "The length is greater than the width\n";
  } else {
    cout << "The length is shorter than the width\n";
  }

  cout << "The area of the rectangle is: " << recOne.area() << endl;
  cout << "The perimeter of the rectangle is: " << recOne.perimeter() << endl;
    
  return 0;
}


