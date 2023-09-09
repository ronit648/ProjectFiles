#include<iostream>
using namespace std;
int main()
{
    float cel,fren;
    cout<<"Enter temperature in celsius "<<endl;
    cin>>cel;
    cout<<"Enter temperature in farenhite "<<endl;
    cin>>fren;
    float farenhite=(cel*9/5)+32;
    float celsius=(fren-32)*5/9;

    cout<<"Temperature in farenhite is : "<<farenhite<<"F"<<endl;
    cout<<"Temperature in celsius is : "<<celsius<<"C"<<endl;
    return 0;
}