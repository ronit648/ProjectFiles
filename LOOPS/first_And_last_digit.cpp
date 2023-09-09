#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter your number : "<<endl;
    cin>>num;
    int temp=num;
    int last_digit=num%10;
    cout<<"The last digit of "<<num<<" is : "<<last_digit<<endl;
    int first_digit;

    while(num > 9)
    {
        num/=10;
    }
    first_digit=num;
    cout<<"The first digit of "<<temp<<" is : "<<first_digit<<endl;

    int sum=first_digit+last_digit;
    cout<<"The sum of "<<first_digit<<" and "<<last_digit<<" is : "<<sum<<endl;
    return 0;
}