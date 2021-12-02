#include"head.h"
using namespace std;

output q5(void)
{
    output out = {};
    int answer;
    char input;
    string s;
    cout << "In the middle of the jungle, you meet a wizard who is famous for eating people. \nThe only way to beat him and make out alive to answer his 3 questions" << endl;
    cout << "The first question of the wizard: \nYour parents have six sons including you and each son has one sister. How many people are in the family?\n";
    answer = Checkinteger_positive();

    while (answer != 9)
        {
            cout << "Incorrect answer. Please try again before the wizard eats you up.\n";
            answer = Checkinteger_positive();
        }

     cout << "Correct. Get ready for second question:\nWhat occurs once in every minute, twice in every moment, and never in thousand years?\n";
     cin >> input;

     while(true)
     { 
         char ans;
         cin >> ans;
         if (ans == 'M' || ans == 'm')
             break;
         cout << "Think again. You got it wrong. Please try again before the wizard eats you up.\n";
         std::cin.clear();
         std::cin.ignore(80, '\n');
       }

        cout << "Correct. Get ready for the last question: \nFive people were eating chocolates. alfa finished before beta, but behind gamma. delta finished before zita, but behind beta. Who finished 3rd?\n";
        while (true)
        {
            string ans;
            cin >> ans;
            for (int i = 0; i < ans.length(); i++)
                ans[i] = tolower(ans[i]);
            if (ans == "beta")
                break;
            cout << "Think again. You got it wrong. Please try again before the wizard eats you up.\n";
        }
             cout << "Correct. You have successfully beaten the wizard. Get ready for the next adventure.\n";
     return out;
  }

