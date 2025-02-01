 #include <iostream>
 using namespace std;
 class RBI
 {
public :void loan()
{
    cout<<"Approved by RBI \n";
}
 };
 class SBI: virtual public RBI
 {
  public :void get()
{
    cout<<"get by SBI \n";
}
 };
  class AXIS: virtual public RBI
 {
  public :void set()
{
    cout<<"get by AXIS \n";
}
 };
   class Customer:public AXIS, public SBI
 {
  public :void info()
{
    cout<<"all information about loan \n";
}
 }; 
 int main()
 {
    Customer obj;
    obj.info();
    obj.set();
    obj.get();
    obj.loan();

 }

/*
Inheritance bottom to top approach     object child
polymorphism top to botton approach    object parent 
*/