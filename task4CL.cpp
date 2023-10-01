#include<iostream>
#include<windows.h>
void printmaze();
void playerMove(int x, int y);
void gotoxy(int x, int y);
using namespace std;
main(){

  system("cls");
  printmaze();
  int x=3,y=4;
  gotoxy(0, 9);
while(true)
{
  playerMove(x, y);
  x = x+1;
  
}
}
void playerMove(int x, int y)
{
gotoxy(x, y);
cout<<"P";
Sleep(200);
gotoxy(x, y);
cout<<" ";
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{

     cout<<endl;
     cout<<" #######################"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #######################"<<endl;




}