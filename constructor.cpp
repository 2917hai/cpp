/*
 Constructor name same as class name 
 NO need to return type 
 automatic call when we create object of class
*/
# include <iostream>
using namespace std;
class Employee
{
  int id;
  string name;
  double salary;

  public:
  Employee()
  {
    id=000;
    name="default";
    salary=000.00;
    cout<<"constructor called"<<endl;
  }
  void print()
  {
    cout<<"ID"<<id<<endl;
    cout<<"Name"<<name<<endl;
    cout<<"salary"<<salary<<endl;
  
  }
};
int main()
{
    Employee obj;
    obj.print();
}
