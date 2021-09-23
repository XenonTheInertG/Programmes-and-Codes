#include <iostream>
using namespace std;
int main() {
  int array_size, i, j, temp = 0, isGreatest = 0;
  cout << "Enter number of elements you want to enter in array:";
  cin >> array_size;
  int array[array_size];
  for (i = 1; i <= array_size; i++) {
    cout << "Enter " << i << "th element:";
    cin >> array[i];
  }
  //sorting array in descending order
  for (i = 1; i <= array_size; i++) {
    for (j = 1; j <= array_size - i; j++) {
      if (array[j] < array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
    isGreatest = array[1];
  }
  cout << "Greatest element of your array is:" << isGreatest;
  return 0;
}