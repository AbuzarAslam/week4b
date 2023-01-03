#include<iostream>
#include<windows.h>
void nameA();
void nameL();
void nameI();
void gotoxy(int,int);
using namespace std;
main()
{
 system("cls");
 nameA();
 nameL();
 nameI();
}
void gotoxy(int x,int y)
 {
     COORD coordinates;
     coordinates.X =x;
     coordinates.Y =y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }
 void nameA()
 {
 gotoxy(70,2);
 cout << "  #" << endl;
 gotoxy(70,3);
 cout << " # #" << endl;
 gotoxy(70,4);
 cout << " ###" << endl;
 gotoxy(70,5);
 cout << " # #" << endl;
 gotoxy(70,6);
 cout << " # #" << endl;
 }
void nameL()
{
	 gotoxy(70,3);
 cout << "  #    " << endl;
 gotoxy(70,9);
 cout << "  #    " << endl;
 gotoxy(70,10);
 cout << "  #    " << endl;
 gotoxy(70,11);
 cout << "  #    " << endl;
 gotoxy(70,12);
 cout << "  #####" << endl;
}
void nameI()
{
 gotoxy(70,15);
 cout << "  #" << endl;
 gotoxy(70,16);
 cout << "  #" << endl;
 gotoxy(70,17);
 cout << "  #" << endl;
 gotoxy(70,18);
 cout << "  #" << endl;
 gotoxy(70,19);
 cout << "  #" << endl;
}
 