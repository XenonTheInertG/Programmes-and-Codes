#include <iostream>
using namespace std;
int main() {
  char name[30];
  int per;
  cout << "Enter Name:";
  cin.getline(name, 30);
  cout << "Enter Percentage=";
  cin >> per;
  if (per >= 60) {
    cout << "First Division";
  }

  else if (per >= 50) {
    cout << "Second Division";
  } else if (per >= 40) {
    cout << "Third Division";
  } else {
    cout << "Sorry you have failed";
  }
  return 0;
}