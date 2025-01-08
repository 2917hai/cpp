#include <iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter a three digit no"<<endl;
    cin>>no;
    int digit=0;
    int temp=no;
    while(temp>0)
    {
        temp=temp/10;
        digit++;
    }
    if(digit==3)
    {
    cout<<digit;
    int hund;
    int ten;
    int single;
    hund=no/100;
    cout<<"hundred is "<<hund<<endl;
     no=no%100;
    ten=no/10;
    cout<<"ten is "<<ten<<endl;
     no=no%10;
    single=no/1;
    cout<<"single is "<<single<<endl;
    }
    else
    {
        cout<<"invalid value"<<endl;
    }
}
