#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;

    if(num1 > num2)
    cout<<num1 << " is maximum"<<endl;
    else
    cout<<num2 <<" is maxmimum"<<endl;

    return 0;
}