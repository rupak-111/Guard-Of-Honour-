#include"head.h"
using namespace std;
//create a structure for use in readdata
struct datashow
{
	int bonus;
	int live;
	int stage;
};


void readdata(void)
{
	//using dynamic array to show the inforamtion
	datashow* data = new struct datashow;
	//input the data into the dynamic space of datashow structure
	data->bonus = Bonus;
	data->live = live;
	data->stage = stage_level;
	//output the informatino needed
	cout << "Your bonus point is " << data->bonus << "\nLive is " << data->live << "\nAnd you are now in stage " << data->stage;

	//delete the space create by new
	delete data;

}