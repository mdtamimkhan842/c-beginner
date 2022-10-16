// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " ;
    cin >> num1 >> num2;

    switch (oper)
    {

    case '+':
        cout << "="<< num1+num2;
        break;
    case '-':
        cout  <<"="<< num1-num2;
        break;
    case '*':
        cout << "="<< num1*num2;
        break;
    case '/':
        cout << "="<< num1/num2;
        break;
    default :
        cout<<"The operator is not correct";
    }

    return 0;
}
