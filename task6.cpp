#include<iostream>
#include<windows.h>
void nameA();
void nameW();
void nameI();
void nameS();
void gotoxy(int,int);
using namespace std;
main()
{
 system("cls");
 nameA();
 nameW();
 nameA();
 nameI();
 nameS();
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
 cout << "  #" << endl;
 cout << " # #" << endl;
 cout << " ###" << endl;
 cout << " # #" << endl;
 cout << " # #" << endl << endl << endl;
 }
void nameW()
{
 cout << "  #     #" << endl;
 cout << "  #     #" << endl;
 cout << "  #  #  #" << endl;
 cout << "  # # # #" << endl;
 cout << "  ##   ##" << endl << endl << endl;
}
void nameI()
{
 cout << "  #" << endl;
 cout << "  #" << endl;
 cout << "  #" << endl;
 cout << "  #" << endl;
 cout << "  #" << endl << endl << endl;
}
void nameS()
{
  cout << "  ## " << endl;
  cout << " #   " << endl;
  cout << "  #  " << endl;
  cout << "   # " << endl;
  cout << " ##  " << endl << endl << endl; 
}
 