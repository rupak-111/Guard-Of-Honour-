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
        cout<< "                   3\n";
        
    
    cout<< "\n\n\nEnter the key of the door :->  ";
    while(true)
    {
        if(cin>> answer)
        {
            if(answer==100)
                break;
            else if(answer>0)
                cout<<"Sorry, you get wrong, try again\n";
            else 
                cout<<"Please input a positive integer:\n";
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(80, '\n');
            cout<<"Please input a positive integer:\n";
        }
    }
        cout<<"\n\n Correct!\nRemember the passcode as you might need it later!!"<<endl;
    return 0;
}
