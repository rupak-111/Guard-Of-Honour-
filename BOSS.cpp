#include"head.h"
using namespace std;
int BOSS(void)
{
	cout << "Arthur has successfully overcome all the obstacles to get to the monster. Now only thing that is left is to kill the monster and get back the sword.\n";
	cout << "Will he able to do it? Help Arthur on this final quest:\n\n";
	//introduction
	
	//code of stage1
	check_integer(100);//to check whether the answer input is 100 or not 
	//stage2
	// introduction
	
	// code
	string ans;
	//use while loop to repeat take in the input
	while (getline(cin, ans))
	{
		//to make the string in upper character
		for (int i = 0; i < ans.length(); i++)
		{
			if (ans[i] <= 'z' || ans[i] >= 'a')
				ans[i] = toupper(ans[i);
		}
		//if equal, then go out of loop 
		if (ans == Q5_string)
			break;
		cout << "Sorry, please try again, we heard his name in previous stage\n";
	}
	cout<<"The boss name is \"BETA\""<<endl;//may be you can change this if you liked
	//stage3
	// introduction
	// code
	cout << "input the x-coordinates :";
	int x = Checkinteger_positive();
	cout << "input the y-coordinates :";
	int y = Checkinteger_positive();
	while (true)
	{
		if (x == question4.x && y == question4.y)
			break;
		else
			cout << "It was wrong, do you remember where is the 'B' coordinates?\n";
	}
	//stage4
	return 0;
}
