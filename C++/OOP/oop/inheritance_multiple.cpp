// Program to show multiple inheritance
#include <iostream>
using namespace std;
class Student {
public:
  Student() {
    char name[20];
    int age;
    cout << "Enter your name:";
    cin.getline(name, 20);
    cout << "Enter your age: ";
    cin >> age;
  }
};
class Result {
public:
  Result() {
    cout << "Your Exam was conducted on 20th October 2020";
  }
};
class Record : public Result, public Student {
public:
  Record() {
    cout << "\nGot 24/24 marks.";
  }
};
int main() {
  Record R;
  return 0;
}