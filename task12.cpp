#include<iostream>
using namespace std;
void discount(float dis,int sum);
main()
{
int red;
int white;
int tulips;
int sum;
float dis;
float red_price,white_price,tulips_price;
cout << "Enter number of red roses....";
cin >> red;
cout << "Enter number of white roses....";
cin >> white;
cout << "Enter number of tulips....";
cin >> tulips;
red_price=red*2;
white_price=white*4.10;
tulips_price=tulips*2.5;
sum = red_price+white_price+tulips_price;
discount(dis,sum);
}
void discount(float dis,int sum)
 {
 if(sum>200)
	{
	dis = sum - sum*0.2;
	cout << "Your price after discount is....." << dis << endl;
	}
	cout << "Original price is...." << sum << endl;
 }