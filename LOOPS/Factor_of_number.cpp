#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : "<<endl;
    cin>>num;
    
    cout<<"All possible factor of "<<num<<" are below"<<endl;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        cout<<i<<" ";
    }
    return 0;
}