// Program to show multilevel inheritance
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
class Result : public Student {
public:
  Result() {
    cout << "Your Exam was conducted on 20th October 2020";
  }
};
class Record : public Result {
public:
  Record() {
    cout << "\nGot 24/24 marks.";
  }
};
int main() {
  Record R1;
  return 0;
}