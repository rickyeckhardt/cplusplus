#include <iostream>

using namespace std;

class Time {
  public:
  void setHours( float hour );
  void setMinutes( float minute );
  void setSeconds( float second );
  
  float timeInMinutes();
  float timeInHours();
  float timeInSeconds();
  
  private:
  float hours;
  float minutes;
  float seconds;
  
};

void Time::setHours( float hour ) {
  hours = hour;
}

void Time::setMinutes( float minute ) {
  minutes = minute;
}

void Time::setSeconds( float second ) {
  seconds = second;
}

float Time::timeInMinutes() {
  return  hours * 60 + minutes + seconds / 60;
}

float Time::timeInHours() {
  return hours + minutes / 60 + seconds / 3600;
}

float Time::timeInSeconds() {
  return hours * 3600 + minutes * 60 + seconds;
}

void timeInMinDriver() {
  Time newTime;
  newTime.setHours(1);
  newTime.setMinutes(40);
  newTime.setSeconds(30);
  cout << newTime.timeInMinutes() << endl;
}

void timeInHourDriver() {
  Time newTime;
  newTime.setHours(1);
  newTime.setMinutes(40);
  newTime.setSeconds(30);
  cout << newTime.timeInHours() << endl;
}

void timeInSecDriver() {
  Time newTime;
  newTime.setHours(1);
  newTime.setMinutes(40);
  newTime.setSeconds(30);
  cout << newTime.timeInSeconds() << endl;
}
  

int main() {
  timeInMinDriver();
  timeInHourDriver();
  timeInSecDriver();
  
  return 0;
}

/********************

  EXPECTED RESULTS
  
  100.5
  1.675
  6030
  
********************/ 