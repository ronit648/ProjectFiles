#include<iostream>
using namespace std;

int main()
{
    int sum=0,n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    for(int i=1;i<n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of all natural number from 1 to "<<n<<" is : "<<sum<<endl;
    return 0;
}