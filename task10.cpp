#include<iostream>
using namespace std;
void Pakistan(float price,float discont);
void Ireland(float price,float discont);
void India(float price,float discont);
void England(float price,float discont);
void Canada(float price,float discont);
main()
{
 string country;
 float discont;
 while(true)
 {
 cout << "Enter country name...";
 cin >> country;
 float price;
 cout << "Enter price....";
 cin >> price;
 if(country=="ireland")
 {
 Ireland(price,discont);
 }
 if(country=="india")
 {
 India(price, discont);
 }
 if(country=="england")
 {
 England( price, discont);
 }
 if(country=="canada")
 {
 Canada(price,discont);
 }
 if(country=="pakistan")
 {
 Pakistan(price,discont);
 }
}
}
void Pakistan(float price,float discont)
 {
  discont = price - price*0.05;
  cout << "your price after disciunt is...." << discont << endl; 
 }
void Ireland(float price,float discont)
 {
  discont = price - price*0.1;
  cout << "your price after disciunt is...."<< discont << endl; 
 }
void India(float price,float discont)
 {
  discont = price - price*0.2;
  cout << "your price after disciunt is...."<< discont << endl; 
 }
void England(float price,float discont)
 {
  discont = price - price*0.3;
  cout << "your price after disciunt is...."<< discont << endl; 
 }
void Canada(float price,float discont)
 {
  discont = price - price*0.45;
  cout << "your price after disciunt is...." << discont <<endl; 
 }
