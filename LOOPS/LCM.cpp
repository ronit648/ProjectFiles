#include<iostream>
using namespace std;
int main()
{
    int num1,num2,max;
    cout<<"Enter two number : "<<endl;
    cin>>num1>>num2;

    (num1>num2)?max=num1:max=num2;
    int i=max;
    int lcm=1;      

    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        i=i+max;
    }
    cout<<"LCM of "<<num1<<" and "<<num2<<" is :"<<lcm<<endl;
    return 0;
}