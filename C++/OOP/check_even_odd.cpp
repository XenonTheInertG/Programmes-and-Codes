#include <iostream>
using namespace std;
int main() {
  int num;

  cout << "Enter a number\n";
  cin >> num;

  if (num % 2 == 0)
    goto even;
  else
    cout << "Odd\n";

even:
  cout << "Even\n";
  return 0;
}
