# include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int space=1; space<=4-i; space++)
        {
            cout<<" ";
        }
        for(int no=1; no<=i; no++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
