#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    while(1)
    {
        int n, randomnumber, i, guessnumber;
        cout<<"Enter your number between 1 to 5 : ";
        cin>>guessnumber;


        randomnumber = rand() % 5 +1;
        if (guessnumber == randomnumber)
        {
            cout<<"You are won"<<endl<<endl<<endl;
        }
        else
        {
            cout<<"You did not won, try again : "<<endl;
            cout<<"Randomnumber is : "<<randomnumber<<endl<<endl;
        }

    }
    return 0;

}

