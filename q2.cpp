#include "head.h"

using namespace std;

int q2(void)
{
    cout<< "Congratulation on completing first level. Arthur, with additional health bonus on his backpack, sets out on the path that leads him into the dense jungle. "<< endl;
    cout<< "The jungle is so thick that not even the light passes through it. After walking continuously for eight hours, he finally gets to see the rising sun.\n";
    cout<< "But suddenly his leg is trapped by a monstrous vein and he is swung upside down 60 meters above the ground." << endl;
    cout<< "The only way to get Arthur safe on the ground is to answer the question written on the stem of the vein which is also supposed to be the passcode of the monste'rs den."<<endl;
    cout<< "Help Arthur to unlock himself from the vein: \n\n";
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
    return 100;
}
