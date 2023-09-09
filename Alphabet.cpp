#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the Value of a : "<<endl;
    cin>>a;
    
    cout<<"************ ALPHABET A TO Z **********************"<<endl;
    cout<<endl;
    cout<<endl;
    for(int i=a;i<=122;i++)
    {
        cout<<char(i)<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"************* DONE **********************************"<<endl;

    return 0;
}