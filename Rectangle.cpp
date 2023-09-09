#include<iostream>
using namespace std;

int main()
{
    int length,breadth;
    cout<<"Enter the length of Rectangle :"<<endl;
    cin>>length;
    cout<<"Enter the breadth of Rectangle :"<<endl;
    cin>>breadth;

    int  perimeter= 2*(length+breadth);
    int area=(length*breadth);
    cout<<"The perimeter of Rectangle is :"<<perimeter<<endl;
    cout<<"The area of Rectangle is :"<<area<<"sq"<<endl;
    return 0;
}