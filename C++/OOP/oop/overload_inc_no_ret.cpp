// Program to overload prefix Increment operator with no return type
#include <iostream>
using namespace std;
class check {
private:
  int i;
public:
  check() : i(0) {}
  void operator++() {
    ++i;
  }
  void Display() {
    cout << "i = " << i << endl;
  }
};
int main() {
  check obj;
  // Display the value of data member i for object obj
  obj.Display();
  // Invokes operator function void operator ++()
  ++obj;
  // Display the  value of data member i for object obj
  obj.Display();
  return 0;
}