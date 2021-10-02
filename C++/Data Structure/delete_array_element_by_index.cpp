// Program to delete an array element by given index
#include <iostream>
using namespace std;
int main() {
  int array_size = 5, index, element, i;
  int array[5] = {0,
                  1,
                  2,
                  3,
                  4}; // idk why it's not alowing me to use array[array_size]
  cout << "Our array elements are:[ ";
  for (i = 0; i < array_size; i++) {
    cout << array[i] << " ";
  }
  cout << "]\nEnter index where you want to delete element: ";
  cin >> index;
  for (i = index; i <= array_size; i++) {
    array[i] = array[i + 1];
  }
  array_size--;
  cout << "Your array after deletion:\n[ ";
  for (i = 0; i < array_size; i++) {
    cout << array[i] << " ";
  }
  cout << "]";
  return 0;
}
