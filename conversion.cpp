#include<iostream>
using namespace std;

int main()
{
    int total_days;
    cout<<"Enter total number of days : "<<endl;
    cin>>total_days;
    int year,remaining_days,weeks,days;

    year=total_days / 365;
    remaining_days=total_days % 365;
    weeks=remaining_days / 7;
    days=remaining_days % 7;

    cout<<"NUmber of years :"<<year<<endl;
    cout<<"NUmber of weeks :"<<weeks<<endl;
    cout<<"NUmber of days :"<<days<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"********** PROGRAM EXCUTED SUCESSFULLY ****************"<<endl;
    cout<<"********** THANKS FOR VISITING INDIAMART ****************"<<endl;
    return 0;
}