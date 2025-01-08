/*
polymorphism that means many form
                     polymorphism
   static                                    Dynamic
   overloading                             over ridding
   early binding                           late binding
                    
*/
# include <iostream>
using namespace std;
class calculator
{
 public:
 int add()
 {
    int a=20;
    int b=10;
    cout<<"enter two number"<<endl;
   //  cin>>a>>b;
    return a+b;
 }
 int add(int a, int b)
 {
    return a+b;
 }
 int add(int a, int b, int c)
 {
    return (a+b+c);
 }
};
int main()
{
calculator clc;
cout<<clc.add()<<endl;
cout<<clc.add(5,5)<<endl;
cout<<clc.add(5,5,5)<<endl;
}
