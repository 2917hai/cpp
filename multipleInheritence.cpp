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


   int main() 
   {
     B obj;
     obj.incr();
     C obj1;
     obj1.incr();
   }

