#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name[5]={"umesh","Kumar","rishi","vikash","raj"};

    int size=sizeof(name)/sizeof(name[0]);
    for(int i=0; i<size; i++)
    {
        cout<<name[i]<<"\t";
    }
    string name1;
    cout<<"enter name which want to search"<<endl;
    cin>>name1;


     for(int i=0; i<size; i++)
    {
        if(name[i]==name1)                    // # iclude <string.h> for char (strcmp(name[i],name1)==0)
        {
            cout<<"name are available"<<endl;
            string newname;
            cout<<"enter new name which want to replace"<<endl;
            cin>>newname;
            name[i]==newname;

        }
    }
     for(int j=0; j<size; j++)
    {
        cout<<name[j]<<"\t";
    }
}
