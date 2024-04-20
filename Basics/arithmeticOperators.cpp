#include <bits/stdc++.h>
using namespace std;

int main() {

  // What is Arithmetic Operators?
  // Arithmetic Operators are used to perform mathematical operations on
  // variables.

  // Arithmetic Operators:
  // + Addition
  // - Subtraction
  // * Multiplication
  // / Division
  // % Modulus
  // ++ Increment
  // -- Decrement
  // N.B: Modulus operator (%) returns the remainder of a division.

  int x = 10, y = 15;
  cout << x + y << endl;
  cout << x - y << endl;
  cout << x * y << endl;
  cout << x / y << endl;
  cout << x % y << endl;
  cout << ++x << endl;
  cout << --y << endl;

  // Increasing and Decreasing Operators:
  // ++x: Increases the value of x by 1 and returns the new value of x.
  // x++: The original value of x is returned first, then x is incremented by 1.
  // --x: Decreases the value of x by 1 and returns the new value of x.
  // x--: The original value of x is returned first, then x is decremented by 1.

  // ++x: Pre-increment
  // x++: Post-increment
  // --x: Pre-decrement
  // x--: Post-decrement

  x = 5;
  cout << ++x << endl; // 6
  cout << x++ << endl; // 6
  cout << --x << endl; // 6
  cout << x-- << endl; // 6

  /*

  Precedencce and Associativity:

  What is Precedencce?
  Precedencce is the order in which operators are evaluated in an expression.


  Waht is Associativity?
  Determines the direction in which operators with the same precedence are
  evaluated. Operators can be left-associative, right-associative, or
  non-associative.

  Precedencce:
  1. ()
  2. *, /, %
  3. +, -
  4. =

  Associativity:
  (*, /, %, +, -) These operators are left-associative, meaning 
  they are evaluated from left to right when they appear in succession.
  */

  //Precendence and Associativity:
  int a = 8 * 4 / 2 % 3 + 5 - 1;
  cout << a << endl;
  
  

  return 0;
}