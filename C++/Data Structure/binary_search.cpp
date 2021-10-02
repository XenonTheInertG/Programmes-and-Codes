// Program to find an array element by binary search 
#include <iostream>
using namespace std;
int main() {
  int array_size, insert, index, i;
  cout << "Enter how many elements you want to enter:";
  cin >> array_size;
  int arr[array_size];
  cout << "Enter array elements carefully:-\n";
  for (i = 1; i <= array_size; i++) {
    cout << "Enter element number [" << i << "]:";
    cin >> arr[i];
  }
  cout << "Your array elements are:\n[ ";
  for (i = 1; i <= array_size; i++) {
    cout << arr[i] << " ";
  }
  cout << "]\nEnter the element you want to search:";
  cin >> insert;
  int start = 1, mid, end = array_size;
  mid = (start + end) / 2;
  while (start < end && arr[mid] != insert) {
    if (insert < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = (start + end) / 2;
  }
  if (arr[mid] == insert) {
    cout << "Element " << insert << " found at the index:" << mid;
  } else {
    cout << "Element " << insert << " not found!!";
  }
  return 0;
}