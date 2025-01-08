# include <iostream>
using namespace std;
int main()
{

    int no1,no2;
    char choice='y';
    while(choice=='y')
    {

        cout<<"enter 2 number";
        cin>>no1>>no2;
        cout<<"add:"<<no1+no2;
        cout<<" enter y if you want to continue otherwise enter any char";
        cin>>choice;
    }

    int no3;
    cout<<"enter a number";
    cin>>no3;
    int read;
     int evensum=0;
    int oddsum=0;
    while(no3>0)
    {
    read=no3%10;

    if(read%2==0)
    {
        evensum=evensum+read;

    }
    else
    {
        oddsum=oddsum+read;
    }

    no3=no3/10;
    }

     cout<<"oddsum is= "<<oddsum<<endl;
    cout<<"evensum is= "<<evensum<<endl;

}
