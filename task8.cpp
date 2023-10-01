#include<iostream>
using namespace std;
void pet(int holidays);
main(){
 int holidays;
 cout<<"Holidays: ";
 cin>>holidays;
  pet(holidays);

}
void pet(int holidays)
{
   int workingDays=365-holidays;
   int timeForGame;
     timeForGame=(holidays*127)+(workingDays*63);
      int norm=30000;
      int diff;
      
       int hours;
       int minutes;
   
     
      if(timeForGame > norm )
{

      diff=timeForGame-30000;
      hours=diff/60;
      minutes=diff%60;
      
      
      cout<<"Tom will run away"<<endl;
      cout<<hours<<" hours and "<<minutes<<" minutes for play";

}
      if (norm > timeForGame )
{
      diff=norm-timeForGame;
      hours=diff/60;
      minutes=diff%60;
       
      cout<<"Tom sleeps well"<<endl;
      cout<<hours<<" hours and "<<minutes<<" minutes less for play";
}
}