#include <iostream>
using namespace std;
int main() {
  int array_size, i;
  cout << "Enter number of elements you want to enter in array:";
  cin >> array_size;
  int array[array_size];
  for (i = 1; i <= array_size; i++) {
    cout << "Enter " << i << "th element:";
    cin >> array[i];
  }
  cout << "Your array after reversing:\n[ ";
  for (i = array_size; i >= 1; i--) {
      cout << array[i] << " ";
  }
  cout << "]";
  return 0;
}