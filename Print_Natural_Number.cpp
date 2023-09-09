#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the upper limits of n : "<<endl;
    cin>>n;

    cout<<"**** The natural number from  10 to " <<n <<" is :  ****"<<endl;
    for(int i=10;i>=n;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"*************** DONE **************************"<<endl;
    return 0;
}