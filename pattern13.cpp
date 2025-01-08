 # include <iostream>
 using namespace std;
 int main()
 {
     int x=0;
     int y=11;
     for(int i=1; i<=6; i++)
     {
         for(int spc=1; spc<=x; spc++)
         {
             cout<<" ";
         }
         x=x+2;
         for(int str=1; str<=y; str++)
         {
             cout<<"* ";
         }
         y=y-2;
         cout<<endl;
     }
 }
