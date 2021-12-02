#include "head.h"
using namespace std;

char list[82] = { "UVW7ZSMTX72XVU9Z51891W26V7U9S32VYW6868Y1MW342254ZXUSMYVYM31T68WSXZ95ZYU4W3Z67VT1M" };

void AnswerChecking(void);
void Show(void);
bool S1 = false;
bool T2 = false;
bool U3 = false;
bool V4= false;
bool W5= false;
bool X6 = false;
bool Y7 = false;
bool Z8 = false;
bool M9 = false;

output q9(void)
{
	cout << "Congratulations for making the dog asleep and erasing its recent memory about Arthur. After three days of starting this journey, Arthur is very close to the king's sword.\n";
	cout << "As Arthur moves forward, he sees a giant lake. The abnormal thing about the lake is it does not contain water; it is just filled with boiling blood! Arthur cannot swim accross this boiling lake.\n";
	cout << "So he looks around to find something helpful to him. To his surprise, he finds an old boat. He immediately jumps onto it, but as he tries to start the engine, he realises that the engine only starts after solving a sudoku question.\n";
	cout << "Help Arthur solve the sudoku so he can start the engine and cross the deadly lake.\n" << endl;
	
	output out = {};
	cout << "You are now going to solve a sudoku\nThe sudoku is as follows:\n";
	Show();
	cout << "To solve the question, type the character and the number together to solve\nlet me give you an example, the W on the sudoku is actually 5, type 'W5' to see what will happened?\n";
	while (!(S1 && T2 && U3 && V4 && W5 && X6 && Y7 && Z8 && M9))
	{
		AnswerChecking();
		Show();
	}
	return out;
}


void Show(void)
{
	for (int i = 0; i < 81; i++)
	{

		if (i % 9 == 0)
			cout << "\n";
		cout << setw(3) << list[i];
		if ((i + 1) % 3 == 0)
			cout << "|";
		if ((i + 1) % 27 == 0)
			cout << "\n------------------------------\n";
	}
}

void AnswerChecking(void)
{
	char var,remove;
	int numbers;
	cin >> var>>numbers;
	switch (var)
	{
	case 's':
	case 'S': 
		if (numbers == 1)
		{
			cout << "Yes, S is 1!";
			for (int i = 0; i < 81; i++)
				if (list[i] == 'S')
					list[i] = '1';
			S1 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	case 'T':
	case 't':
		if (numbers == 2)
		{
			cout << "Yes, T is 2!";
			for (int i = 0; i < 81; i++)
				if (list[i] == 'T')
					list[i] = '2';
			T2 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	case 'U':
	case 'u':
		if (numbers == 3)
		{
			cout << "Yes, U is 3!";
			for (int i = 0; i < 81; i++)
				if (list[i] == 'U')
					list[i] = '3';
			U3 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	case 'V':
	case 'v':
		if (numbers == 4)
		{
			cout << "Yes, V is 4!";
			for (int i = 0; i < 81; i++)\
				if (list[i] == 'V')
					list[i] = '4';
			V4 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	case 'W':
	case 'w':
		if (numbers == 5)
		{
			cout << "After you type in 'W5', the sudoku will appear W as 5! \n Try to solve all the numbers! and the new sudoku will be:";
			for (int i = 0; i < 81; i++)
				if (list[i] == 'W')
					list[i] = '5';
			W5 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	case 'X':
	case 'x':
		if (numbers == 6)
		{
			cout << "Yes, X is 6!";
			for (int i = 0; i < 81; i++)
				if (list[i] == 'X')
					list[i] = '6';
			X6 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	case 'Y':
	case 'y':
		if (numbers == 7)
		{
			cout << "Yes, Y is 7!";
			for (int i = 0; i < 81; i++)
				if (list[i] == 'Y')
					list[i] = '7';
			Y7 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	case 'Z':
	case 'z':
		if (numbers == 8)
		{
			cout << "Yes, Z is 8!";
			for (int i = 0; i < 81; i++)
				if (list[i] == 'Z')
					list[i] = '8';
			Z8 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	case 'M':
	case 'm':
		if (numbers == 9)
		{
			cout << "Yes, M is 9!";
			for (int i = 0; i < 81; i++)
				if (list[i] == 'M')
					list[i] = '9';
			M9 = true;
		}
		else
			cout << "Sorry, you get wrong, try again\n";
		break;
	default:
			cout << "The character "<<var<< " doesn't exist, try a correct one\n";
		break;
	}
}


