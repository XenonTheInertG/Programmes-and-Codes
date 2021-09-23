// Program to overload postfix decrement operator with no return type
#include <iostream>
using namespace std;
class check {
private:
  int i;
public:
  check() : i(0) {}
  check operator++() {
    check temp;
    temp.i = ++i;
    return temp;
  }
  // Notice int inside bracket which indicates postfix increment.
  check operator++(int) {
    check temp;
    temp.i = i++;
    return temp;
  }
  void Display() {
    cout << "i= " << i << endl;
  }
};
int main() {
  check obj, obj1;
  obj.Display();
  obj1.Display();
  // operator function is called, only then value of obj is assigned to obj1
  obj1 = ++obj;
  obj.Display();
  obj1.Display();
  // assigns value of obj to obj1, only then operator function is called.
  obj1 = obj++;
  obj.Display();
  obj1.Display();
  return 0;
}