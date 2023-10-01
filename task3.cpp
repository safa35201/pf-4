#include<iostream>
using namespace std;
void tickPrice(float ticketPrice, string country);
main(){
 float ticketPrice;
 string country;
 cout<<"Enter the country's name: ";
 cin>>country;
 cout<<"Enter the ticket price in dollars: $";
 cin>>ticketPrice;
  tickPrice(ticketPrice, country);
 

}
void tickPrice(float ticketPrice, string country)
{
 if (country=="Pakistan")
{
       cout<<"Final ticket price after discount: $"<<0.95*ticketPrice;
}
 if (country=="Ireland")
{
       cout<<"Final ticket price after discount: $"<<0.9*ticketPrice;
}
 if (country=="India")
{
       cout<<"Final ticket price after discount: $"<<0.8*ticketPrice;
}
 if (country=="England")
{
       cout<<"Final ticket price after discount: $"<<0.7*ticketPrice;
}
 if (country=="Canada")
{
        cout<<"Final ticket price after discount: $"<<0.55*ticketPrice;
}
}