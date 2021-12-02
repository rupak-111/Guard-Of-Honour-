#include<iostream>
using namespace std;
#include <unistd.h>
#include <ctime>

int main()
{
    srand(time(0));
    int random, answer;
    random = (rand() % 3) + 1;
    cout << "In this level, you have to remain very focus while tackling the challenge!!\n\n";
    sleep(3);
    cout << "Here comes the question: \n\n";
    sleep(2);
    cout << "Simplify the following equation:\n";
    sleep(2);

    if (random == 1)
    {
        cout << "\nQ.  (-5 x 4 + 47) / 3 + 1\n\n    = ";
        //display this for 4 seconds and go blank
        cin >> answer;

        while (answer != (int)answer)
        {
            cout << "Please enter an integer. \n\n";
            cin >> answer;
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
        //display this for 4 seconds and go blank
        cin >> answer;

        while (answer != (int)answer)
        {
            cout << "Please enter an integer. \n\n";
            cin >> answer;
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
        //display this for 4 seconds and go blank
        cin >> answer;

        while (answer != (int)answer)
        {
            cout << "Please enter an integer. \n\n";
            cin >> answer;
        }

        while (answer != 45)
        {
            cout << "Incorrect. Try again.\n";
            cin >> answer;
        }
        cout << "Congratulations! You got the correct answer.\n\n";
    }
    return 0;
}