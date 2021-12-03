#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<iomanip>
#include<string>
//declare a structure of Q4
struct Q4 {
    int x;
    int y;
};
//variable use in global, where declare at head.cpp
extern int Bonus ;
extern  int live ;
extern bool bonus_double ;
extern int stage_level ;
extern Q4 question4;
extern bool complete4;
extern bool complete6;
extern  bool complete7;
extern int Q6;//have return value
extern int Q7;//have return value

//use static to means it will remin unchange in all the file,as it will declare a new one for each file
static int Q2_ans = 100;
static std::string Q3_ans = "DCAB";

static const int Q5_int = 9;
static const char Q5_char = 'm';
static std::string Q5_string = "BETA";

//funciton head
void proceed_game_stage(int gamenumber);
void q1(void);
int q2(void);
std::string q3(void);
void q4(void);
void q5(void);
int q6(void);
int q7(void);
void q8(void);
void q9(void);
void q10(void);
int load_save_file(std::string s);
void readdata(void);
void bonus_system(void);
void BOSS(void);

//funcitons for use to check some answer is valid or not
static int Checkinteger_positive(void)
{
    int numbers;

    while (true)
    {
        if (std::cin >> numbers)
        {
            if (numbers > 0)
                return numbers;
            else
            {
                std::cout << "Type positive integers number please ";
            }
        }
        else if (std::cin.fail())
        {
            std::cout << "Please enter a positive integer: ";
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }
    }
    return numbers;
}

static int check_integer(int ans)
{
    std::cout << "Please enter an integer. \n";
    int answer;
    while (true)
    {
        if (std::cin >> answer)
        {
            if (answer == ans)
                break;
            std::cout << "Incorrect. Try again.\n";
        }
        std::cout << "Please enter an integer. \n";
        std::cin.clear();
        std::cin.ignore(80, '\n');
    }
    return answer;
}




