#include <iostream>
using namespace std;
int main()
{
/*char name[]="Umesh";
    int length=0;
    int ctr=0;
    while(name[ctr]!='\0')
    {
        ctr++;
        length++;
    }
    */

    char str[20];
    cin>>str;
    char ch=str[0];
    int len=0;
     while(ch!='\0')
     {
        cout<<ch;
          len++;
         ch=str[len];

     }

   // cout<<length;
    cout<<len;
}
