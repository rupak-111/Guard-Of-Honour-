#include "head.h"
#define TEXT "This is the message need to be decode"
using namespace std;
char CaesarShift(char c, int k);
output q8(void)
{
	srand(time(0));
	int shift = rand() % 10+1;
	output out = {};
	string ans, input,encreyted;
	encreyted = TEXT;
	ans = TEXT;
	for (int i = 0; i < ans.length(); i++)
		encreyted[i] = CaesarShift(encreyted[i], shift);
	cout << "You now have to decode a secret message, by given the number of right shifted, you need to decode the message." << endl;
	cout << "Such as right shifted 2 digits, 'A' will become 'C', 'y' will become 'a' , 'h' will become 'j' etc, only alhapet will be swifted"<< endl;
	cout << "For instance, \"Vjku ku cp gzcorng qh fgeqfkpi\" is shifted by right 2 digits, after shifting back, you will gain a message \"This is an example of decoding\"" << endl;
	cout << "\n\nThe following text is shifted to the right for " << shift << " digits, please decode the message.\n";
	cout << "the encreyted text is : " << encreyted << endl;
	while (getline(cin, input))
	{
		if (input == ans)
		{
			cout << "You success decode the message! The message after decode is :\n" << ans<<endl;
			return out;
		}
		else
			cout << "You got wrong, please try again\n";
	}

}

char CaesarShift(char c, int k)
{
	if (c>='a'&&c<='z')
	{
		int y = c + k - 'a';
		if (y >=26)
			y -= 26;
		return y + 'a';
	}
	else if(c>='A'&&c<='Z')
	{
		int y = c + k - 'A';
		if (y >=26)
			y -= 26;
		return y + 'A';
	}
	else
		return c;
}
