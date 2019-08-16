#include <iostream>

using namespace std;

struct Fraction {
  
  int numerator;
  int denominator;
  
  //Constructors to pass in values for numerator or denominator
  Fraction () { numerator = 0; denominator = 0; };
  Fraction (int,int);
  
  //add two fractions & return fraction result
  Fraction operator+(Fraction); 
  
  //multiply to fractions together
  Fraction operator*(Fraction); 
  
  //compare two fractions
  bool operator>(Fraction);
  
  //times fraction by whole number
  Fraction operator*(int whole);
};

Fraction::Fraction (int n, int d) {
  numerator = n;
  denominator = d;
}

Fraction Fraction::operator+(Fraction param) {
  Fraction temp;
  
  if ( denominator == param.denominator ) {
    temp.numerator = numerator + param.numerator;
    temp.denominator = denominator;
  } else {
    temp.numerator = numerator * param.denominator + param.numerator * denominator;
    temp.denominator = denominator * param.denominator;
  }
    return temp;
}

bool Fraction::operator>(Fraction param) {
   int f1, f2;
  
   f1 = numerator * param.denominator;
   f2 = param.numerator * denominator;
  
   if ( f1 > f2 ) { 
      return true; 
    } else { 
      return false; 
    }
}

Fraction Fraction::operator*(Fraction param) {
  Fraction temp;
  
  temp.numerator = numerator * param.numerator;
  temp.denominator = denominator * param.denominator;
  
  return temp;
}

Fraction Fraction::operator*(int whole) {
  Fraction temp;
  
  temp.numerator = numerator * whole;
  temp.denominator = denominator * whole;
  
  return temp;
}

Fraction operator*(int whole, Fraction param) {
  Fraction temp;
    
  temp.numerator = whole * param.numerator;
  temp.denominator = whole * param.denominator;
    
  return temp;
}

void addFractionDriver();
void compareFractionDriver();
void multiFractionDriver();
void wholeFractionDriver();
void intFractionDriver();

int main() {
   
  addFractionDriver();
  compareFractionDriver();
  multiFractionDriver();
  wholeFractionDriver();
  intFractionDriver();
  
  return 0;
  
}

void addFractionDriver() {
  Fraction a (3,4);
  Fraction b (1,2);
  Fraction c;
  c = a + b;
  cout << a.numerator << "/" << a.denominator << " + " << b.numerator << "/" << b.denominator << " = " << c.numerator << "/" << c.denominator << endl;
}

void compareFractionDriver() {
   Fraction a (3,4);
   Fraction b (1,2);
   Fraction c;
   bool d;
  
   d = a > b;
    
   if (d) {
      cout << a.numerator << "/" << a.denominator << " is larger than " << b.numerator << "/" << b.denominator << endl;
   } else {
      cout << a.numerator << "/" << a.denominator << " is smaller or equal to " << b.numerator << "/" << b.denominator << endl;
   }
}

void multiFractionDriver() {
   Fraction a (3,4);
   Fraction b (1,2);
   Fraction c;
  
   c = a * b;
   cout << a.numerator << "/" << a.denominator << " * " << b.numerator << "/" << b.denominator << " = " << c.numerator << "/" << c.denominator << endl;

}

void wholeFractionDriver() {
   Fraction a (3,4);
   int whole = 2;
   Fraction c;
  
   c = a * whole;
   cout << a.numerator << "/" << a.denominator << " * " << whole << " = " << c.numerator << "/" << c.denominator << endl;
}

void intFractionDriver() {
   Fraction a (3,4);
   int whole = 3;
   Fraction c;
  
   c = whole * a;
   cout << whole  << " * " << a.numerator << "/" << a.denominator << " = " << c.numerator << "/" << c.denominator << endl;
}


/***************************

  EXPECTED:
  
  3/4 + 1/2 = 10/8
  3/4 is larger than 1/2
  3/4 * 1/2 = 3/8
  3/4 * 2 = 6/8
  3 * 3/4 = 9/12

***************************/