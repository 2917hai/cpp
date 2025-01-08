/*
                                   there are two types of function
                        1)- userdefine Function
                        2)- Builtin Function-:
                           !):- String(strcpy, strCat, strlen,strcmp,)        by including in headerfile : "#include <string.h>
                          !!):- math(sqrt, pow, ceil, floor, abs, max, min, )  by including in headerfile: "#include <math.h>


*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    char str[20];
    cout<<"enter a string "<<endl;
    cin>>str;
    int length=strlen(str);
    if(length<5)
    {
        cout<<"invaid string"<<endl;
    }
    else
    {
        cout<<"length of string is "<<length<<endl;
    }

    //   ========================================== Comparision of two strings ==============================================

    char str1[20];
    char str2[20];
    cout<<"enter two string"<<endl;
    cin>>str1>>str2;
    int comp=strcmp(str1,str2);     // if both are same =0, if greater any possitive value ,  else if less any negative value;
    if(comp==0)    // compare only SCI value not length
    {
        cout<<"both string are equal"<<endl;
    }
    else if (comp>0)
    {
        cout<<str1<<"is greater "<<endl;
    }
    else
    {
        cout<<str2<<"is greater"<<endl;
    }

    //  ================================================= strcat (concatanation of string ) ==============================================

                                 strcat(str1,str2);
                                 cout<<str1<<endl;


    // ====================================================== strcpy (string copy) ======================================================

                                                 char str3[3];
                                                 strcpy(str3,str2);
                                                 cout<<str3<<endl;

//  =================================================  Mathematic function ======================================================
     int n1,n2,n3;
     cout<<"enter three no"<<endl;
     cin>>n1>>n2>>n3;
     cout<<"sqrt of n1:   "<<sqrt(n1)<<endl;   // clc square root
      cout<<"power of n1 power of n2:   "<<pow(n1,n2)<<endl; // clc n1 power of n2
       cout<<"ceil value (max near value) of n2:   "<<ceil(n2)<<endl;  // max near value
        cout<<"floor value(min near value) of n2:   "<<floor(n2)<<endl; // min near value
         cout<<"absolute value of n3:   "<<abs(n3)<<endl;  // absolute value such as -40=40
          cout<<"max no of n1 and n2:   "<<max(n1,n2)<<endl; // clc max no
           cout<<"min no of n1 and n2:    "<<min(n1,n2)<<endl; // clc min no
}
