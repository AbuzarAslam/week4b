#include<iostream>
#include<windows.h>
void gotoxy(int,int);
using namespace std;
main()
{
   cout << "test";
   system("cls");
   gotoxy(30,30);
   cout<<"Abuzar Aslam ";
   


}

  void gotoxy(int x,int y)
  {
     COORD coordinates;
     coordinates.X =x;
     coordinates.Y =y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }
  
