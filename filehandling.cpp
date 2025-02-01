#include <iostream>
#include <fstream> //ifstream(intput data read) and ofstream(output data write) and fstream(both input and output data read)
using namespace std;
class Employee
{
    int id;
    char name[40];
    char address[50];
    double salary;
    public:
    void setDetails()
    {
        cout<<"enter your name"<<endl;
        cin>>name;
         cout<<"enter your address"<<endl;
        cin>>address;
         cout<<"enter your salary"<<endl;
        cin>>salary;
        
    }
    void writeData()
    {
        ofstream out("E:\\Employee.txt",ios::app);
        out<<id<<"\t"<<name<<"\t"<<address<<"\t"  <<salary<<"\t"<<endl;
        cout<<"data added"<<endl;
        out.close();
        cout<<"data written in file"<<endl;
    }
    void readData()
    {
        ifstream in("E:\\Employee.txt",ios::in);
        string str;
       // in>>str;
       while ( getline(in,str))
       {
         cout<<str<<endl;
       }
       
      

       
    }
};
int main()
{
    int data;
    ofstream out("E:\\test.txt", ios::app);//ios::app, ios::in, and ios::out
    cout<<"enter data"<<endl;
    cin>>data;
    cout<<"data is written in file"<<endl;
    out.close();

    Employee obj;
      obj.setDetails();
      obj.writeData();
    obj.readData();
}
