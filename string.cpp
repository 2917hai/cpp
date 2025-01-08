#include <iostream>
using namespace std;
int main()
{
    //char name[20]={'U','M','E','S','H','\0'};           sam as      '\0'(Null)  kisi bhi charecter array ke last index me rhta hai   (only char array)
    char name[20]="UMESH";

    int ctr=0;
    char ch=name[0];
    while(ch!='\0')
    {

        cout<<ch;
        ctr++;
        ch=name[ctr];
    }
    string name1[5];
    for(int i=0; i<5; i++)
    {
        cin>>name1[i];
    }
      for(int j=0; j<5; j++)
    {
        cout<<name1[j]<<endl;
    }
}

