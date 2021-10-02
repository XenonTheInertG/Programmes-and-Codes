// Program to delete an array element
#include <iostream>
using namespace std;
int main() {
  int array_size, i, element, index = 0;
  cout << "Enter number of elements you want to enter in array:";
  cin >> array_size;
  int array[array_size];
  for (i = 1; i <= array_size; i++) {
    cout << "Enter " << i << "th element:";
    cin >> array[i];
  }
  cout << "Enter element you want to delete:";
  cin >> element;
  for (i = 1; i <= array_size; i++) {
    if (element == array[i]) {
      index = i;
    }
  }
  for (i = index; i <= array_size; i++) {
    array[i] = array[i + 1];
  }
  cout << "\nArray after deletion:\n[ ";
  for (i = 1; i <= array_size - 1; i++) {
    cout << array[i] << " ";
  }
  cout << "]";
  return 0;
}