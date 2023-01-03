#include<iostream>
#include<windows.h>
void maze();
void gotoxy(int,int);
using namespace std;
main()
{
   system("cls");
   int x=5;
   int y=5;
   
   maze();
   gotoxy(x,y);
   cout<<"P";


}

  void gotoxy(int x,int y)
  {
     COORD coordinates;
     coordinates.X =x;
     coordinates.Y =y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }

  void maze()
  {
	cout<<"########################################" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"#                                      #" << endl;
	cout<<"########################################" << endl;

}
   
  
  