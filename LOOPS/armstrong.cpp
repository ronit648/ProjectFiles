#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number: "<<endl;
    cin>>num;
    int temp=num;
    int sum=0;
    
    
    while(num!=0) 
    {
        int d=num%10;
        sum+=(d*d*d);
        num/=10;
    }
    if(sum==temp)
    
}