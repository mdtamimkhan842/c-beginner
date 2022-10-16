#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    int n, randomnumber, i;
    cout<<"Enter the number is : ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        randomnumber = rand() % 3;
        cout<<"Random number is = "<<randomnumber<<endl;
    }




    return 0;
}
