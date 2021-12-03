#include"head.h"

using namespace std;

int main()
{
	cout << "Welcome to this game. It is an adventurous game. The story plot- the king's valuable as well as the magical sword is stolen by a demon, and nobody is successful to get back the sword to the king\n.";
	cout << "Now king trusts Arthur to get it back. Arthur is getting prepared to set out on the journey to get back the king's sword, but he does not have any idea, or what he will encounter about the journey because those who tried, nobody came back alive.\n";
	cout <<  "Arthur is alone, and starts this perilious adventure at midnight.\n";
	cout << "After crossing a snowy desert, he gets to see the Demon's island.  Arthur is about to encounter ten different obstacles and the sooner he is scuccessful overcoming them, the more bonus points he gets.\n";
	cout << "After overcoming all the obstacles, he gets to meet the monstor who stole the king's sword. Arthur has to fight intensely to kill the monster.\n\n\n";
	cout << "Lets start the adventure: \n" <<endl;
	
	//to let user to load or new game
	cout << "\nPress key 1 to have a new game or press 2 to load in a file to start from the previous stage\n";
	int choose;
	while (true)
	{
		if (cin >> choose)
			if (choose == 1 || choose == 2)
				break;
		cout << "Press key 1 or key 2 only for your choose\n";
		std::cin.clear();
		std::cin.ignore(80, '\n');
	}
	
	if (choose == 2)
	{
		cout << "The file save will be GameSave.txt, please put it under the same directory to open it\n ";
		load_save_file("LOAD");
	}
	else
	{
		//some introduction to the game at beginning
		cout << "Introudction\n";//cross out this when you edit

		//setting
		Bonus = 10;
		live = 3;
	}

	char YN;
	//for each game stages
	while (stage_level <=10)
	{
		//to let user see the information of theirs
		cout << "Press 's' or 'S' to see your status now, or press another key for continue\n";
		if (cin >> YN && YN == 's' || YN == 'S')
			readdata();//use dynamic space to do this
		//use proceed_game_stage level to finish a stage of game
		proceed_game_stage(stage_level);
		stage_level++;
		//if live is 0, will end the game
		if (live < 1)
		{
			cout << "You have no life to continue\n, you died, try a new game";
			return(1);
		}
		//have option for user to bonus shop, save game
		cout << "Press 'Y' or 'y' to enter bonus shop\n";
		cout << "Press 'S' or 's' to save the game\n";
		cout << "Press another key to continue the game\n";
		if (cin >> YN && (YN == 'Y' || YN == 'y'))
			bonus_system();
		else if (YN == 'S' || YN == 's')
			load_save_file("SAVE");
		std::cin.clear();
		std::cin.ignore(80, '\n');
		cout << endl;
	}
	//after finish the game stages, will go to the BOSS stage
	BOSS();
	//to output the score of the player get in this game
	int final_score = live * 100 + Bonus;
	cout << "You get " << final_score << " score in this time, well done";
	return 0;
}




