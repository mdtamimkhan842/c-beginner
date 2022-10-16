#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float a, b, sum, div;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Enter two vaariable: ";
    cin>>a>>b;
    sum= a+b;
    cout<<"sum is : "<<sum<<endl;
    cout<<fixed;
    div= a-b;
    cout<<"divide is : "<<div;

    return 0;
}
