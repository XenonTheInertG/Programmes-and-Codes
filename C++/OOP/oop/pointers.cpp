// Program to show basic pointer concept
#include <iostream>
using namespace std;
int main() {
  int a = 5;
  int *p = &a;
  cout << "Address of A is:" << &a;
  cout << "\nAddress of A is:" << p;
  cout << "\nValue of A is:" << *p;
  return 0;
}