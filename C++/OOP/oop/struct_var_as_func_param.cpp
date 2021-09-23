// Program to use structure varisble as parameter of a function
#include <iostream>
using namespace std;
struct employee {
  int id;
  string name;
};
void show_data(employee E) {
  cout << "Employee Id: " << E.id;
  cout << "\nEmployee Name: " << E.name;
}
int main() {
  employee E;
  E.id = 1900670;
  E.name = "Hemant Sachdeva";
  show_data(E);
  return 0;
}