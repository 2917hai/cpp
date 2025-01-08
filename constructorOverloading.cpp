# include <iostream>
using namespace std;
class Employee
{
  int id;
  string name;
  double salary;

  public:
  Employee()     // Default Constructor
  {
    id=000;
    name="default";
    salary=000.00;
    cout<<"constructor called"<<endl;
  }
  Employee(int id, string name, double salary) // parameterize Constructor;
  {
    this->id=id;
    this->name=name;
    this->salary=salary;
    cout<<"ID"<<"\t"<<id<<endl;
    cout<<"Name"<<"\t"<<name<<endl;
    cout<<"salary"<<"\t"<<salary<<endl;
  }

Employee (int id, string name)
{
    this->id=id;
    this->name=name;
    this->salary=00;
}

  void print()
  {
    cout<<"ID"<<"\t"<<id<<endl;
    cout<<"Name"<<"\t"<<name<<endl;
    cout<<"salary"<<"\t"<<salary<<endl;
  
  }
};

int main()
{
    Employee obj;
    obj.print();
    Employee obj1(191,"Umesh",5498);
    obj1.print();
    Employee obj3(180,"Umesh");
    obj3.print();
}
