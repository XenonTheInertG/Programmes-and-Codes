// Program to delete first or last node in a linked list
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node {
  int info;
  node *link;
};
node *start, *save, *last, *temp;
int no;
void atbegin();
void atlast();
int main() {
  int where;
  start = last = NULL;
  char ch = 'y';
  while (ch == 'y') {
    cout << "Enter the info part(integer type) in the node: ";
    cin >> no;
    temp = new node;
    temp->info = no;
    temp->link = NULL;
    if (start == NULL) {
      start = last = temp;
    } else {
      last->link = temp;
      last = temp;
    }
    cout << "\nWant to add more info in the node?(y/n): ";
    cin >> ch;
  }
  cout << "\nYour entered list:\n";
  temp = start;
  while (temp != NULL) {
    cout << temp->info << " ";
    cout << temp->link << endl;
    temp = temp->link;
  }
  cout << "\nWant to delete anything?(y/n): ";
  cin >> ch;
try_again:
  if (ch == 'y') {
    cout << "\nWhich node you want to delete?\n1.First\t2.Last"
            "\nchoose 1 or 2: ";
    cin >> where;
  }
  if (where == 1) {
    atbegin();
  } else if (where == 2) {
    atlast();
  } else {
    cout << "Invalid selection";
    goto try_again;
  }
  return 0;
}
void atbegin() {
  cout << "List after deletion:\n";
  start = start->link;
  temp = start;
  while (temp != NULL) {
    cout << temp->info << " ";
    cout << temp->link << endl;
    temp = temp->link;
  }
}
void atlast() {
  temp = start;
  save = NULL;
  while (temp->link != NULL) {
    save = temp;
    temp = temp->link;
  }
  cout << "\nList after deletion:\n";
  temp = start;
  while (temp != NULL) {
    cout << temp->info << " ";
    cout << temp->link << endl;
    temp = temp->link;
  }
}