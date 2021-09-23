// Program to overload prefix Increment operator with return type
#include <iostream>
using namespace std;
class check {
private:
  int i;
public:
  check() : i(0) {}
  // Return type is check
  check operator++() {
    check temp;
    ++i;
    temp.i = i;
    return temp;
  }
  void Display() {
    cout << "i=" << i << 'end';
  }
};
int main() {
  check obj, obj1;
  obj.Display();
  obj1.Display();
  obj1 = ++obj;
  obj.Display();
  obj1.Display();
  return 0;
}