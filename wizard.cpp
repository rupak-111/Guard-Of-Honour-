#include<iostream>
using namespace std;
#include <ctime>

int main()
{
    srand(time(NULL));
    cout << "You will be provided with four words describing the characteristics of the answer. You will need to identify the potential answer from the options given below: \n" << endl;
    cout << "The possible answers are as follows: (\nNote: If you think the answer is Raddish, press: Key 5\n)" << endl;
    cout << " 1 - Rafael Nadal           2 - Lionel Messi                3 - Pele\n";
    cout << " 4 - Spinach                5 - Raddish                     6 - Carrot\n";
    cout << " 7 - Socrates               8 - Aristotle                   9 - Plato\n\n";
    cout << "How does this game work: ";
    cout << "\nyou have to guess the answer out of the four choices. For example: \n\nQ. Fruit      Colour     Vitamin C    Rhyme" << endl;
    cout << "\nThe correct answer is Orange because: \n\nOrange is a fruit. \nOrange is also a colour. \nOrange is a rich source of vitamin C. \nThe word orange cannot be rhymed in poetry.";

    int input;
    int random;
    random = (rand() % 3) + 1;
    cout << "\n\nGuess the common answer out of these words: (Hint: Refer to the answer options above for correct answer)\n\n";
    cout << "Question:\n\n";
    if (random == 1)
    {
        cout << "Argentum        Sports       34       Bonjour\n" << endl;
        cout << "Enter your  answer (number): ";
        cin >> input;

        if (input == 1)
        {
            cout << "Correct Answer!\n\nExplanation: \n";
            cout << "\nLionel Messi was born in Argentina, a country which is rich in silver (argentum).";
            cout << "\nHe plays football.";
            cout << "\nHe is 34 years old.";
            cout << "\nHe is currently playing for Paris in France." << endl;
        }
        else
        {
            cout << "\nIncorrect answer! The Correct Answer is 2- Lionel Messi.\n\nExplanation: \n";
            cout << "\nLionel Messi was born in Argentina, a country which is rich in silver (argentum).";
            cout << "\nHe plays football.";
            cout << "\nHe is 34 years old.";
            cout << "\nHe is currently playing for Paris in France." << endl;
            exit(0);
        }
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
        }
        else
        {
            cout << "\nIncorrect Answer! The correct answer is 6 - Carrot.\n\nExplanation: \n" << endl;
            cout << "Carrot has high amount of Vitamin A." << endl;
            cout << "Rabbit loves eating carrot.";
            cout << "\nCarrot is often used for making soup.";
            cout << "\nCarrot is a root vegetable" << endl;
            exit(0);
        }
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
        }
        else
        {
            cout << "\nIncorrect Answer! The correct answer is 8 - Aristotle\n\nExplanation: \n";
            cout << "\nAristotle was born in Ancient Greece.";
            cout << "\nAristotle is the pioneer of Metaphysics- abstract theory with no basis in reality.";
            cout << "\nAristotle was the first person to categorize animal into different hierarchy.";
            cout << "\nAristotle established a school of philosophy called Lyceum in Macedonia, Greece." << endl;
        }
    }
    return 0;
}