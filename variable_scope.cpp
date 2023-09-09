#include<iostream>
using namespace std;

int a=300;// this are global variable

// sum function
void sum()
{
    cout<<a;
}

int main()
{
    int a=202;//this is local variable and take more prference
    sum();
    cout<<a;
    return 0;
}