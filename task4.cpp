#include<iostream>
#include<windows.h>
void maze();
void gotoxy(int,int);
void movePac(int,int);
using namespace std;
main()
{
   system("cls");
   int x=3;
   int y=3;
   maze();
   while(true)
   {
   
   movePac(x,y);
   
     if(x<25)
     {
        x=x+1;
     }
     if(x==25)
     {
        gotoxy(x-1,y);
        cout<<" ";
        x=3;
     }
     
   }


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
   void movePac(int x,int y)
   {
       gotoxy(x-1,y);
       cout<<"  ";
       gotoxy(x,y);
       cout<<"P";
       Sleep(500);
   }
       
  
  