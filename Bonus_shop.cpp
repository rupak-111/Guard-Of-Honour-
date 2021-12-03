#include"head.h"
using namespace std;

void bonus_system(void)
{
	int numbers;
	cout << "\n****************************************************************************************\n";
	cout << "Wellcome to the bonus shop!\nHere you can use your bonus point to buy something for use!\n";
	cout << "Here are the menu:" << endl;
	cout << "1. one more extra live-----------------------------------------------------------50 points" << endl;
	cout << "2. random extra live (0-2)-------------------------------------------------------50 points" << endl;
	cout << "3. one more times for a random game stage----------------------------------------30 points" << endl;
	cout << "4. the next level will be in double bonus point ---------------------------------30 points" << endl;
	cout << "5. quit" << endl;
	cout << "You now have bonus point : " << Bonus << " points, and your live:" << live << endl;
	//take input of user and 5 will break the function
	while (cin >> numbers && numbers != 5)
	{
		int ran;
		//use switch to have different choice of game
		switch (numbers)
		{
		case 1:
			if (Bonus >= 50)//check to see if it has enough point
			{
				Bonus -= 50;
				live += 1;
				cout << "You bonus point remainds: " << Bonus << " points, and your live : " << live << endl;
			}
			else//if no
				cout << "You do not have enough bonus point" << endl;
			break;
			//same logic for other options
		case 2:
			if (Bonus >= 50)
			{
				Bonus -= 50;
				ran = rand() % 3;
				cout << "In random live draw, you get " << ran << " lives.\n";
				live += ran;
				cout << "You bonus point remainds: " << Bonus << " points, and your live : " << live << endl;
			}
			else
				cout << "You do not have enough bonus point" << endl;
			break;
		case 3:
			if (Bonus >= 30)
			{
				Bonus -= 30;
				cout << "You will now particple in a extra new game! please enjoy it\nPlease also be remind that, the answer in this level will also be affect you afterwards\n";
				ran = rand() % 10 + 1;
				proceed_game_stage(ran);
				cout << "You bonus point remainds: " << Bonus << " points, and your live : " << live << endl;
			}
			else
				cout << "You do not have enough bonus point" << endl;
			break;

		case 4:
			if (Bonus >= 30)
			{
				Bonus -= 30;
				cout << "Your next level will be in double bouns point\n";
				bonus_double = true;
				cout << "You bonus point remainds: " << Bonus << " points, and your live : " << live << endl;
			}
			else
				cout << "You do not have enough bonus point" << endl;
			break;

		}
		//when out
	}cout << "Thank you for visiting our bonus shop!" << endl;
}
