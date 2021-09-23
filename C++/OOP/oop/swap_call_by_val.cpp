// Program to swap two numbers using call by value concept
#include <iostream>
using namespace std;
void swap(int num1, int num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "\nNumbers after swapping inside function.\nFirst number: " << num1
       << " Second number: " << num2;
}
int main() {
  int num1, num2;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  cout << "Numbers before swapping.\nFirst number: " << num1
       << " Second number: " << num2;
  swap(num1, num2);
  cout << "\nNumbers again in main function.\nFirst number: " << num1
       << " Second number: " << num2;
  return 0;
}
