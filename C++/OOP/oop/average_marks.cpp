// Program to find the total and average of marks of students in a class
#include <iostream>
using namespace std;
int main() {
  char name[30], cls[4];
  int roll_no;
  float maths, eng, hindi, sci, total_marks, avg;
  cout << "Enter your name: ";
  cin.getline(name, 30);
  cout << "Enter your class: ";
  cin.ignore();
  cin.getline(cls, 4);
  cout << "Enter your marks in Maths: ";
  cin >> maths;
  cout << "Enter your marks in Englsh: ";
  cin >> eng;
  cout << "Enter your marks in Science: ";
  cin >> sci;
  cout << "Enter your marks in Hindi: ";
  cin >> hindi;
  total_marks = maths + eng + hindi + sci;
  avg = total_marks / 4;
  cout << "Your total marks are: " << total_marks;
  cout << "Your average marks are: " << avg;
  return 0;
}