#include "head.h"
using namespace std;

void q1(void)
{
    cout << "Arthur is set out on this treachorous journey to get back the sword of the king. As soon as he crosses the turbulent river, he is stopped by a human-sized cockroach.";
    cout << "\nArthur can only kill the cockroach by beating it on RockScissorsPaper Game.";
    cout << "\nHelp Arthur to win this level. Remember, the faster you beat the cockroach, the more health bonus Arthur gets:";

    
    int trial = 3;
    int bonus = 0;
    cout << "You can get 10 bonus if win, 5 bounu point if lose and 0 point for lose";
    
    //code
    while (trial--)
    {
        srand(time(NULL));
        cout << "It is the " << 3 - trial << " time for try";
        cout << "For \"Rock\" press - \" 1\"" << endl << "For \"Paper\" press - \" 2 \"" << endl << "For \"Scissors\" press - \"3\"" << endl << "Choose your option: ";

        int choiceOfYou;
        cout << endl;

        int choiceOfComputer = (rand() % 3) + 1;

        //using loop for conditions
        while (true)
        {
            if (cin >> choiceOfYou && choiceOfYou < 4 && choiceOfYou>0)
                break;
            cout << "Input is incorrect. Please try again" << endl;
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }
        if (choiceOfYou == 1)
            cout << "You chose Rock." << endl;
        else if (choiceOfYou == 2)
            cout << "You chose Paper." << endl;
        else if (choiceOfYou == 3)
            cout << "You chose Scissors." << endl;


        if (choiceOfComputer == 1)
            cout << "Computer chose Rock." << endl;
        else if (choiceOfComputer == 2)
            cout << "Computer chose Paper." << endl;
        else if (choiceOfComputer == 3)
            cout << "Computer chose Scissors." << endl;
        cout << endl;

        //For bonus point
        if (choiceOfYou == choiceOfComputer)
        {
            cout << "StaleMate!\n\n";
            bonus += 5;
        }
        if (choiceOfYou == 1)
        {
            
            //when user chooses rock and computer chooses paper
            if (choiceOfComputer == 2)
                cout << "You Lost!\n" << endl;
            
            //when user chooses rock and computer chooses scissors
            else if (choiceOfComputer == 3)
            {
                cout << "You Won!\n" << endl;
                bonus += 10;
            }
        }

        else if (choiceOfYou == 2)
        {
            if (choiceOfComputer == 1)
            {
                cout << "You Won!\n" << endl;
                bonus += 10;
            }
            //when user chooses paper and computer chooses rock
            else if (choiceOfComputer == 3)
                cout << "You Lost!\n" << endl;
        }
        //when user chooses scissors and computer chooses rock
        else if (choiceOfYou == 3)
        {
            if (choiceOfComputer == 1)
                cout << "You Lost!\n" << endl;
            
            //when user chooses scissors and computer chooses paper
            else if (choiceOfComputer == 2)
            {
                cout << "You Won!\n" << endl;
                bonus += 10;
            }
        }
    }
    Bonus += bonus;
    cout << "You gain " << bonus << " point in this stage\n";
    cout << "You now have " << Bonus << "point";
}
