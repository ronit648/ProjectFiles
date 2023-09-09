#include<iostream>
using namespace std;
int main()
{
    float radius,pi=3.14;
    cout<<"Enter the  value of Radius : "<<endl;
    cin>>radius;
    float diameter,circumference,area;
    diameter=2*radius;
    circumference=2*pi*radius;
    area=pi*radius*radius;

    cout<<"The diameter of circle is "<<diameter<<endl;
    cout<<"The circumference of circle is "<<circumference<<endl;
    cout<<"The area of circle is "<<area<<endl;
    
    return 0;
}