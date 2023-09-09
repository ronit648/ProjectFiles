#include<iostream>
using namespace std;
int main()
{
    int num=12;

    // declaring a pointer variable
    int *ptr;
    ptr=&num;

    // printing the address of num variable 
    // cout<<"The address of the num variable is : "<<ptr<<endl;
    // cout<<"The address of the num variable is : "<<&num<<endl;
    // cout<<endl;
    // cout<<"The value on the pointer variable that is store is : "<<*ptr<<endl;


    cout<<"**** POINTER TO POINTER **********"<<endl;
    cout<<endl;
    cout<<endl;
    int **dp=&ptr;
    cout<<"the adress is : "<<dp;
    cout<<"\nthe  value on that adress is : "<<**dp;
    return 0;
}