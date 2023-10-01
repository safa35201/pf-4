#include<iostream>
#include<windows.h>
void printmaze();
void gotoxy(int x, int y);
using namespace std;
main(){

system("cls");
  printmaze();
  gotoxy(3, 4);
  cout<<"P";


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