#include<iostream>
#include<unistd.h>
#include<ctime>
using namespace std;

int main()
{
    int answer;
    cout<< "";
    for (int i=0; i<5; i++)
    {
       
        cout << "\n\n\n                  3  4\n                2      5  ";
        cout<< "\n              1          1 \n            2             3";
        cout<< "\n           2 1 2 3 2 1 3 2 1 \n";
        system ("clear");
    }
    cout<< "Enter the key of the door :->  ";
    cin>> answer;
    if (answer != (int) answer || answer < 0)
    {
        cout<< "Please enter positive integer";
    }
    if ( answer== 38 )
        cout<<"\n\n Correct!\nRemember the passcode as you might need it later!!"<<endl;
    return 0;
}
