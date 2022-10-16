#include <iostream>
using namespace std;
int main  ()
{
    int n, k, i, j;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=10; j++)
        {
            k= i*j;
            cout<< i <<" X "<< j << " = "<< k<<endl;

        }
        cout<<endl;

    }
    return 0;
}
