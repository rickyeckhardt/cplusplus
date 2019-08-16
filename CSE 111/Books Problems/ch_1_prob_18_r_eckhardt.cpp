#include <iostream>

using namespace std;

class Temperature {
  public:
  void setFahrenheit( float fahrenheit); // sets f passed in by a user
  void setCelsius( float celsius); // sets c passed in by a user

  float getTempF( float celsius); // converts a c value passed by user to f
  float getTempC( float fahrenheit); //converts a f value passed by user to c

  private:
  float temp;
};

void Temperature::setFahrenheit( float fahrenheit ) {
  temp = fahrenheit; //Assumes user is getting correct input
}

void Temperature::setCelsius( float celsius ) {
  temp = celsius; //Assumes user is getting correct input
}

float Temperature::getTempF( float celsius ) {
  temp = ( 9/5 * celsius ) + 32; //Passes 0 in for celsius value
  return temp;
}

float Temperature::getTempC( float fahrenheit ) {
  temp = ( fahrenheit - 32 ) * 5 / 9; //Passes 0 in for fahrenheit value
  return temp;
}

/********** REMOVED DRIVERS 

void setFDriver() {
  Temperature today;
  today.setFahrenheit(0); //Up to used to design variables for input and get input

}

void setCDriver() {
  Temperature today;
  today.setFahrenheit(0); //Up to used to design variables for input and get input
}


void getFDriver() {
  Temperature today;
  cout << "The Temperature converted from celsius to fahrenheit is " << today.getTempF(0) << endl; //Passes 0 celsius to be converted to fahrenheit - up to user to get input
}

void getCDriver() {
  Temperature today;
  cout << "The Temperature converted from fahrenheit to celsius is " <<  today.getTempC(0) << endl; //Passes 0 fahrenheit to be converted to celsius - up to user to get input
}
*/

void userEnterTemp() {
    Temperature todayTemp;
    float aTemp;
    char choice;

    cout << "\n\t" << "Enter 'C' to convert from Fahrenheit to Celsius\n";
    cout << "\t" << "Enter 'F' to convert from Celsius to Fahrenheit\n";
    cout << "\n\t\tCHOICE: ";
    cin >> choice;
    if (choice == 'c' || choice == 'C') {
        cout << "\n\tEnter Fahrenheit to convert to celsius: ";
        cin >> aTemp;
        cout << "\t" << aTemp << " converted from fahrenheit to celsius is: " << todayTemp.getTempC(aTemp) << endl;
    } else if (choice == 'f' || choice == 'F') {
        cout << "\n\tEnter Celsius to convert to Fahrenheit: ";
        cin >> aTemp;
        cout << "\t" << aTemp << " converted from celsius to fahrenheit is: " <<todayTemp.getTempF(aTemp) << endl;
    } else {
        cout << "You did not enter C or F";
    }
}


int main() {
  userEnterTemp();
/*
 setFDriver();
 setCDriver();
 getFDriver();
 getCDriver();
*/

  return 0;

}

/***************************
  EXPECTED RESULTS

  Enter 'C' to convert from Fahrenheit to Celsius
  Enter 'F' to convert from Celsius to Fahrenheit

    CHOICE: c

  Enter Fahrenheit to convert to celsius: 32
  32 converted from fahrenheit to celsius is: 0

************************/
