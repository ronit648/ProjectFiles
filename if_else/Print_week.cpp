#include<iostream>
using namespace std;

int main()
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"***************** WEEK DAYS PRINTER ********************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    int days;
    cout<<"Enter days : "<<endl;
    cin>>days;

    if(days == 1)
    cout<<"MONDAY"<<endl;
    else if(days==2)
    cout<<"TUESDAY"<<endl;
    else if(days==3)
    cout<<"WEDNESDAY"<<endl;
    else if(days==4)
    cout<<"THURUSDAY"<<endl;
    else if(days==5)
    cout<<"FRIDAY"<<endl;
    else if(days==6)
    cout<<"SATURDAY"<<endl;
    else if(days==7)
    cout<<"SUNDAY"<<endl;
    else
    cout<<"************** INVALID DAY *****************"<<endl;
    
    return 0;
}