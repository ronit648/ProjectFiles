#include<iostream>
using namespace std;

int main()
{
    // power  of any number 
    int num;
    cout<<"Enter  any num : "<<endl;
    cin>>num;

    int base;
    cout<<"Enter base : "<<endl;
    cin>>base;

    int pow=1;
    for(int i=0;i<base;i++)
    {
        pow*=num;
    }
    cout<<"Power of "<<num<<"^"<<base<<" is : "<<pow<<endl;

    return 0;
}