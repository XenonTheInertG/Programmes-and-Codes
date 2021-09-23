#include <iostream>
using namespace std;
int main() {
  int array_size, i;
  cout << "Enter number of elements you want to enter in array:";
  cin >> array_size;
  int a1[array_size], a2[array_size];
  for (i = 1; i <= array_size; i++) {
    cout << "Enter " << i << "th element:";
    cin >> a1[i];
    a2[i] = a1[i];
  }
  cout << "Your orignal array is:\n[ ";
  for (i = 1; i <= array_size; i++) {
    cout << a1[i] << " ";
  }
  cout << "]\nYour coppied array is:\n[ ";
  for (i = 1; i <= array_size; i++) {
    cout << a2[i] << " ";
  }
  cout << "]";
  return 0;
}