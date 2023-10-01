#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main(){
 system("cls");
 gotoxy(1, 1);
  cout<<"  H";
 gotoxy(1, 2);
  cout<<"  A";
 gotoxy(1, 3);
  cout<<"  S";
 gotoxy(1, 4);
  cout<<"  S";
 gotoxy(1, 5);
  cout<<"  A";
 gotoxy(1, 6);
  cout<<"  N";

 
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}