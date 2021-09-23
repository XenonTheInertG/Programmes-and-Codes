// Program to use some string functions
#include<iostream>
#include<string.h>
using namespace std;
int main(){
  char str1[30] = "Str2 is joining ";
  char str2[30] = "Str1.";
  cout << strcat(str1, str2)<<endl;
  char str3[30] = "Str4 replaced by Str3";
  char str4[30] = "Str3 replaced by Str4";
  cout << strcpy(str3, str4)<<endl; // Now str3 is "Str3 replaced by Str4"
  cout << strcpy(str4, str3);
}