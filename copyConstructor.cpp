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
};
int main()
{
 Test obj(100);
 Test obj1(obj);

}