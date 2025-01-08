/*
******pointer is a variable that store the address of other variable****

compile time                         run time
int x;                               x=10;
Int x;  compile time error           x=xyz; run time error
error                                exception
static                               dynamic




                             variable
                value type               reference type
                int                      int *
                float
                double

we use pointer because with the help of pointer we can hidden our data but we indicate our data using pointer reference

* dereference operator  that means value of addresss or get the value of
*/


/////////////////////////////  POINTER  /////////////////////////////////
# include <iostream>
using namespace std;
int main()
{
    int n=10;
    int *ptr; //pointer variable
    ptr= &n;    // & are used to find the address
    cout<<ptr<<endl;  // address of n
    cout<<*ptr<<endl;  //value of n

    int n1=200;
    ptr=&n1;
    cout<<ptr<<endl;  // address of n1
    cout<<*ptr<<endl;  //value of n1
    *ptr=*ptr+10;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr);

    char ch=65;
    char *c=&ch;
    cout<<c<<endl;  // address of c
    cout<<*c<<endl;  //value of c

    char chh=65;
    char *d=&chh;
    cout<<d<<endl;  // address of d
    cout<<*d<<endl;  //value of d

    // char ch[5]={68,99,101,70,82};   // group of data compiler understand group of integer type of data                 Error


                                                  //       0 1 2 3 4 5
    char ch2[6]="Umesh";                          //    |U|m|e|s|h|\0|
    char *ptr1= &ch2[0];
    cout<<ptr<<endl;  // address of ptr
    cout<<*ptr1<<endl;  //value of ptr


    //    ===================Pointer to pointer ================================


    int number=10;
    int* ptr5= &number;
    int** ptr6=&ptr5;

    cout<<ptr5<<endl;  // address of ptr
    cout<<*ptr5<<endl;  //value of ptr
    cout<<ptr6<<endl;  // address of ptr
    cout<<*ptr6<<endl;  ////value of ptr
    cout<<**ptr6<<endl;
    /*
        &a  = address of a
        int* ptr= address of a(&a)
        *ptr = value of ptr address =*(&a)

    */


    /* ========================  Null Pointer   ===============================
            A pointer that doesn't point to any location are called the  Null Poi
         If we will not be give null in this case give gaurbage value

         we can't dereference of null pointer because null pointer doesn't point
         to any location
    */
    int* ptr7=NULL;



}

