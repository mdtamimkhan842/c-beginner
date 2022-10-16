#include <iostream>
using namespace std;
int main ()
{
    int x,y,z,n;
    cout<<"Enter four variable : ";
    cin >>x>>y>>z>>n;//80 50 100 20
    int result = (x>y && x>z && x>n) ? x :(y>z && y>n) ? y : (z>n) ? z : n ;
    cout<<result;

    return 0;
}
/*int x,y,z,n;
cout<<"Enter three variable : ";
cin >>x>>y>>z;//80 50 100
int result = (x>y && x>z) ? x :(y>z) ? y :z ;
cout<<result;*/
