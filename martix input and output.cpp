#include <iostream>
using namespace std;
int main ()
{
    int arr[5][5];
    int i, j, n;
    cout<<"Enter the value : ";
    cin>>n;
    cout<<"Enter the element for the martix : "<<endl;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
