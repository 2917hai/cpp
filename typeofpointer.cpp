# include <iostream>
using namespace std;
int main()
{
    /*
    ===============================types of pointer=====================================
    1)-  Null pointer
        is a pointer that is initializes nulls and does not point any valid memory address
    */

    int* ptr;     // wild pointer pointer are decleare but no any value or address initialized        but it create a unuses memory
   // cout<<ptr<<endl;
   // cout<<*ptr<<endl;
    int a=10;
    ptr=&a;
    cout<<*ptr<<endl;

    ptr=nullptr;              // this is null pointer no any reference (Null reference)

    void* ptr1;   // this is void pointer
    int x=100;
    ptr1=&x;
    cout<<ptr1<<endl;

    char ch='A';
    ptr1=&ch;
    cout<<ptr1<<endl;
   // cout<<*ptr1<<endl;     // because we give void return   no return of the value


   int *arr=new int[5];      // dynamic arry
   cout<<arr<<endl;          // address of 0index
   delete arr;
   cout<<arr<<endl;         // this is called dangling pointer because arr have deleted

   register int m=10;
   cout<<m<<endl;



    /*
    2)-  array pointer
    3)- wild pointer          wild pointer pointer are decleare but no any value or address initialized        but it create a unuses memory
    4)- dangling pointer      are those pointer which have already deleted but we are using them this is called dangling pointer
    5)- double pointer          pointer to pointer is also called
    6)- void pointer         access any type of pointer weather he is int, char, string etc;
    */
}
