# include <iostream>
using namespace std;
int main()
{
    int no;
    cout<<(" 1). Play game \t \n");
    cout<<(" 2). load game \t \n");
    cout<<(" 3). Multi player \t \n");
    cout<<(" 4). exit \t \n");
    cout<<(" please enter your choice");
    cin>>no;
    switch(no)
    {
        case 1:
        cout<<(" Now you can play the game");
        break;


        case 2:
        cout<<(" please wait until load the game");
        break;

         case 3:
        cout<<(" you have choosed multiplayer option");
        break;

         case 4:
        cout<<(" are sure want to exit");
        break;


        default:
        cout<<(" you have choose wrong input ");
        break;


    }

}
