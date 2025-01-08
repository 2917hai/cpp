#include <iostream>
using namespace std;
// function calling by using call by reference using pointer (reference)
void swape(int *,int *);
int addSum(int[]);
int main()
{
    int n1=10;
    int n2=20;
    cout<<n1<<"\t"<<n2<<endl;
    swape(&n1,&n2);
    int arr[5]={5,6,8,3,7};
    int allSum=addSum(arr);
    cout<<allSum<<endl;
}
void swape(int* a, int* b)  // arguments as a pointer address
{
    int temp=*a;
    *a=*b;
    *b=temp;

    cout<<*a<<"\t"<<*b<<endl;
     cout<<a<<"\t"<<b<<endl;

}

int addSum(int arr[5])   // function array
{
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum=sum+arr[i];

    }
    return sum;
}

