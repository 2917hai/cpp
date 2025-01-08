# include <iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter a number";
    cin>>no;
    int temp=no;
    int length=0;
    int rem;
    int mult=1;
    int sum=0;
    int temp2=no;
    int mult1;


    while(temp2>0)
    {
        temp2=temp2/10;
        length++;

    }
    while(temp>0)
    {
        mult=1;
        rem=temp%10;
        temp=temp/10;

        for(int i=1; i<=length; i++)
        {

            mult=mult*rem;
        }
        sum=sum+mult;



    }
    cout<<sum;
}
