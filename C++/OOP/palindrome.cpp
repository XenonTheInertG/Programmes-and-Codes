#include <iostream>
using namespace std;
int main() {
  int num, rev = 0, temp1, temp2;
  cout << "Enter a number:";
  cin >> num;
  temp2 = num;
  while (temp2 > 0) {
    temp1 = temp2 % 10;       
    rev = (rev * 10) + temp1; 
    temp2 = temp2 / 10;       
  }
  if (num == rev) {
    cout << "Reverse of number is:" << rev << "\n";
    cout << "Hence " << num << " is a palindrome.";
  } else {
    cout << num << " is not palindrom.";
  }
  return 0;
}