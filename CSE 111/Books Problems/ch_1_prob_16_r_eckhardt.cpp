#include <iostream>

using namespace std;

struct Employee {
  string lastName;
  float hoursWorked[5];
  float totalHours;
  float hourlyWage;
  float payCheckWeekly;
};

void initEmployee( Employee *workers) {

  for ( int i = 0; i < 4; i++) {
    cout << endl << "Employee ID: " << i + 1 << endl;
    cout << "Enter Employees Last Name: ";
    cin >> workers[i].lastName;
    cout << "Enter Hourly Wage: ";
    cin >> workers[i].hourlyWage;

    for ( int j = 0; j < 5; j++) {
      cout << "Day " << j + 1 << endl;
      cout << "Enter time worked: ";
      cin >> workers[i].hoursWorked[j];

    }
  }

}

void results(Employee &workers) {
  cout << endl;
  cout.setf(std::ios::fixed);
  cout.precision(2);
  cout << "-------------------------------------------------------\n";
  cout << "--  LAST NAME:   " << workers.lastName << "\n";
  cout << "-------------------------------------------------------\n";
  cout << "--  HOURLY WAGE: " << workers.hourlyWage << "\n";
  cout << "--  HOURS WORKED\n";
  for (int i = 0; i < 5; i++) {
    cout << "--  DAY " << i + 1 << ": " << workers.hoursWorked[i] << "\n";
  }
  cout << "-------------------------------------------------------\n";
  cout << "--  PAY TOTAL:  $" << workers.payCheckWeekly << "\n";
  cout << "-------------------------------------------------------\n";

}

int main() {

  Employee workers[4];
  initEmployee(workers);

  for ( int i = 0; i < 4; i++) {
     for ( int j = 0; j < 5; j++) {
          workers[i].totalHours += workers[i].hoursWorked[j];
          if ( workers[i].totalHours > 40) {
                workers[i].payCheckWeekly = workers[i].totalHours * ( workers[i].hourlyWage * 1.5 );
              } else {
                workers[i].payCheckWeekly = workers[i].totalHours * workers[i].hourlyWage;
              }
     }
  }

  results(workers[0]);
  results(workers[1]);
  results(workers[2]);
  results(workers[3]);

  return 0;
}

/***********************************************************
EXPECTED RESULTS


Employee ID: 1
Enter Employees Last Name: Eckhardt
Enter Hourly Wage: 4.25
Day 1
Enter time worked: 8
Day 2
Enter time worked: 8
Day 3
Enter time worked: 8
Day 4
Enter time worked: 8
Day 5
Enter time worked: 8

Employee ID: 2
Enter Employees Last Name: Brigham
Enter Hourly Wage: 5.25
Day 1
Enter time worked: 9
Day 2
Enter time worked: 9
Day 3
Enter time worked: 9
Day 4
Enter time worked: 9
Day 5
Enter time worked: 9

Employee ID: 3
Enter Employees Last Name: Bob
Enter Hourly Wage: 7.25
Day 1
Enter time worked: 9
Day 2
Enter time worked: 9
Day 3
Enter time worked: 9
Day 4
Enter time worked: 9
Day 5
Enter time worked: 9

Employee ID: 4
Enter Employees Last Name: Bill
Enter Hourly Wage: 9.25
Day 1
Enter time worked: 10
Day 2
Enter time worked: 10
Day 3
Enter time worked: 10
Day 4
Enter time worked: 10
Day 5
Enter time worked: 10

-------------------------------------------------------
--  LAST NAME:   Eckhardt
-------------------------------------------------------
--  HOURLY WAGE: 4.25
--  HOURS WORKED
--  DAY 1: 8.00
--  DAY 2: 8.00
--  DAY 3: 8.00
--  DAY 4: 8.00
--  DAY 5: 8.00
-------------------------------------------------------
--  PAY TOTAL:  $170.00
-------------------------------------------------------

-------------------------------------------------------
--  LAST NAME:   Brigham
-------------------------------------------------------
--  HOURLY WAGE: 5.25
--  HOURS WORKED
--  DAY 1: 9.00
--  DAY 2: 9.00
--  DAY 3: 9.00
--  DAY 4: 9.00
--  DAY 5: 9.00
-------------------------------------------------------
--  PAY TOTAL:  $354.38
-------------------------------------------------------

-------------------------------------------------------
--  LAST NAME:   Bob
-------------------------------------------------------
--  HOURLY WAGE: 7.25
--  HOURS WORKED
--  DAY 1: 9.00
--  DAY 2: 9.00
--  DAY 3: 9.00
--  DAY 4: 9.00
--  DAY 5: 9.00
-------------------------------------------------------
--  PAY TOTAL:  $489.38
-------------------------------------------------------

-------------------------------------------------------
--  LAST NAME:   Bill
-------------------------------------------------------
--  HOURLY WAGE: 9.25
--  HOURS WORKED
--  DAY 1: 10.00
--  DAY 2: 10.00
--  DAY 3: 10.00
--  DAY 4: 10.00
--  DAY 5: 10.00
-------------------------------------------------------
--  PAY TOTAL:  $693.75
-------------------------------------------------------

*/
