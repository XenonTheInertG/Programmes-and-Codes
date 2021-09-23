#include <iostream>
using namespace std;
int main() {
  int num1, num2;
  char opr;
  cout << "Enter first operand: ";
  cin >> num1;
a:
  cout << "Enter desired operator(+,-,*,/): ";
  cin >> opr;
  cout << "Enter second operand: ";
  cin >> num2;
  switch (opr) {
  case '+': {
    cout << num1 << " + " << num2 << " = " << num1 + num2;
  } break;
  case '-': {
    cout << num1 << " - " << num2 << " = " << num1 - num2;
  } break;
  case '*': {
    cout << num1 << " * " << num2 << " = " << num1 * num2;
  } break;
  case '/': {
    cout << num1 << " / " << num2 << " = " << num1 / num2;
  } break;
  default: {
    cout << "Wrong operator!!!\n";
    goto a;
  } break;
  }
  return 0;
}