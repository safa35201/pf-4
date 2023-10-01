#include<iostream>
using namespace std;
void longestTime(float hours, float mint);
main(){
 float hours;
 cout<<"Enter the number of hours: ";
 cin>>hours;
 float mint;
 cout<<"Enter the number of minutes: ";
 cin>>mint;
  longestTime(hours, mint);
 
}

void longestTime(float hours, float mint)
{ 
  if(hours*60 > mint) 
{
   cout<<hours;
}
  if (hours*60 < mint)
{
   cout<<mint;
}
}