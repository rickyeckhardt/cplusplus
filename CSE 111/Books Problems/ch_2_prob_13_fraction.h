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
