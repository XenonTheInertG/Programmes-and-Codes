// Program where the member functions are defined outside the class
#include <iostream>
using namespace std;
class student {
private:
  char name[30], address[40];
  int roll_no, age;
public:
  void get_data();
  void display();
};
void student::get_data() {
  cout << "Enter your name: ";
  cin.getline(name, 30);
  cout << "Enter your Roll number: ";
  cin >> roll_no;
  cout << "Enter your age: ";
  cin >> age;
  cin.ignore();
  cout << "Enter your address:";
  cin.getline(address, 40);
}
void student::display() {
  cout << "Your given data is below:";
  cout << "\nName: " << name << "\nRoll number: " << roll_no << "\nAge: " << age
       << "\nAddress: " << address;
}
int main() {
  student s;
  s.get_data();
  s.display();
  return 0;
}