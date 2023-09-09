#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : "<<endl;
    cin>>num;

    cout<<"All prime factor of "<<num<<" is : "<<endl;

    for(int i=2;i<num;i++)
    {
       if(num%i==0)
       cout<<i<<" ";
    }
    return 0;
}