#include<iostream>
using namespace std;
int main()
{
    long long int num;
    cout<<"Enter your number : "<<endl;
    cin>>num;

    long long int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<" is : "<<fact<<endl;
    return 0;
}