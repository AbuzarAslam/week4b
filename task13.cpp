#include<iostream>
using namespace std;
main()
{
float holidays;
cout << "Enter number of holidays...";
cin >> holidays;
float working_days;
working_days = 365-holidays;
float play_time;
play_time = holidays*127+working_days*63;
float diff;
diff = 30000 - play_time;
if(diff < 0)
	{
	cout << "Tom will run away" << endl << diff << "minutes for play" << endl;
	} 
if (diff > 0)
	{
	cout << "Tom will sleeep well" << endl << diff << "minutes for play" << endl;
	}      

}