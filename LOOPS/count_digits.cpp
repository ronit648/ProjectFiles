#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter your Number : "<<endl;
    cin>>num;
    int count=0,d;

    while(num!=0)
    {
        d=num%10;
        count++;
        num/=10;
    }
    cout<<"The total number of digits are : "<<count<<endl;
    return 0;
}