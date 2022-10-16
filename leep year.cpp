#include <iostream>
using namespace std;
int main ()
{
    int year;
    cout<<"Enter the year : ";
    cin >>year;

    if (year % 4 ==0 && year % 100 !=0)//
    {
        cout<<"This year is leep year"<<endl;
    }
    else if (year % 400 ==0)
    {
        cout<<"This year is leep year"<<endl;
    }
    else
    {
        cout<<"This year is not leep year"<<endl;
    }

    return 0;
}
