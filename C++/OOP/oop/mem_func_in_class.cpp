// Program where the member functions are defined inside the class
#include <iostream>
using namespace std;
class student {
private:
  char name[30], address[40];
  int roll_no, age;

public:
  void get_data() {
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
  void display() {
    cout << "Your given data is below:";
    cout << "\nName: " << name << "\nRoll number: " << roll_no
         << "\nAge: " << age << "\nAddress: " << address;
  }
};
student stud;
int main() {
  stud.get_data();
  stud.display();
  return 0;
}