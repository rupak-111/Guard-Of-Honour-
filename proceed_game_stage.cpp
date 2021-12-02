#include "head.h"
using namespace std;

output proceed_game_stage(int gamenumber)
{
	output out = {};
	time_t before = time(0);

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
	if (bonus_double)
	{
		//do sth
		bonus_double = false;
	}
	return out;
}

