#include"head.h"
using namespace std;
void BOSS(void)
{
	cout << "Arthur has successfully overcame all the obstacles to get to the monster's den. Upon reaching the door of the den, he realises that he has to complete three specific actions to kill the demon.\n";
	cout << "Will Arthur be able to kill the monster and get back that the sword of the king? Help Arthur to kill the monster:\n\n" << endl;
	
	//code of stage1
	check_integer(100);//to check whether the answer input is 100 or not 
	cout << "Arthur is successful in opening the door.\n\n";//try to change it to more smooth

	cout << "As soon as Arthur enters the door, he sees an enormous giant with its size as big as the Empire State Building. Arthur is terrified, but he knows that he has to get the sword at any cost.\n";
	cout << "He is ready to sacrifice his life for the king, but he also does not wanna die. So, Arthur needs your help again. Please help Arthur to complete the next stage:\n";
	cout << "Spelling out the name of the monster will reduce his power by 30 percent. So, in this stage, you have to coordinate with Arthur to find the name of the monster.\n";
	cout << "But what is the name of the monster? Try to remember the overall journey of Arthur: \n\n" << endl;
		
	// code
	string ans;
	//use while loop to repeat take in the input
	while (getline(cin, ans))
	{
		//to make the string in upper character
		for (int i = 0; i < ans.length(); i++)
		{
			if (ans[i] <= 'z' || ans[i] >= 'a')
				ans[i] = toupper(ans[i]);
		}
		//if equal, then go out of loop 
		if (ans == Q5_string)
			break;
		cout << "Sorry, please try again, you have heard his name in earlier stages.\n";
	}
	cout<<"The name of the monster is \"BETA\""<<endl;
	
	//stage3
	cout << "The power of the monsture has been reduced to 40 percent. Now this is a matter of life and death, and he knows if he can attack the monster one more time than the monster will die and he can take back the sword.\n";
	cout << "Help Arthur for one last time to attack the monster. Here, you have to remember every answer from the previous ten obstacles and answer it accordingly. \n" << endl;
	
	// code
	cout << "Please input the x-coordinate of the monster :";
	int x = Checkinteger_positive();
	cout << "Please input the y-coordinate of the monster :";
	int y = Checkinteger_positive();
	while (true)
	{
		if (x == question4.x && y == question4.y)
			break;
		else
			cout << "It was wrong, do you remember the coordinate of the letter 'B' in Objstacle 4?\n" << endl;
	}
	cout<< "Congratulations! Arthur is successful in killing the monster. This journey would not have been successful without your help.\n";
	cout << "Arthur knows this and he is grateful from the bottom of his heart for your help. Arthur has found the sword and now he is ready to return it to his king.\n" << endl;
	cout << endl;
	cout << "         THE END  \n\n\n";
	cout << "Thank you for playing this game. We hope you had a great time playing it! :) //ending
}
