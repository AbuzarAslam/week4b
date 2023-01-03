#include<iostream>
using namespace std;
void Challan(int speed);
main()
{
 int speed;
 cout << "Enter speed...";
 cin >> speed;
 Challan(speed);
}
void Challan(int speed)
 {
 if(speed>100)
	{
	cout << "Halt....YOU WILL BE CHALLANDED";
	}
 if(speed<=100)
	{
	cout << "Perfect! you're going good";
	}
 }