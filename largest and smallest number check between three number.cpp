#include <iostream>
using namespace std;
int main ()
{
    int x,y,z;
    cout<<"Enter the three number: ";
    cin >>x>>y>>z;
   if (x>y && x>z){
   cout<<"largest number is : "<<x<<endl;
   }else if(y>x && y>z){
   cout<<"largest number is : "<<y<<endl;
   }else{
   cout<<"largest number is : "<<z<<endl;
   }
   if (x<y && x<z){
   cout<<"smallest number is : "<<x<<endl;
   }else if(y<x && y<z){
   cout<<"smallest number is : "<<y<<endl;
   }else{
   cout<<"smallest number is : "<<z<<endl;
   }


    return 0;
}
