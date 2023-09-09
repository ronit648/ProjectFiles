#include<iostream>
using namespace std;

int main()
{
    int  num;
    cout<<"Enter your number : "<<endl;
    cin>>num;
    int reverse=0;
    while(num!=0)
    {
        reverse=(reverse*10) +(num%10);

        num/=10;
    }
    // cout<<"After reverse the number become "<<reverse<<endl;
    int var;
    while(reverse  !=0)
    {
        var=reverse%10;

        switch(var)
        {
            case 0:
            cout<<"ZERO"<<" ";
            break;
            case 1:
            cout<<"ONE"<<" ";
            break;
            case 2:
            cout<<"TWO"<<" ";
            break;
            case 3:
            cout<<"THREE"<<" ";
            break;
            case 4:
            cout<<"FOUR"<<" ";
            break;
            case 5:
            cout<<"FIVE"<<" ";
            break;
            case 6:
            cout<<"SIX"<<" ";
            break;
            case 7:
            cout<<"SEVEN"<<" ";
            break;
            case 8:
            cout<<"EIGHT"<<" ";
            break;
            case 9:
            cout<<"NINE"<<" ";
            break;
            default:
            cout<<"**** INVALID RESPONSE ******"<<endl;
            break;

        }
        reverse/=10;
    }
    return 0;
}