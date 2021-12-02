#include"head.h"
using namespace std;
void bonus_system(void)
{
	int numbers;
	cout << "****************************************************************************************\n";
	cout << "Wellcome to the bonus shop!\nHere you can use your bonus point to buy something for use!\n";
	cout << "Here are the menu:" << endl;
	cout << "1. one more extra live-----------------------------------------------------------50 points" << endl;
	cout << "2. random extra live (0-2)-------------------------------------------------------50 points" << endl;
	cout << "3. one more times for a random game stage----------------------------------------30 points" << endl;
	cout << "4. the next level will be in double bonus point ---------------------------------30 points" << endl;
	cout << "5. quit" << endl;
	cout << "You now have bonus point : " << bonus << " points, and your live:" << live << endl;
	while (cin >> numbers && numbers != 5)
	{
		int ran;
		switch (numbers)
		{
		case 1:
			bonus -= 50;
			live+= 1;
			cout << "You bonus point remainds: " << bonus << " points, and your live : " << live << endl;
			break;
		case 2:
			bonus -= 50;
			ran = rand() % 3;
			cout << "In random live draw, you get " << ran << " lives.\n";
			live += ran;
			cout << "You bonus point remainds: " << bonus << " points, and your live : " << live << endl;
			break;
		case 3:
			cout << "You will now particple in a extra new game! please enjoy it\n";
			ran = rand() % 10+1;
			proceed_game_stage(ran);
			cout << "You bonus point remainds: " << bonus << " points, and your live : " << live << endl;
			break;
		case 4:
			cout << "Your next level will be in double bouns point\n";
			bonus_double = true;
			cout << "You bonus point remainds: " << bonus << " points, and your live : " << live << endl;
		}
	}
}