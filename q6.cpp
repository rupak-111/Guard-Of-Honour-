#include "head.h"
using namespace std;

output q6()
{    
    cout<< "Many congrats to you! Arthur was able to answer all the questions and kill the creature. He, then successfully comes out of the cave but due to his lack of energy, he faints out.\n";
    cout<< "Arthur was luckily found by a group of boar hunters. They carefully lift him up and take him back to their village. After passing out for a day Arthur wakes up surrounded by humans.\n";
    cout<< "After sharing his experience of the journey with them, he normally strolls around the village. After walking for 10 minutes, he sees some children playing under a tree.\n";
    cout<< "Out of curiousity, he decides to join them. As Arthur does not know how to play this game, he seeks out for your help to complete the game. \n";

    output out = {};
    int bounus =0;
    srand(time(0));
    
    cout << "You will be provided with four words describing the characteristics of the answer. You will need to identify the potential answer from the options given below: \n" << endl;
    cout << "The possible answers are as follows: (\nNote: If you think the answer is Raddish, press: Key 5\n)" << endl;
    cout << " 1 - Rafael Nadal           2 - Lionel Messi                3 - Pele\n";
    cout << " 4 - Spinach                5 - Raddish                     6 - Carrot\n";
    cout << " 7 - Socrates               8 - Aristotle                   9 - Plato\n10 - Orange\n";
    cout << "How does this game work: ";
    cout << "\nyou have to guess the answer out of the four choices. For example: \n\nQ. Fruit      Colour     Vitamin C    Rhyme" << endl;
    cout << "\nThe correct answer is 10 (Orange) because: \n\nOrange is a fruit. \nOrange is also a colour. \nOrange is a rich source of vitamin C. \nThe word orange cannot be rhymed in poetry.";


    int random,input,times=0;
    bool m1=false, m2=false, m3=false;
    while (times++ < 3)
    {
        if (times == 1)
            random = rand() % 3 + 1;
        else if (times == 2)
        {
            while (random = (rand() % 3 + 1))
            {
                if (m1 == false && random == 1)
                    break;
                if (m2 == false && random == 2)
                    break;
                if (m3 == false && random == 3)
                    break;
            }
        }
        else
        {
            if (m1 == false)
                random = 1;
            if (m2 == false)
                random = 2;
            if (m3 == false)
                random = 3;
        }

        cout << "\n\nGuess the common answer out of these words: (Hint: Refer to the answer options above for correct answer)\n\n";
        cout << "Question:\n\n";
        if (random == 1)
        {
            cout << "Argentum        Sports       34       Bonjour\n" << endl;
            cout << "Enter your  answer (number): ";
            cin >> input;

            if (input == 2)
            {
                cout << "Correct Answer!\n\nExplanation: \n";
                cout << "\nLionel Messi was born in Argentina, a country which is rich in silver (argentum).";
                cout << "\nHe plays football.";
                cout << "\nHe is 34 years old.";
                cout << "\nHe is currently playing for Paris in France." << endl;
                return out;
            }
            else
            {
                cout << "\nIncorrect answer! The Correct Answer is 2- Lionel Messi.\n\nExplanation: \n";
                cout << "\nLionel Messi was born in Argentina, a country which is rich in silver (argentum).";
                cout << "\nHe plays football.";
                cout << "\nHe is 34 years old.";
                cout << "\nHe is currently playing for Paris in France.";
                cout << "\nArthur cannot leave the game without getting it correct. So, please try again to help him get a correct answer." << endl               
            }
            m1 = true;
        }

        else if (random == 2)
        {
            cout << "Vitamin A       Bunny      Soup         Root\n\n";
            cout << "Enter your  answer (number): ";
            cin >> input;
            if (input == 6)
            {
                cout << "Correct Answer!\n\nExplanation: \n" << endl;
                cout << "Carrot has high amount of Vitamin A." << endl;
                cout << "Rabbit loves eating carrot.";
                cout << "\nCarrot is often used for making soup.";
                cout << "\nCarrot is a root vegetable" << endl;
                return out;
            }
            else
            {
                cout << "\nIncorrect Answer! The correct answer is 6 - Carrot.\n\nExplanation: \n" << endl;
                cout << "Carrot has high amount of Vitamin A." << endl;
                cout << "Rabbit loves eating carrot.";
                cout << "\nCarrot is often used for making soup.";
                cout << "\nCarrot is a root vegetable.";
                cout << "\nArthur cannot leave the game without getting it correct. So, please try again to help him get a correct answer." << endl;
            }
            m2 = true;
        }

        else if (random == 3)
        {
            cout << "Greece       Unmaterialistic theory      Stratification      Lyceum\n\n";
            cout << "Enter your  answer (number): ";
            cin >> input;
            if (input == 8)
            {
                cout << "Correct Answer!\n\nExplanation: \n";
                cout << "\nAristotle was born in Ancient Greece.";
                cout << "\nAristotle is the pioneer of Metaphysics- abstract theory with no basis in reality.";
                cout << "\nAristotle was the first person to categorize animal into different hierarchy.";
                cout << "\nAristotle established a school of philosophy called Lyceum in Macedonia, Greece." << endl;
                return out;
            }
            else
            {
                cout << "\nIncorrect Answer! The correct answer is 8 - Aristotle\n\nExplanation: \n";
                cout << "\nAristotle was born in Ancient Greece.";
                cout << "\nAristotle is the pioneer of Metaphysics- abstract theory with no basis in reality.";
                cout << "\nAristotle was the first person to categorize animal into different hierarchy.";
                cout << "\nAristotle established a school of philosophy called Lyceum in Macedonia, Greece.\n";
                cout << "Arthur cannot leave the game without getting it correct. So, please try again to help him get a correct answer.\n";<< endl;
                
            }
            m3 = true;
        }
    }
    out.int=input;
    if(input==2||input==6||input==8)
        bonus+=20;
    out.bonus_point=bonus;
    cout<<"You answer key in this stage is "<<input<<endl;
    return out;
}
