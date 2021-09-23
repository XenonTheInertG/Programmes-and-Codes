#include <iostream>
using namespace std;
void swap(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}
int main() {
  int num1, num2;
  cout << "Enter first number:";
  cin >> num1;
  cout << "Enter second number:";
  cin >> num2;
  cout << "Numbers before swapping:\nFirst number: " << num1
       << " Second number: " << num2;
  swap(&num1, &num2);
  cout << "\nNumbers after swapping:\nFirst number: " << num1
       << " Second number: " << num2;
  return 0;
}
