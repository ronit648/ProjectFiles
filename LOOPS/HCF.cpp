#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter num1 : "<<endl;
    cin>>num1;
    cout<<"Enter num2 : "<<endl;
    cin>>num2;
    int hcf=1;

    // step 1. find minimum between these two number 
    int min;
    (num1<num2)?min=num1:min=num2;
    
    for(int i=1;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
           hcf=i;
        }
        
        
    }
    cout<<"HCF of "<<num1<<" and "<<num2<<" is : "<<hcf;
    return 0;
}