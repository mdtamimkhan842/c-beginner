#include <iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if (n>100 || n<0)
    {
        cout<<" Invalid";
    }
    else if(n>=80)
    {
        cout<<" A+";
    }
    else if(n>=70)
    {
        cout<<" A";
    }
    else if (n>=65)
    {
        cout<<" A-";
    }
    else if (n>=60)
    {
        cout<<" B";
    }
    else if (n>=50)
    {
        cout<<" C";
    }
    else if (n>=33)
    {
        cout<<" D";
    }
    else
    {
        cout<<" F";
    }

    getch();
}
