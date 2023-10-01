#include<iostream>
using namespace std;
void possibleBonus(int x, int y);
main(){
 int me;
 cout<<"Enter your position: ";
 cin>>me;
 int fr;
 cout<<"Enter your friend's position: ";
 cin>>fr;
  possibleBonus(me, fr);
}

void possibleBonus(int x, int y)
{
 int diff=y-x;
 if (diff<=6)
{
  cout<<"true";
}
 if (diff >6)
{
  cout<<"false";
}
}