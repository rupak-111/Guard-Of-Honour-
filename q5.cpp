#include"head.h"
using namespace std;

void q5(void)
{
    int answer;
    char input;

    //guidelines for users
    cout << "Congratulations for helping Arthur to solve the puzzle. Arthur starts to walk deeper into the cave. He then sees fire burning at a distance. \n";
    cout << "He feels excited as he believes some human must have left the fire burning recently. But to his surprise, he encounters with a creature that has human torso but the head of a lizard.\n";
    cout << "The creature is famous for eating people, and the only way to beat him and make out aliveis by answering all of his questions.\n\n\n" << endl;
    cout << "\nThe first question of the wizard: \n\nYour parents have six sons including you and each son has one sister. How many people are in the family?\n";

    answer = Checkinteger_positive();
    
    //integer based question
    while (answer != 9)
    {
        cout << "Incorrect answer. Please try again before the wizard eats you up.\n";
        answer = Checkinteger_positive();
    }

    cout << "Correct. Get ready for second question:\nWhat occurs once in every minute, twice in every moment, and never in thousand years?\n";
    cin >> input;
    
    //character based question
    while (true)
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
    
    //string based question
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
}
