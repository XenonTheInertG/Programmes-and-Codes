#include <iostream>
using namespace std;
int main() {
  int array_size, i, sum = 0;
  cout << "Enter number of elements you want to enter in array:";
  cin >> array_size;
  int array[array_size];
  for (i = 1; i <= array_size; i++) {
    cout << "Enter " << i << "th element:";
    cin >> array[i];
    sum += array[i];
  }
  cout << "Sum of all elements:" << sum;
  return 0;
}
