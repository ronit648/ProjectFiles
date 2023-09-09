#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a value : "<<endl;
    cin>>a;
    for(int i=a;i<=122;i++)
    {
        cout<<i<<" = "<<char(i)<<endl;
    }
    return 0;
}