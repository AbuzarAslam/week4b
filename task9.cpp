#include<iostream>
using namespace std;
void True(string condition);

main()
{
string condition;
cout << "Enter condition...";
cin >> condition;
True(condition);
}
void True(string condition)
 {
 if(condition=="true")
  {
  cout << "false";
  }
 if(condition=="false")
  {
  cout << "true";
  }
 }
