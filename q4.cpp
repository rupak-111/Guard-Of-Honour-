#include "head.h"
using namespace std;
cout<< "Arthur successfully crosses the volcano. He thanks the vulture and departs on his journey. The path leads to a deserted valley.\n";
cout<< "Arthur completes the deserted valley walking continuously for 9 hours. The path quickly descended down to a swampy forest leading to a cave.\n";
cout<< "As soon as he enters the cave, the door of the cave shuts down! The darkness slowly lightens up, and Arthur sees something on the wall, a puzzle.\n";
cout<< "He cannot return back as the door is closed. The only way to survive is to move forward, and in order to do it, he has to solve the puzzle as suggested.\n";
cout<< "Help Arthur solve the puzzle.\n\n\n"


struct output q4(void)
{
    int x, y;
    output out = {0};
    srand(time(0));
   int  LENGTH = rand() % 30 + 21;
    x = rand() % LENGTH + 1;
    y = rand() % LENGTH + 1;
    cout << "   ";
    for (int i = 1; i <= LENGTH; i++)
        cout <<setw(3) << i ;
    cout << endl;
    for (int i = 1; i <= LENGTH; i++)
        for (int j = 1; j <= LENGTH; j++)
        {
            if (j == 1)
                cout << setw(3) << i;
            cout << setw(3) << ((i == x && j == y) ? 'B' : 'b') << (j == LENGTH ? '\n' : '\0');
        }
    int xans, yans;
    do {
        cout << "What is the coordinates of 'B' ?  type in x_coordinate and y_coordinate: ";
        cin >>xans >> yans;
    } while (xans != x || yans != y);
    cout << "You answer correctly, the answer of coordinates are " << x <<" and " << y<<endl;
    return out;
}

