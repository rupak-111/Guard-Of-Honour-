#include "head.h"
using namespace std;

void proceed_game_stage(int gamenumber)
{
	int time_bonus=0;
	time_t before = time(0);//use to record the time before game start
	if (bonus_double)//if user buy the bonus_double in bonus shop
	{
		cout << "You active the bonus double chance\n";
	}
	//use switch to go into different game stage
	switch (gamenumber)
	{
	case 1:		q1(); break;
	case 2:		 q2(); break;
	case 3:		 q3(); break;
	case 4:		q4(); break;
	case 5:		q5(); break;
	case 6:		 Q6=q6(); break;//have return value toQ6
	case 7:		Q7=q7(); break;//have return value to Q7
	case 8:		 q8(); break;
	case 9:		 q9(); break;
	case 10:		q10(); break;
	}

	time_t after = time(0);//time in after game
	double time_used = difftime(after, before);//use difftime function to know how many time in seconds use
	cout << "\ntime use in this stage is " << time_used << " seconds. " << endl;
	//set time_bonus into different value according time
	if (time_used < 30)
		time_bonus = 50;
	else if (time_used < 60)
		time_bonus = 30;
	else if (time_used < 90)
		time_bonus = 10;
	else//will lose one life if you spend to many time
	{
		cout << "Since you have waste a lot of time in this level, you lose a live";
			live -= 1;
	}
	if (bonus_double)//if have ,double the score
	{
		time_bonus *= 2;
		bonus_double = false;
	}
	cout << "In this level, you gain time reward bonus point " << time_bonus << endl;
	Bonus =Bonus+ time_bonus;//updated the Bonus

}
