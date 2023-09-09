#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number for printing their table : "<<endl;
    cin>>num;

    cout<<"The multiplication table of "<<num<< " is : "<<endl;

    for(int i=1;i<=10;i++)
    {
        cout<<num<< " *" <<i<<"=" << num*i<<endl;
    }
    return 0;
}