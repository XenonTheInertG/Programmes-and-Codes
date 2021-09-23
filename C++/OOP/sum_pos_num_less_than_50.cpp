#include <iostream>
using namespace std;
int main() {
  int sum = 0, num, numbers;
  cout << "Enter how many numbers you want add:";
  cin >> numbers;
  for (int i = 1; i <= numbers; i++) {
    cout << "Enter " << i << "th number:";
    cin >> num;
    if (num > 0 && num < 50) {
      sum += num;
    }
  }
  cout << "Sum of positive numbers which are less than 50 yo gave is: " << sum;
  return 0;
}