# include <iostream>
using namespace std;
int main()
{
     int num=3;
    int no=6;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4-i; j++)
        {
            cout<<no<<"*";

        }
         cout<<no;
        cout<<endl;
        no=no-1;
    }

    for(int k=1; k<=4; k++)
    {
        for(int l=1; l<=k-1; l++)
        {
            cout<<num<<"*";
        }
        cout<<num;
        num=num+1;
        cout<<endl;
    }
}
