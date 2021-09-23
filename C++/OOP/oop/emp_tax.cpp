// Program to calculate tax of an employee using functions
#include <iostream>
using namespace std;
class employee {
private:
  int emp_id, salary, tax;
  char name[30];

public:
  void get_data() {
    cout << "Enter your employee id: ";
    cin >> emp_id;
    cin.ignore(); // otherwise it will not ask your name and directly jump to
                  // salary { yeah typical }
    cout << "Enter your name: ";
    cin.getline(name, 30);
    cout << "Enter you salary: ";
    cin >> salary;
  }
  void taxes() {
    if (salary > 50000) {
      tax = 0.07 * salary;
      salary -= tax;
    }
  }
  void show_data() {
    cout << "Your salary after including taxes(if applicable) is: ";
    cout << salary;
  }
};
int main() {
  employee E;
  E.get_data();
  E.taxes();
  E.show_data();
  return 0;
}