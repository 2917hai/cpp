#include <iostream>
using namespace std;
int main()
{
    char str[10];
    cout<<"enter a string"<<endl;
    cin.getline(str,10);
    char* ch;
    ch=&str[0];
    int count=0;
    while(*ch!='\0')
    {
        *ch++;
        count++;
    }
    cout<<"length of string"<<""<<count<<endl;
    }
