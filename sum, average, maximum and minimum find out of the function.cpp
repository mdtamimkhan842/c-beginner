#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int n, i, j, sum=0 ;
    cout<<"Enter the size of array : ";

    cin>>n;
    int arr[n];
    for (i=0; i<=n; i++)
    {
        cout<<"Enter the array : "<< i+1 << " = " ;
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<"sum is : " << sum << endl;
    float ave = (float) sum / n;
    cout<<"average is : " << ave<<endl;

    int max = arr[0];
    int min= arr[0];
    for (i=0; i<=n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<" maximum number is : " << max<<endl;

    for (i=0; i<=n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<" minimum number is : " << min<<endl;

    getch();
}
