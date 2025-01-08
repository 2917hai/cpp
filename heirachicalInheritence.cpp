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

class B:public A
{
 public:
 void disp()
 {
  
    cout<<"class b method "<<endl;
 }
};
class C:public B
{
public:
void sum()
{
    cout<<"class C method"<<endl;
}
};
class F:public C
{
   public:
void summm()
{
    cout<<"class F method"<<endl;
} 
};
 
class D:public B
{
   public:
void summ()
{
    cout<<"class D method"<<endl;
} 
};
class E:public B
{
   public:
void summm()
{
    cout<<"class E method"<<endl;
} 
};

   int main() 
   {
     D obj;
     obj.disp();
     obj.incr();

     E obj1;
     obj1.disp();
     obj.incr();

     F obj2;
     obj2.sum();
     obj2.summm();
    
    
   }

