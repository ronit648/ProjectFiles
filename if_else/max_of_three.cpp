// maximum between three numbers
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    int c;
    cout<<"Enter the value of c : "<<endl;
    cin>>c;

    if(a>b && a>c)
    cout<<a<<" is maximum"<<endl;
    else if(b>a && b>c)
    cout<<b<<" is maximum"<<endl;
    else
    cout<<c<<" is maximum"<<endl;
    return 0;
}