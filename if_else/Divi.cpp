#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;

    if((num%5==0) && (num%11==0))
    cout<<"Yes number is divisible by  5 and 11"<<endl;
    else
    cout<<"Number is not divisible by 5 and 11"<<endl;
    return 0;
}