#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<iomanip>
#include<string>

static int Bonus;
static int live=3;
static bool bonus_double = false;
   
int Q2_ans=100;
string Q3_ans="DCAB"

struct Q4{int x, int y};//have return value

int Q5_int=9;
char Q5_char='m';
string Q5_string="BETA";
    
int q6;//have return value

int q7;//have return value





void proceed_game_stage(int gamenumber);
void q1(void);
int q2(void);
string q3(void);
Q4 q4(void);
void q5(void);
int q6(void);
int q7(void);
void q8(void);
void q9(void);
void q10(void);

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

int check_integer(int ans)
{
    cout << "Please enter an integer. \n";
    int answer;
    while (true)
        {
            if (cin >> answer)
            {
                if(answer==ans)
                    break;
            cout << "Incorrect. Try again.\n";                 
            }
            cout << "Please enter an integer. \n";
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }
}
