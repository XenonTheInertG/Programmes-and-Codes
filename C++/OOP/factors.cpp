#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "Enter a number:";
  cin >> num;
  cout << "Factors of " << num << " are:\n[ ";
  int i = 1;
  while (i <= num) {
    if (num % i == 0) {
      cout << i << " ";
    }
    i++;
  }
  cout << "]";
  return 0;
}