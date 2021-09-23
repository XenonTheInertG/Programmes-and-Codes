// Program to use structure varisble as return type of a function
#include <iostream>
using namespace std;
struct employee {
  int id;
  string name;
};
employee data(employee E) {
  E.id = 1900670;
  E.name = "Hemant Sachdeva";
  return E;
}
int main() {
  employee emp;
  emp = data(emp);
  cout << "Employee Id: " << emp.id;
  cout << "\nEmployee Name: " << emp.name;
  return 0;
}