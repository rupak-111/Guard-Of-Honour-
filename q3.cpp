#include"head.h"
using namespace std;

output q3(void)
{
	cout<< "Arthur is very grateful for your help in saving his life. Now as he marches ahead, there is a gigantic explosion of volcano and the path is filled with boiling lava, which is impossible to cross by walking."<<endl;
	cout<< "Arthur shouts out in desparation. Luckily, his voice is heard by a vulture. The vulture descends down to see Arthur in complete sadness.\n";
	cout<<" After hearing his story, the vulture offers Arthur to give him a ride on its back but on one condition:"<<endl;
	cout<< "Arthur has to complete every challenge imposed by the vulture. Help Arthur solve the problems imposed by the vulture to help him escape the lava.\n\n";
	
	int score = 0,times;
	char ans;
	output out = {};
	cout << "For each question,you will have 4 options to choose. " << endl;
	cout << "For example, here is an sample question\n" << endl;
	cout << "Q. Which of the following is correct?" << endl;
	cout << "A. Water chemcial formula is H20\nB. Carbon monoxide chemcial formula is CO2\nC. sulphur dioxide chemcial formula is SO\nD. common salt chemcial formula is MgCl\n";
	cout << "As water chemcial formula is H2O, so 1 is correct, you just need to type 'A' to answer this question" << endl;

	cout << "\nSo we start now!\n";
	


	cout << "\nQ. Which of the following is not a city in China?" << endl;
	cout << "A. Peking (Beijing)\nB. Shanghai\nC. Guangzhou\nD. Hanoi\n";
	cin >> ans;
	if(ans != 'D')
	{
		cout << "No, the answer is wrong, try again : ";
		cin >> ans;
	}
	if (ans != 'D')
		cout << "No, you still get it incorrect, the correct answer is ";
	if (ans == 'D')
	{
		cout << "You answer correctly, the answer is ";
		score ++;
	}
	cout << "D. Hanoi , Hanoi is a city in Vietnam.\n";



	cout << "\nQ. Which year did the World War 2 started?" << endl;
	cout << "A. 1914\nB. 1937\nC. 1939\nD. 1951\n";
	cin >> ans;
	if (ans != 'C')
	{
		cout << "No, the answer is wrong, try again : ";
		cin >> ans;
	}
	if (ans != 'C')
		cout << "No, you still get it incorrect, the correct answer is ";
	if (ans == 'C')
	{
		cout << "You answer correctly, the answer is ";
		score ++;
	}
	cout << "C. 1939. In 1939, Germany invaded Poland and started the WWII\n";



	cout << "\nQ. Which of the follwing computer language does not support object-oriented program?" << endl;
	cout << "A. C\nB. C++\nC. python\nD. Java\n";
	cin >> ans;
	if (ans != 'A')
	{
		cout << "No, the answer is wrong, try again : ";
		cin >> ans;
	}
	if (ans != 'A')
		cout << "No, you still get it incorrect, the correct answer is ";
	if (ans == 'A')
	{
		cout << "You answer correctly, the answer is ";
		score++;
	}
	cout << "A. C language. C language does not support the object-oriented program.\n";



	cout << "\nQ. Which of the follwing is not one of the four fandamental force?" << endl;
	cout << "A. Strong nuclear force\nB. Centrifugal force\nC. Gravitation\nD. Electromagnetic force\n";
	cin >> ans;
	if (ans != 'B')
	{
		cout << "No, the answer is wrong, try again : ";
		cin >> ans;
	}
	if (ans != 'B')
		cout << "No, you still get it incorrect, the correct answer is ";
	if (ans == 'B')
	{
		cout << "You answer correctly, the answer is ";
		score++;
	}
	cout << "B.Centrifugal force, the four fundamental force are: Strong nuclear force, Weak nuclear force, electromagnetic force and gravitation\n";

	out.String="DCAB";
	out.bonus_point=score*15;
	cout<<"You get "<<score*15<<" bonus point here and the key for this stage is \"DCAB\"";
	return out;
}
