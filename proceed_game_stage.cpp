#include "head.h"
using namespace std;

void proceed_game_stage(int gamenumber)
{
	int time_bonus;
	output out = {};
	time_t before = time(0);
	if (bonus_double)
	{
		cout<<"You active the bonus double chance\n";
	}
	switch (gamenumber)
	{
		case 1:		out=q1();break; 
		case 2:		out=q2(); break; 
		case 3:		out=q3(); break;
		case 4:		out=q4(); break;
		case 5:		out=q5(); break;
		case 6:		out=q6(); break;
		case 7:		out=q7(); break;
		case 8:		out=q8(); break;
		case 9:		out=q9(); break;
		case 10:		out=q10(); break;
	}
	time_t after = time(0);
	double time_used=difftime(after, before);
	cout <<"\ntime use in this stage is "<<time_used << " seconds. " << endl;
	if(time_used<30)
		bonus=50;
	else if(time_used<60)
		bonus=30;
	else if(time_used<90)
		bonus=10;
	else
	{
		cout<<"Since you have wasted a lot of time in this level, you lose a live"
		live-=1;
	}
	if (bonus_double)
	{
		bonus*=2;
		bonus_double = false;
	}
	cout<<"In this level, you gain time reward bonus point "<<bonus<<endl;
	Bonus+=bonus;
}

