# include <iostream>
using namespace std;
class calculator
{
 public:
 void operator *(calculator c)
 {
    int a=10;
    int b=20;
    cout<<a+b<<endl;
 }
};
int main()
{
 calculator cl1,cl2;
 cl1*cl2;
}