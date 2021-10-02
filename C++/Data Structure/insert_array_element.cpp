// Program to insert an array element at given index
#include <iostream>
using namespace std;
int main() {
  int array_size, index, element, i;
  cout << "Enter number of elements you want in the array: ";
  cin >> array_size;
  int array[array_size];
  for (i = 1; i <= array_size; i++) {
    cout << "Enter " << i << "th element: ";
    cin >> array[i];
  }
  cout << "Enter index where want to insert element: ";
  cin >> index;
  cout << "Enter element you want to insert:";
  cin >> element;
  array_size++;
  for (i = array_size; i >= index; i--) {
    array[i] = array[i - 1];
  }
  array[index] = element;
  cout << "Your array after insertion:\n[ ";
  for (i = 1; i <= array_size; i++) {
    cout << array[i] << " ";
  }
  cout << "]";
  return 0;
}