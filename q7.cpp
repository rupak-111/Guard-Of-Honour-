#include"head.h"
using namespace std;


output q7(void)
{
    output out;
    srand(time(0));
    int random, answer;
    random = (rand() % 3) + 1;
    cout << "In this level, you have to remain very focus while tackling the challenge!!\n\n";

    cout << "Here comes the question: \n\n";

    cout << "Simplify the following equation:\n";


    if (random == 1)
    {
        cout << "\nQ.  (-5 x 4 + 47) / 3 + 1\n\n    = ";
        while (true)
        {
            if (cin >> answer)
                break;
            cout << "Please enter an integer. \n";
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }


        while (answer != 10)
        {
            cout << "Incorrect. Try again.\n";
            cin >> answer;
        }
        cout << "Congratulations! You got the correct answer.\n\n";
    }

    if (random == 2)
    {
        cout << "\nQ.  (5 x 1+ 2 x 3 - 7 x 0 + 11) / 2\n\n   = ";
        cin >> answer;

        while (true)
        {
            if (cin >> answer)
                break;
            cout << "Please enter an integer. \n";
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }

        while (answer != 11)
        {
            cout << "Incorrect. Try again.\n";
            cin >> answer;
        }
        cout << "Congratulations! You got the correct answer.\n\n";
    }

    if (random == 3)
    {
        cout << "\nQ.   1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 0\n\n   = ";
        cin >> answer;

       while (true)
        {
            if (cin >> answer)
                break;
            cout << "Please enter an integer. \n";
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }

        while (answer != 45)
        {
            cout << "Incorrect. Try again.\n";
            cin >> answer;
        }
        cout << "Congratulations! You got the correct answer.\n\n";
    }
    return out;
}
