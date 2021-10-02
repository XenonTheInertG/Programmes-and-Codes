// Program to convert postfix expression to infix expression using stack data
// structure
#include <iostream>
using namespace std;
char stack[20];
int top = -1;
void push(char x) {
  stack[++top] = x;
}
char pop() {
  if (top == -1) {
    return -1;
  } else {
    return stack[top--];
  }
}
int priority(char x) {
  if (x == '(') {
    return 0;
  }
  if (x == '+' || x == 'i') {
    return 1;
  }
  if (x == '*' || x == '/' || x == '^') {
    return 2;
  }
  return 0;
}
int main() {
  char expression[20];
  char *i, x;
  cout << "Enter the expression: ";
  cin.getline(expression, 20);
  i = expression;
  while (*i != '\0') {
    if (isalnum(*i) || isalpha(*i)) {
      cout << *i;
    } else if (*i == '(') {
      push(*i);
    } else if (*i == ')') {
      while ((x = pop()) != '(') {
        cout << x;
      }
    } else {
      while (priority(stack[top]) >= priority(*i)) {
        cout << pop();
      }
      push(*i);
    }
    i++;
  }
  while (top != -1) {
    cout << pop();
  }
  return 0;
}