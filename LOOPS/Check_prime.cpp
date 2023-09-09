#include<iostream>
using namespace std;

// function to check number is prime or not
bool check_prime(int num)
{
    int count=0;
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }
    if(count==1)
    return true;
    else 
    return false;

}

// function to print all prime number from 1 to n 
void print_prime(int limit)
{
    int i,j;
    int sum=0;
    for( j=2;j<=limit;j++)
    {
        int count=0;
        for(i=2;i<=j;i++)
        {
           if(j%i==0)
            count++;
        }
        if(count==1)
        sum+=j;

    }
    cout<<"Sum of all prime number from 1 to "<<limit<<" is : "<<sum;

}

int main()
{
    int a;
    cout<<"Enter your number : "<<endl;
    cin>>a;
    // int result=check_prime(a);
    // cout<<result;
    print_prime(a);

    return 0;
}