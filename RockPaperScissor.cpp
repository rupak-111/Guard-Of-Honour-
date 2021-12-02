#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    cout << "For \"Rock\" press - \" 1\""<< endl << "For \"Paper\" press - \" 2 \"" << endl << "For \"Scissors\" press - \"3\"" << endl << "Choose your option: ";
    int choiceOfYou;
    cin >> choiceOfYou;
    cout << endl;

    int choiceOfComputer = (rand() % 3) + 1;

    if (choiceOfYou == 1)
        cout << "You chose Rock." << endl;
    else if (choiceOfYou == 2)
        cout << "You chose Paper." << endl;
    else if (choiceOfYou == 3)
        cout << "You chose Scissors." << endl;

    else
    {
        cout << "Input is incorrect." << endl;
        exit (0);
    }

    if (choiceOfComputer == 1)
        cout << "Computer chose Rock." << endl;
    else if (choiceOfComputer == 2)
        cout << "Computer chose Paper." << endl;
    else if (choiceOfComputer == 3)
        cout << "Computer chose Scissors." << endl;
    cout << endl;

    if (choiceOfYou == choiceOfComputer)
        cout << "StaleMate!" << endl;
    if (choiceOfYou == 1)
    {
        if (choiceOfComputer == 2)
            cout << "You Lost!" << endl;
        else if (choiceOfComputer == 3)
            cout << "You Won!" << endl;
    }

    else if (choiceOfYou == 2)
    {
        if (choiceOfComputer == 1)
            cout << "You Won!" << endl;
        else if (choiceOfComputer == 3)
            cout << "You Lost!" << endl;
    }
    else if (choiceOfYou == 3)
    {
        if (choiceOfComputer == 1)
            cout << "You Lost!" << endl;
        else if (choiceOfComputer == 2)
            cout << "You Won!" << endl;
    }
    return 0;
}






