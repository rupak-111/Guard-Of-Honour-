#include "head.h"
using namespace std;

output q10(void)
{
	output out = {};
	int choose;
	cout << "Now, you discovered something is under ground. But if you want to get it, you need to buy somethings to mine it out." << endl;
	cout << "You now have two options to do,\n1. spend all your bonus point to get that thing\n2. Give up and leave it alone\n";
	cout << "What is under ground is unknown, it may brings the luck to you, or a nightmare " << endl;
	cout << "So, what is your options? (type '1' or '2' )";
	cin >> choose;
	if (choose == 1)
	{
		srand(time(0));
		int random = rand() % 5+ 1;
		switch (random)
		{
		case 1:	
			cout << "It is empty under the ground, or is just so deep that you can not mine it.";
			break;
		case 2:
			cout << "You find out a treasure, it contains 20 bonus point inside!";
			break;
		case 3:
			cout << "When you are mining, earthquake suddenly happened, and you lost one life here.";
			break;
		case 4:
			cout << "You find a magical fruit here, and after you eat that fruits, you gain one more life. ";
			break;
		case 5:
			cout << "You find a box here, and inside this box, only have a piece of paper. \n That paper, only have one sentence on it. \n \"Before meeting the Monsters, you need to finish 9 different levels. And please remember one thing, the answer in each stage maybe useful for beating the Monster\"";
			break;
		}
		return out;
	}
	else
	{
		cout << "It is not worth to spend time on that unknown box, we have no such time to waste now.";
		return out;
	}
}