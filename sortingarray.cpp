#include <iostream>
using namespace std;
int main()
{
   int arr[5]={5,1,8,2,9};  //buble sort
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int comp=0;
//     int pass=0;
//     for(int i=0; i<size-1; i++)
//     {
//         for(int j=0; j<size-1; j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 comp++;
//             }
//         }
//         pass++;
//     }
//    for(int k=0; k<size; k++)
//    {
//        cout<<arr[k]<<"\t";
//    }
//    cout<<comp<<endl;
//    cout<<pass<<endl;

for(int i=0; i<5; i++)
{
    for(int j=i+1; j<5; j++)
    {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
 for(int k=0; k<5; k++)
   {
       cout<<arr[k]<<"\t";
   }
}
