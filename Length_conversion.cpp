#include<iostream>
using namespace std;
int main()
{
    float length;
    cout<<"Enter the length in Centimeter "<<endl;
    cin>>length;
    float meter,km;
    meter=(length/100);
    km=length/10000;
    cout<<"Length in meter is :"<<meter<<"m"<<endl;
    cout<<"Length in kilometer is :"<<km<<"km"<<endl;
    return 0;
}