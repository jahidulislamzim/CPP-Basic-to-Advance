#include <bits/stdc++.h>
using namespace std;

int main() {

  // What is data types?
  // Data types are used to define the type of data a variable can hold.

  // There are two types of data types:
  // 1. Primitive Data Types
  // 2. User-defined Data Types

  /*
    Primitive Data Types:

    1. Boolean Data Types: Stores true or false values. keyword is bool. it
    hold 1 byte of memory space.

    2. Character Data Types: Stores a single character/letter/number or ASCII
    values. keyword is char. it hold 1 byte of memory space.

    3. Integer Data Types: Stores whole numbers, without decimals. keyword is
    int. it hold 4 bytes of memory space.

    4. Floating Point Data Types: Stores fractional numbers, containing one or
    more decimals. Sufficient for storing 6 decimal digits. keyword is float.
    it hold 4 bytes of memory space.

    5. Double Data Types : Stores fractional numbers, containing one or more
    decimals. Sufficient for storing 15 decimal digits. keyword is double. it
    hold 8 bytes of memory space.

  */

  // Boolean Data Type:
  bool isCodingFun = true;
  bool isFishTasty = false;
  cout << isCodingFun << endl;
  cout << isFishTasty << endl;

  // Character Data Type:
  char myGrade = 'A';
  cout << myGrade << endl;

  // Integer Data Type:
  int myNum = 15;
  cout << myNum << endl;

  // Floating Point Data Type:
  float myFloatNum = 5.555556;
  cout << myFloatNum << endl;

  // Double Data Type:
  double myDoubleNum = 9.555555555555556;
  cout << myDoubleNum << endl;

  /*

  Type Modiifiers:

  1. signed: The value of the variable can be negative or positive.
  2. unsigned: The value of the variable can only be positive.
  3. long: The value of the variable can be larger than the default size.
  4. short: The value of the variable can be smaller than the default size.
  5. long long: The value of the variable can be larger than the default size.
  6. short short: The value of the variable can be smaller than the default
  size.
  */

  /*

  Type Conversion or Type Casting:

  1. Implicit Type Conversion: Implicit type casting occurs automatically when
  the compiler converts a value from one data type to another.

  2. Explicit Type Conversion: Explicit type casting is a conversion that is
  done manually by the programmer.

  Implicit Type Conversion precedence:
  bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long
  long -> float -> double -> long double

  Explicit Type Conversion precedence:
  This is done by explicitly defining the required type in front of the
  expression in parenthesis. This can be also considered as forceful casting.
  Syntax:
  (type) expression
  */

  // Implicit Type Conversion:
  int myInt = 9;
  double myDouble = myInt;
  cout << myInt << endl;
  cout << myDouble << endl;

  // Explicit Type Conversion:
  double myDouble2 = 9.78;
  int myInt2 = (int)myDouble2;
  cout << myDouble2 << endl;
  cout << myInt2 << endl;

  return 0;
}