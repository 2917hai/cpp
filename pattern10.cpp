# include <iostream>
using namespace std;
int main()
{
    int no=2;
    int num=4;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            cout<<no<<"*";
        }
        cout<<no;
        no=no+1;
        cout<<endl;
    }
    for(int k=1; k<=3; k++)
    {
        for(int l=1; l<=3-k; l++)
        {
            cout<<num<<"*";
        }
        cout<<num;
        num=num-1;
        cout<<endl;
    }
}
