#include <iostream>
using namespace std;
int main() {
  int i, num, count = 0;
  cout << "Enter any number: ";
  cin >> num;

  for (i = 2; i <= num - 1; i++) {
    if (num % i == 0) {
      count++;
      break;
    }
  }
  if (count == 0) {
    cout << num << " is prime";
  } else {
    cout << num << " is not prime.";
  }
  return 0;
}
