#include<iostream>
void isEqual(int number1,int number2);
using namespace std;
main()
{
 int number1;
 cout << "Enter 1st number....";
 cin >> number1;
 int number2;
 cout << "Enter 2nd number....";
 cin >> number2;
 isEqual(number1,number2);
}
void isEqual(int number1,int number2)
 {
 if(number1==number2)
  {
  cout << "true";
  }
 if(number1!=number2)
  {
  cout << "false";
  }
 } 