#include "head.h"
#include <fstream>

using namespace std;


int load_save_file(string s)
{
    //if is save
    if (s == "SAVE")
    {
        ofstream fout;
        fout.open("GameSave.txt");//openfile
        if (fout.fail()) {//if fail
            cout << "Error in file opening!" << endl;
            exit(1);
        }
        //some format
        fout << "Bonus " << Bonus << " ";
        fout << "Live " << live << " ";
        fout << "Stage " << stage_level << " ";
        if (stage_level >= 4)//only be active if the stage_level is greater than4
        {
            fout << "Stage4ans " << question4.x << " " << question4.y << " ";
            if (stage_level >= 6)//active on greater than 6
            {
                fout << "Stage6ans " << Q6 << " ";
                if (stage_level >= 7)//greater than 7
                    fout << "Stage7ans " << Q7 << " ";
            }
        }
        fout.close();//close the file
    }
    else if (s == "LOAD")
    {
        ifstream fin;
        fin.open("GameSave.txt");//open a file
        if (fin.fail()) {//if fail
            cout << "Error in file opening!" << endl;
            exit(1);
        }
        string command;//use command to absorb the string


            fin >> command;//should be Bonus
            fin >> Bonus;

            fin >> command;//sould be live
            fin >> live;

            fin >> command;//stage level
            fin >> stage_level;

            if (fin >> command)//question4
            {
                fin >> question4.x >> question4.y;
                if (fin >> command)//Q6
                {
                    fin >> Q6;
                    if (fin >> command)//Q7
                        fin >> Q7;
                }
            }
        fin.close();//close the file
    }
    return 0;
}
