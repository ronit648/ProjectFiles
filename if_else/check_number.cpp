#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;
    if(num > 0)
    cout<<"Number is positive"<<endl;
    else if(num < 0)
    cout<<"Number is negative"<<endl;
    else
    cout<<"Zero"<<endl;
    return 0;
}