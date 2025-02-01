// Constructor is special type of function which name is same name of class
// always default constructor are always working for give the memory
// constructor by default public hota hai
// 
#include <iostream>
using namespace std;
class Test
{
  int data;
  public:
  Test(int data)
  {
    this->data=data;
  }
  Test (Test &t)
  {
    cout<<t.data<<endl;
    //data=t.data
  }
  ~ Test()
  {
    cout<<"memory released";
  }
};
int main()
{
 Test obj(100);
 Test obj1(obj);
}