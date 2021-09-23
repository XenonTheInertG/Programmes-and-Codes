// Program to show different kind of errors in Cpp
#include <iostream>
using namespace std;
int Main() { // linker error { Main should be main }
  int num1, num2, sum;
  cout << "Enter first and second number: ";
  cin >> num1;
  cin >> num2 // syntax error { ; missing }
  num1 + num2 = sum; // symantic error { we are assigning value of sum in num1 + num2
                     // variable where '+' and ' ' is not allowed }
  cout << div / i; // runtime error { we are dividing a number with 0 which is
                   // undefined }
  cout << "\nSum of " << num1 << " and " << num2
       << " is: " << num1 - num2; // logical error { we want sum of num1 and
                                  // num2 but we will get subtraction }
}