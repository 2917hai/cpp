# include <iostream>
using namespace std;
int main()
{
    int t=1;
    int no;

    cout<<("enter a no");
    cin>>no;
    for(int i=1; i<=10; i++)
    {
    int no2=no+i;
    while(t<=10)
    {
        cout<<no*t;
        cout<<no2*t<<endl;

        t++;


    }

}
}
