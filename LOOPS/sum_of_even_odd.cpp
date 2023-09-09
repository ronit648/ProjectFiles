#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;
    int even_sum=0,odd_sum=0;

    while(num!=0)
    {
        int d=num%10;
        if(d%2==0)
        even_sum+=d;
        else
        odd_sum+=d;
    }
    cout<<"The sum of even digit "<<even_sum<<endl;
    cout<<"The sum of odd digit "<<odd_sum<<endl;
    return 0;
}