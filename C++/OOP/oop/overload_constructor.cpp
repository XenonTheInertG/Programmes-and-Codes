// Program to perform constructor overloading
#include <iostream>
using namespace std;
class person {
private:
  int age;

public:
  // 1. Constructor with no arguments
  person() {
    age = 20;
  }
  // 2, Constructor with arguments
  person(int a) {
    age = a;
  }
  int getAge() {
    return age;
  }
};
int main() {
  person person1, person2;
  cout << "Age of first person = " << person1.getAge() << endl;
  cout << "Age of second person = " << person2.getAge();
  return 0;
}
