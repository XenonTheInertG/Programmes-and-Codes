#include <iostream>
using namespace std;
struct student {
  int roll_no;
  char name[20];
  void get_info() {
    cout << "Enter student name: ";
    cin >> (name);
    cout << "Enter rollno of student: ";
    cin >> roll_no;
  }
  void display_info() {
    cout << "Name of student is " << name;
    cout << "\nRollno of student is " << roll_no;
  }
};
int main() {
  student stud;
  stud.get_info();
  stud.display_info();
  return 0;
}
