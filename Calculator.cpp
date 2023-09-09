#include<iostream>
using namespace std;

int main()
{
    cout<<"*************** CALCULATOR PROGRAM ****************"<<endl;
    float num1,num2;
    char ch;
    cin>>num1>>ch>>num2;

    switch(ch)
    {
        case '+':
        cout<<num1 + num2;
        break;
        case '-':
        cout<<num1 - num2;
        break;
        case '*':
        cout<<num1 * num2;
        break;
        case '/':
        cout<<num1 / num2;
        break;

        default:
        cout<<"Syntax Error";
        break;

    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"*************** DONE *********************"<<endl;
    
    return 0;
}