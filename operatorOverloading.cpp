   
# include <iostream>
using namespace std;
// class calculator
// {
//  public:
//  void operator *(calculator c)
//  {
//     int a=10;
//     int b=20;
//     cout<<a+b<<endl;
//  }
// };
// int main()
// {
//  calculator cl1,cl2;
//  cl1*cl2;
// }

class Top
{
   int x;
   public: Top(int a)
   {
     x=a;
   }
   void operator +(Top obj)
   {
      x=x+obj.x;
      cout<<x;
   }
};
int main()
{
   Top t1(4);
   Top t2(10);
   t1+t2;
}