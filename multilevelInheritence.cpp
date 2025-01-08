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
class D:public C
{
   public:
void summ()
{
    cout<<"class D method"<<endl;
} 
};

   int main() 
   {
     D obj;
     obj.disp();
     obj.incr();
     obj.sum();
     obj.summ();
    
   }

