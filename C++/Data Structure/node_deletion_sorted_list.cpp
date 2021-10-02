// Program to delete given item in a sorted linked  list
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node {
  int info;
  node *link;
};
node *temp, *start, *last, *save;
int no;
int main() {
  int item, count = 0;
  char ch = 'y';
  start = last = NULL;
  while (ch == 'y') {
    cout << "Enter info part of node: ";
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
    cout << "\nWant to add more?(y/n): ";
    cin >> ch;
  }
  cout << "The sorted list is:\n";
  temp = start;
  while (temp != NULL) {
    cout << temp->info << " " << temp->link << endl;
    temp = temp->link;
  }
  cout << "Enter the item to be deleted: ";
  cin >> item;
  temp = start;
  save = NULL;
  while (temp != NULL && temp->info < item) {
    save = temp;
    temp = temp->link;
  }
  if (save == NULL) {
    start = start->link;
  } else {
    save->link = temp->link;
  }
  cout << "\nList after insertion:\n";
  temp = start;
  while (temp != NULL) {
    cout << temp->info << " " << temp->link << endl;
    temp = temp->link;
  }
  return 0;
}