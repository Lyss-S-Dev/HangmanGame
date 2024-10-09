// HangmanGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //VARIABLE DECLARATION

    bool isGameActive = true;
    bool isPlayingRound = false;

    string targetWord = "Nothing";
    char userGuess = 'Z';

    const int startNumOfIncorrectGuesses = 12;
    int currentNumOfIncorrectGuesses;

    //ARRAYS AND VECTORS
    string wordArray[] = { "Banana", "Apple", "Pomegranite", "Dragonfruit", "Cheeseburger", "Milk", "Wheat", "Soup", "Pasta", "Sauasage", "Toothpaste", "Bleach", "Cashew", "Peanut" };

    //3 Vectors that the words from the word array will be sorted into. Words will be selected from the array the user chooses at game start.
    vector<string> shortWords;
    vector<string> mediumWords;
    vector<string> longWords;

    //WORD COLLECTION POPULATION
    for (string wordToSort : wordArray)
    {
        int wordLength = wordToSort.length();

        if (wordLength >= 4 && wordLength < 6)
        {
            shortWords.push_back(wordToSort);
        }
        else if (wordLength >= 6 && wordLength < 8)
        {
            mediumWords.push_back(wordToSort);
        }
        else if (wordLength >= 8)
        {
            longWords.push_back(wordToSort);
        }
        else
        {
            continue;
        }

    }

    
    //SHOW TITLE OF GAME
    cout << "THE NAME OF THE GAME IS...\n" << "HANGMAN!\n\n";


    while (isGameActive)
    {
       
        //PROMPT USER FOR DIFFICULTY SELECT
        //ADD DEBUG TO DISPLAY WORD VECTORS

        bool validDifficulty = false;
        int userDifficultyInput = 0;

        while (!validDifficulty)
        {
            cin.clear();
            cout << "Please enter a number to select your difficulty!\n";
            cout << "1. Short Word  2. Medium Word  3. Long Word\n4.DEBUG: Display Word Lists\n\n";
            cin >> userDifficultyInput;

            if (userDifficultyInput >= 1 && userDifficultyInput <= 3)
            {
                validDifficulty = true;
            }
            else if (userDifficultyInput == 4)
            {
                cout << "Printing word lists...\n\n";
                cout << "SHORT WORDS: \n";
                for (string sWord : shortWords)
                {
                    cout << sWord << ", ";
                }
                cout << "\n";
                cout << shortWords.size() << " words in the list\n";

                cout << "MEDIUM WORDS: \n";
                for (string mWord : mediumWords)
                {
                    cout << mWord << ", ";
                }
                cout << "\n";
                cout << mediumWords.size() << " words in the list\n";

                cout << "LONG WORDS: \n";
                for (string lWord : longWords)
                {
                    cout << lWord << ", ";
                }
                cout << "\n";
                cout << longWords.size() << " words in the list\n";
                cout << "ALL LISTS PRINTED\n\n";
                validDifficulty = false;

            }
            else
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cerr << "ERROR: Invalid Input. Please enter one of the options listed \n\n";
                validDifficulty = false;
            }
        }

        cout << '\n';

        //PICK WORD FROM CORRECT COLLECTION

        switch (userDifficultyInput)
        {
        case 1:
            cout << "You have chosen a short word. Now selecting word...\n\n";
            break;
        case 2:
            cout << "You have chosen a medium word. Now selecting word...\n\n";
            break;
        case 3:
            cout << "You have chosen a long word. Now selecting word...\n\n";
            break;
        }




        

        //INITIALISE GAME LOOP VARIABLES

        //IN GAME LOOP STARTS
        while (isPlayingRound)
        {
            //DRAW GAME STATUS

            //PROMPT USER FOR INPUT

            //VALIDATE INPUT

            //COMPARE INPUT TO TARGET WORD

            //MODIFY GAME INFORMATION BASED ON GUESS

            //CHECK IF GAME IS OVER
        }

        //GAME IS OVER

        //PROMPT USER TO PLAY AGAIN

    }


}

