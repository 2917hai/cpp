/*
key concept of oops
1)- class      collection of object and it is the blueprint of object // user definde data type
2)- attribute  information about the class
3)- method     functionality of class
4)- object     identity of class which can access attribute and method and every things in real world
5)- Message

class=
  *Subject=concept=blueprint=set of information and functionalities
  *Object=collection of object
*/
#include <iostream>
using namespace std;

class students
{
    public:
    //Attributes
    char name[20];
    char add[50];
    int age;
    int rollno;
    // Method
    void setdata()
    {
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter address"<<endl;
        cin>>add;
        cout<<"enter your age"<<endl;
        cin>>age;
        cout<<"enter your roll no"<<endl;
        cin>>rollno;
    }
    void print()
    {

        cout<<"students name is  "<<name<<endl;
        cout<<"your address is   "<<add<<endl;
        cout<<"your age is   "<<age<<endl;
        cout<<"your roll no is  "<<rollno<<endl;
    }
};


class circle
{
    public:
   int red;

   void getdata1()
   {
       cout<<"enter the redius "<<endl;
       cin>>red;
   }
   int clc()
   {
       int area=3.14*red*red;
       return area;
   }
};
int main()
{

   students obj;
    obj.setdata();
    obj.print();


    circle obj1;
    obj1.getdata1();
    int r=obj1.clc();
    cout<<"area of circle of "<<r;
}
