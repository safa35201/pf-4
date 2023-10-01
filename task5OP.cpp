#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main(){
 system("cls");
 gotoxy(50,15);
 cout<<"SAFA ATTIQ";
 gotoxy(0, 30);
 
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}