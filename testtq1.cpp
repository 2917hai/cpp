#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=15;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
    int five=0;
    int one=0;
    int fifty=0;
    int twinty=0;
    int ten=0;
    int fivee=0;
    int two=0;
    int onee=0;
    int amount;
    cout<<"enter amount"<<endl;
    cin>>amount;
    while(amount>0)
    {
          if(amount>=500)
          {
           amount=amount%500;
           five++;
          }
           else if(amount>=100 && amount<500)
          {
           amount=amount%100;
           one++;
          }
           else if(amount>=50 && amount<100)
          {
           amount=amount%50;
           fifty++;
          }
           else if(amount>=20 && amount<50)
          {
           amount=amount%20;
           twinty++;
          }
           else if(amount>=10 && amount<20)
          {
           amount=amount%10;
           ten++;
          }
           else if(amount>=5 && amount<10)
          {
           amount=amount%5;
           fivee++;
          }
           else if(amount>=2 && amount<5)
          {
           amount=amount%2;
           two++;
          }
    }
    cout<<five<<endl;
    cout<<one<<endl;
    cout<<fifty<<endl;
    cout<<twinty<<endl;
    cout<<ten<<endl;
    cout<<fivee<<endl;
    cout<<two<<endl;
    int num=4567;
    int temp=num;
    int sum=(temp%10)+(temp/1000);
    cout<<sum<<endl;
    int m='a';
    int n='A';
    cout<<m<<n;
    char ch1=65;
    char ch2=97;
    cout<<ch1<<ch2;

}
