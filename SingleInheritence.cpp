#include <iostream>
using namespace std;
class A
{
 public:
 void get()
 {
    int no;
    cout<<"entr a no"<<endl;
    cin>>no;
    cout<<"your no is "<<no<<endl;
    cout<<"this is class A method"<<endl;
 }
};
class B:public A{
    public:
    void set()
    {
        cout<<"this is classs B method"<<endl;
    }

};
int main()
{
 B obj;
 obj.get();
}