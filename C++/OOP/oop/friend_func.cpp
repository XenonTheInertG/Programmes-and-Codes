// Program to implement friend function.
#include <iostream>
using namespace std;
class Distance {
private:
  int meter;
  // friend function
  friend int addFive(Distance);
public:
  Distance() : meter(0) {}
};
// friend function definition
int addFive(Distance d) {
  // accessing private member from the function
  d.meter += 5;
  return d.meter;
}
int main() {
  Distance D;
  cout << "Distance: " << addFive(D);
  return 0;
}