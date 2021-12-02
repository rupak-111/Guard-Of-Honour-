#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<iomanip>
#include<string>

static int bonus;
static int live;
static bool bonus_double = false;
struct input {
    int health;

};
int maze(void);
struct output {
    //union answer {string, int, double};
    double Time;
    int bonus_point;
    int health;
};
output proceed_game_stage(int gamenumber);
output q1(void);
output q2(void);
output q3(void);
output q4(void);
output q5(void);
output q6(void);
output q7(void);
output q8(void);
output q9(void);
output q10(void);

void bonus_system(void);

static int Checkinteger_positive(void)
{
    int numbers;

    while (true)
    {
        if (std::cin >> numbers)
        {
            if(numbers>0)
                return numbers;
            else
            {
                std::cout << "Type positive integers number please ";
            }
        }
        else if(std::cin.fail())
        {
            std::cout << "Please enter a positive integer: ";
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }
    }
}
