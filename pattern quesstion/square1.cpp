#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter teh value of n : "<<endl;
    cin>>n;
    int k=1;
    int count=1;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i == j || (j == (n+1)-i))
            cout<<count<<" ";
            else
            cout<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
