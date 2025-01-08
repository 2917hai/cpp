// hybrid inheritence 
#include <iostream>
using namespace  std;
class A
{
 public:
 void incr()
 {
   cout<<"class A method "<<endl;
 }
};
class C:public A
{
 public:
 void print()
 {
    cout<<"class C method "<<endl;
 }
};
class B:public A
{
 public:
 void disp()
 {
  
    cout<<"class b method "<<endl;
 }
};
class D:public B,public C
{

 
};

   int main() 
   {
     D obj;
     obj.print();
     obj.disp();
     obj.B::incr();
   }

