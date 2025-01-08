# include <iostream>
using namespace std;
int main()
{

    int no;
    cout<<"enter a number ";
    cin>>no;
    int rem;
    int sum=0;
    while(no>0)
    {
        rem=no%10;
        sum=sum+rem;
        no=no/10;

    }
    cout<<sum;
}
