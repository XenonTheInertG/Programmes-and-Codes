// Program to find an array element by linear search
#include <iostream>
using namespace std;
int main() {
  int array_size, i, item, count = 0, index;
  cout << "Enter how many elements you want to enter:";
  cin >> array_size;
  int arr[array_size];
  cout << "Enter array elements carefully:-\n";
  for (i = 1; i <= array_size; i++) {
    cout << "Enter element number [" << i << "]:";
    cin >> arr[i];
  }
  cout << "Enter element you want to search:";
  cin >> item;
  for (i = 1; i <= array_size; i++) {
    if (arr[i] == item) {
      count++;
      index = i;
    }
  }
  if (count == 1) {
    cout << item << " found at index " << index << ".";
  } else {
    cout << "Element Not found....! :(";
  }
  return 0;
}