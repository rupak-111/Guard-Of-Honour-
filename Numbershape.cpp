#include<iostream>

using namespace std;

int main()
{
    cout<< "In this level you have to find the key of the door by adding all the numbers present in the figure:\n\n";
    int answer;
       
        cout << "\n                  3  4\n                2      5  ";
        cout<< "\n              1          1 \n            2             3";
        cout<< "\n           2 1 2 3 2 1 3 2 1 \n";
        cout<< "                  3 2\n";
        cout<< "                  3 2\n";
        cout<< "                  3 2\n";
        cout<< "                  3 2\n";
        cout<< "                  3 2 1 1 1\n";
        cout<< "                  3   1 1\n";
        cout<< "                  3 2 1\n";
        cout<< "                  3   1 1\n";
        cout<< "                  3 2 1\n";
        cout<< "                  3 2\n";
        cout<< "                  3 2\n";
        cout<< "                   4\n";
        
    
    cout<< "\n\n\nEnter the key of the door :->  ";
    cin>> answer;
    for (int i = 0; answer!= 38  || answer < 0; i++)
    {
        cout<< "Please enter positive integer";
        cin>> answer;
    }
    if ( answer== 100 )
        cout<<"\n\n Correct!\nRemember the passcode as you might need it later!!"<<endl;
    return 0;
}
