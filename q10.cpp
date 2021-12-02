#include "head.h"
using namespace std;
	
void q10(void)
{
	output out = {};
	int choose;
	cout << "Congratulations! Arthur is very close to his destination. After crossing the lake, he walks upward on the steep hill also known as Devil's Landing.\n";
	cout << "There on the path, he discovers something shining underneath the ground. He tries his best to remove the rock from the ground, but the rock is just too heavy for him.\n";
	cout << "He realizes that in order to access the shining object, he needs a mining tool, and the only way to get it is by trading all of his bonus points with the dark cloud that is hovering on top of him.\n";
	cout << "He has two options, either to spend all of his bonus points to get the mining tool or return back emptyhanded to the king.\n";
	cout << "But he also does not know what is under the ground. It may be something really valuable, like a mining tool, or can possibly be a trap." << endl;
	cout << "Arthur is confused, anxious, as well as worried. He does not know what to do. After thinking for a moment, he remembers his vow with the king to get back his sword at any cost.\n";
	cout << "So, he trades his every bonus point with the cloud to get the weapon. As Arthur does not know what is underneath the ground, he needs your help to find the weapon:\n";
	cout << "Try your luck and press either: 'key 1'(for using all your bonus point to chase) or 'key 2'(give up)\n" << endl;
	
	while(true)
	{
		if(cin>>choose)
			if(choose==1||choose==2)
				break;
		cout<<"Press key 1 or key 2 only for your choose\n";
		std::cin.clear();
            std::cin.ignore(80, '\n');
	}
	if (choose == 1)
	{
		bonus=0;
		srand(time(0));
		int random = rand() % 5+ 1;
		switch (random)
		{
		case 1:	
			cout << "It is empty under the ground, or is just so deep that you can not mine it.";
			break;
		case 2:
			cout << "You find out a treasure, it contains 200 bonus point inside!";
			bonus+=200;
			break;
		case 3:
			cout << "When you are mining, earthquake suddenly happened, and you lost one life here.";
			live-=1;
			break;
		case 4:
			cout << "You find a magical fruit here, and after you eat that fruits, you gain one more life. ";
			live+=1;
			break;
		case 5:
			cout << "You find a box here, and inside this box, only have a piece of paper. \n That paper, only have one sentence on it. \n \"Before meeting the Monsters, you need to finish 9 different levels. And please remember one thing, the answer in each stage maybe useful for beating the Monster\"";
			break;
		}
	}
	else
	{
		cout << "It is not worth to spend time and all the bonus point on that unknown box, we have no such time to waste now.";
	}
}
