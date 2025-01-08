#include<iostream>
using namespace std;
class Test
{
public:
   static int i;   //class scope
    void incr()
    {
          //int i=0;        //local variable
        i++;
        cout<<i<<endl;

    }
};
int Test::i=0;   //globel scope
int main()
{
    Test obj;
    obj.incr();
    obj.incr();
    obj.incr();

      Test obj1;
    obj1.incr();
    obj1.incr();
    obj1.incr();
}