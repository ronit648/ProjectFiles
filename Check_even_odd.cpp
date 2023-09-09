#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enterany Number : "<<endl;
    cin>>num;

    if(num % 2==0)
    cout<<num <<" is Even Number"<<endl;
    else
    {
        cout<<"Number is odd"<<endl;
    }
    return 0;
}