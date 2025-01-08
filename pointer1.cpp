# include <iostream>
using namespace std;
 // ===========================pass by value =========================
    void change(int no)
    {
        no=20;
    }
     // ===========================pass by reference =========================
    void change(int* a)    // (change (int &b) &b means only for add of a
    {
        *a=20;
    }
int main()
{
    // ===========================pass by value =========================
    void change(int no)
  int no=10;
  change(no);
  cout<<no<<endl;
  // ===========================pass by reference =========================
   int a=30;
  change(&a);
  cout<<a<<endl;
  return 0;
}
