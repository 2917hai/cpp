# include <iostream>
using namespace std;
int main()
{
    int no=10;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=5-i; j++)
        {
            cout<<no;
             no=no-1;
        }

        cout<<endl;
    }
}
