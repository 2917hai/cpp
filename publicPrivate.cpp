# include <iostream>
using namespace std;
class Employee
{
    int email;
    double salary;
public:
    char name[20];

    void setdata()
    {
        cout<<"enter your email id "<<endl;
        cin>>email;
        cout<<"enter your salary"<<endl;
        cin>>salary;
        cout<<"enter your name"<<endl;
        cin>>name;
    }
    double clc()
    {
        double clcl=(salary*10)/100;
        return clcl;
    }
};
int main()
{
    Employee obj;
    obj.setdata();
    double r=obj.clc();
    cout<<obj.name<<" "<<r<<endl;
}
