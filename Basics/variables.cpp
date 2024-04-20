#include <bits/stdc++.h>
using namespace std;

int main() {

  // what is variable?
  // A variable is a container that holds a value in a specific memory location.

  int X;  // variable Decleration
  X = 10; // variable Initialization

  cout << X << endl; // print variable

  // variable naming rules:

  /* 1. variable name start with a letter or an underscore
    2. variable name can't start with a number
    3. variable name can't contain any special characters
    4. variable name can't be a reserved word
    5. varable name can't contain spaces
    6. variable name is case sensitive
    */

  // case sensitive:
  int a = 10;
  int A = 20;
  cout << a << endl;
  cout << A << endl;

  // N.B: smal letters are different from capital letters.

  // updating variables:
  X = 20; // updating variable x with value 20
  cout << X << endl;

  // declare multiple variables:
  int A = 10, B = 20, C = 30;
  cout << A << endl;
  cout << B << endl;
  cout << C << endl;

  // N.B: if you declare multiple variables it will be same data type and you
  // can iniatialize them in the same line.

  return 0;
}