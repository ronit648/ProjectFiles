#include<iostream>
using namespace std;

int main()
{
    int  num;
    cout<<"Enter your number : "<<endl;
    cin>>num;
    int temp=num;
    int reverse=0;
    while(num!=0)
    {
        reverse=(reverse*10) +(num%10);

        num/=10;
    }

    if(reverse==temp)
    cout<<temp<<" is a palindrome number"<<endl;
    else
    cout<<temp<<" is not a palindrome number"<<endl;

    return 0;
}