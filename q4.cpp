#include "head.h"
using namespace std;


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

