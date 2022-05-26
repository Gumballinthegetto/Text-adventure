/**
 * @file text-adventure.cpp
 * @author Phan Japon
 * @brief C++ program to build a project on what I've learned so far
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

using namespace std;

int main()
{
    // declare choices for user 
    int choice1;
    int choice2;
    int choice3;

    // declare a try
    int tries = 0;

    // your journey begins here!
    cout << "=============================" << endl;
    cout << "    The kid and The sewer    " << endl;
    cout << "=============================" << endl;
    // the story goes..
    cout << "   - Once upon a time, there was a kid, ages around 6, wandering around town on a rainy evening, with his friend, Zed, a toy he would protect like his life depends on it, happily trekking on a small alley near his house, sided with small ponds of water from the rain, singing happily as what normal kids would do at such age.";
    cout << " Mark, his name is Mark, a kid whose hobby is to discover new things, whether it would lead him to things that might not seem pleasant for him to encounter, he would still be pleased and called himself an adventurous person.\n   - It was raining cats and dogs that evening, when suddenly, little Mark said to himself:" << endl;

    // Dialog 1
    cout << "\n";
    cout << "D1). What would he say?" << endl;
    cout << "   1. 'Maybe I should go home. I'm really hungry.', he said." << endl;
    cout << "   2. 'The water flows really quick to that sewer today. I wonder why it is like that. Do you agree Zed?', he said" << endl;
    
    while (tries < 3) {
        cout << "   -> ";
        cin >> choice1;
        cout << endl;

        if (choice1 == 1) {
            cout << "   - Mark then hurriedly walked his way to his house with his toy, Zed, briming with joy on his face, ready to eat a feastful of dalicies on a lovely, raining evening.\n-Fin-" << endl;
            break;
        }
        else if (choice1 == 2) {
            cout << "   - Zed nodded sideway with a disapproval face on his presence as if he had a beating heart in his rubber figured body. But Mark insisted and followed the rapid flow of the water down to the direction of the sewer." << endl;
            cout << "Mark then saw:" << endl;
            break;
        }
        else if (choice1 != 1 || choice1 != 2) {                        // check if user provided wrong input for 3 times
            cout << "   -> Invalid input. Please try again." << endl;
            tries++;

            if (tries == 3) {
                cout << "   - Out of tries. Please restart the game. -" << endl;
            }
        }
    }

    // dialog 2
    if (choice1 == 2) {
        cout << "\n";
        cout << "D2). What did he see?" << endl;
        cout << "   1. a teddy bear" << endl;
        cout << "   2. a raccone" << endl;
    
        while (tries < 3) {
            cout << "   -> ";
            cin >> choice2;
            cout << endl;

            if (choice2 == 1) {
                cout << "   - 'Oh! a teddy bear! oh wait! Zedd! it's Lyly!', Mark cried with joy. 'I finally found you! where have you been?!', Mark grabbed Lyly out of the sewer without realising that he dropped Zedd to the side of the wet road." << endl;
                cout << "Suddenly, a rubber figured that was once just a normal toy, blurted out a crying sound, 'hue hue hueeeUe...'. It was sobbing quietly at first then gradually echoed throughout the narrow alley while heavy rain, pouring from the sky." << endl;
                cout << "Mark was holding Lyly for quite some times without realizing that he left Zedd untill a strang sound contined to echo. He mumbled, 'What's that sound? Where did I put Zedd at?'. All of a sudden, he screamed on the top of his lung. Because:" << endl;
                break;
            }
            else if (choice2 == 2) {
                cout << "   - 'Silly raccone, what're you doing in there?' Mark said and then saw the sky stopped raining so he decided to walk back home with Zedd.\n-Fin-" << endl;
                break;
            }
            else {   // check if user provided wrong input for 3 times
                cout << "   -> Input input. Please try again." << endl;
                tries++;

                if (tries == 3) {
                    cout << "   - Out of tries. Please restart the game. -" << endl;
                }
            }
        }
    }

    // dialog 3
    if (choice2 == 1 && choice1 != 1) {
        cout << "D3) Why do you think he saw at that particular moment?" << endl;
        cout << "   1. a strange silhouette" << endl;
        cout << "   2. his parents" << endl;

        while (tries < 3) {
            cout << "   -> ";
            cin >> choice3;
            cout << endl;

            if (choice3 == 1) {
                cout << "To be continued.." << endl;
                break;
            }
            else if (choice3 == 2) {
                cout << "   - 'WTF mom', he said while shitting his pants.\n-Fin-" << endl;
                break;
            }
            else {
                cout << "   -> Invalid Input. Please try again." << endl;
                tries++;

                if (tries == 3) {
                    cout << "   - Out of tries. Please restart the game - " << endl;
                }
            }
        }
    }
}