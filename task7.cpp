#include<iostream>
using namespace std;
void flowerShop(int red, int white, int tulip);
main(){
 int red;
 cout<<"Red Rose: ";
 cin>>red;
 int white;
 cout<<"white Rose: ";
 cin>>white;
 int tulip;
 cout<<"Tulips: ";
 cin>>tulip;
  flowerShop(red, white, tulip);

}
void flowerShop(int red, int white, int tulip)
{ 
  float sum;
  sum=(red*2)+(white*4.10)+(tulip*2.5);
  cout<<"Original Price: $"<<sum<<endl;
     if (sum <=200)
{    
    cout<<"No discount applied.";
}
     if (sum > 200)
{
     cout<<"Price after Discount: $"<<0.8*sum;
}
}
