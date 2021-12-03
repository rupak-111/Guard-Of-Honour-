#include"head.h"
using namespace std;

int q7(void)
{
    cout << "Arthur has already completed 60 percent of the journey. Yay!!! Now he leaves the village and starts to walk towards his destination.\n";
    cout << "Suddenly, the weather changes and a heavy rainfall is started. Despite poor visibility, Arthur continues to walk ahead, but then he suddenly stops. A monstrous five-headed bulldog with the size of an elephant is staring at him angrily as if it is ready to attack Arthur at any second.\n";
    cout << "But a weakness of this dog is that it is blind, so Arthur doesn't move and stays quiet. After remaining idle for almost an hour, he sees something on the dog's neck./n";
    cout << "He focuses his vision on it. It is a flag, and it flag says \" Answer this question if you want to make this dog asleep. \"\n";
    cout << "Help Arthur to make the dog fall asleep.\n\n" << endl;


    srand(time(0));
    int random, answer;
    
    //random question number generation
    random = (rand() % 3) + 1;
    cout << "You have to remain very focus while tackling the challenge!!\n\n";

    cout << "Here comes the question: \n\n";

    cout << "Simplify the following equation:\n";

    //first question
    if (random == 1)
    {
        cout << "\nQ.  (-5 x 4 + 47) / 3 + 1\n\n    = ";
        answer = check_integer(10);
        cout << "Congratulations! You got the correct answer.\n\n";
    }

    //second question
    if (random == 2)
    {
        cout << "\nQ.  (5 x 1+ 2 x 3 - 7 x 0 + 11) / 2\n\n   = ";
        answer = check_integer(11);
        cout << "Congratulations! You got the correct answer.\n\n";
    }

    //third question
    if (random == 3)
    {
        cout << "\nQ.   1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 0\n\n   = ";
        answer = check_integer(45);
        cout << "Congratulations! You got the correct answer.\n\n";
    }
    return answer;
}
//end of the file
