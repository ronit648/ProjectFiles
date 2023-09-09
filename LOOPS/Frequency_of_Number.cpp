#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter your number : "<<endl;
    cin>>num;
    int d,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;

    while(num !=0)
    {
        d=num%10;

        if(d==1)
        one++;
        else if(d==2)
        two++;
        else if(d==3)
        three++;
        else if(d==4)
        four++;
        else if(d==5)
        five++;
        else if(d==6)
        six++;
        else if(d==7)
        seven++;
        else if(d==8)
        eight++;
        else if(d==9)
        nine++;
        else
        cout<<"ERROR"<<endl;
        
        num/=10;

    }
    cout<<" 1 -> "<<one<<endl;
    cout<<" 2 -> "<<two<<endl;
    cout<<" 3 -> "<<three<<endl;
    cout<<" 4 -> "<<four<<endl;
    cout<<" 5 -> "<<five<<endl;
    cout<<" 6 -> "<<six<<endl;
    cout<<" 7 -> "<<seven<<endl;
    cout<<" 8 -> "<<eight<<endl;
    cout<<" 9 -> "<<nine<<endl;
    return 0;
}