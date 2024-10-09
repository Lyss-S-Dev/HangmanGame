// HangmanGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void DrawHangmanImage(int incorrectGuessesLeft)
{
    switch (incorrectGuessesLeft)
    {
    case 12:
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n\n";
        break;
    case 11:
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "====================================\n\n";
        break;
    case 10:
        cout << "\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "====================================\n\n";
        break;
    case 9:
        cout << "\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "  /|\n";
        cout << " / | \n";
        cout << "/  |  \n";
        cout << "====================================\n\n";
        break;
    case 8:
        cout << "\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    case 7:
        cout << "+---------------------------+\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    case 6:
        cout << "+---------------------------+\n";
        cout << "   |       /\n";
        cout << "   |      /\n";
        cout << "   |     /\n";
        cout << "   |    /\n";
        cout << "   |   /\n";
        cout << "   |  /\n";
        cout << "   | /\n";
        cout << "   |/\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    case 5:
        cout << "+---------------------------+\n";
        cout << "   |       /              |\n";
        cout << "   |      /               |\n";
        cout << "   |     /\n";
        cout << "   |    /\n";
        cout << "   |   /\n";
        cout << "   |  /\n";
        cout << "   | /\n";
        cout << "   |/\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    case 4:
        cout << "+---------------------------+\n";
        cout << "   |       /              |\n";
        cout << "   |      /               |\n";
        cout << "   |     /            ---------\n";
        cout << "   |    /           /           \\\n";
        cout << "   |   /            |           |\n";
        cout << "   |  /             |           |\n";
        cout << "   | /               \\_________/\n";
        cout << "   |/\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    case 3:
        cout << "+---------------------------+\n";
        cout << "   |       /              |\n";
        cout << "   |      /               |\n";
        cout << "   |     /            ---------\n";
        cout << "   |    /           /           \\\n";
        cout << "   |   /            |           |\n";
        cout << "   |  /             |           |\n";
        cout << "   | /               \\_________/\n";
        cout << "   |/                     |\n";
        cout << "   |                      | \n";
        cout << "   |                      |\n";
        cout << "   |                      |\n";
        cout << "   |                      |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    case 2:
        cout << "+---------------------------+\n";
        cout << "   |       /              |\n";
        cout << "   |      /               |\n";
        cout << "   |     /            ---------\n";
        cout << "   |    /           /           \\\n";
        cout << "   |   /            |           |\n";
        cout << "   |  /             |           |\n";
        cout << "   | /               \\_________/\n";
        cout << "   |/                     |\n";
        cout << "   |                 ---- | ----\n";
        cout << "   |                      |\n";
        cout << "   |                      |\n";
        cout << "   |                      |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    case 1:
        cout << "+---------------------------+\n";
        cout << "   |       /              |\n";
        cout << "   |      /               |\n";
        cout << "   |     /            ---------\n";
        cout << "   |    /           /           \\\n";
        cout << "   |   /            |           |\n";
        cout << "   |  /             |           |\n";
        cout << "   | /               \\_________/\n";
        cout << "   |/                     |\n";
        cout << "   |                 ---- | ----\n";
        cout << "   |                      |\n";
        cout << "   |                      |\n";
        cout << "   |                      |\n";
        cout << "   |                     /\n";
        cout << "   |                    /\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    case 0:
        cout << "+---------------------------+\n";
        cout << "   |       /              |\n";
        cout << "   |      /               |\n";
        cout << "   |     /            ---------\n";
        cout << "   |    /           /           \\\n";
        cout << "   |   /            |           |\n";
        cout << "   |  /             |           |\n";
        cout << "   | /               \\_________/\n";
        cout << "   |/                     |\n";
        cout << "   |                 ---- | ----\n";
        cout << "   |                      |\n";
        cout << "   |                      |\n";
        cout << "   |                      |\n";
        cout << "   |                     / \\\n";
        cout << "   |                    /   \\\n";
        cout << "   |\n";
        cout << "  /|\\\n";
        cout << " / | \\\n";
        cout << "/  |  \\\n";
        cout << "====================================\n\n";
        break;
    }
}




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

    //Vector that keeps track of characters guessed
    vector<char> correctCharGuesses;
    vector<char> incorrectCharGuesses;

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
        targetWord = "Nothing";
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

        int wordIndex;

        switch (userDifficultyInput)
        {
        case 1:
            cout << "You have chosen a short word. Now selecting word...\n\n";
            wordIndex = rand() % shortWords.size();
            targetWord = shortWords[wordIndex];
            break;
        case 2:
            cout << "You have chosen a medium word. Now selecting word...\n\n";
            wordIndex = rand() % mediumWords.size();
            targetWord = mediumWords[wordIndex];
            break;
        case 3:
            cout << "You have chosen a long word. Now selecting word...\n\n";
            wordIndex = rand() % longWords.size();
            targetWord = longWords[wordIndex];
            break;
        }




        cout << "The word to guess is: " << targetWord << "\n\n";

        //INITIALISE GAME LOOP VARIABLES

        currentNumOfIncorrectGuesses = startNumOfIncorrectGuesses;
        correctCharGuesses.clear();
        incorrectCharGuesses.clear();
        isPlayingRound = true;
        //IN GAME LOOP STARTS
        while (isPlayingRound)
        {
            //DRAW GAME STATUS
            DrawHangmanImage(currentNumOfIncorrectGuesses);
            cout << "++++++++++++++++++++++++++++++++++++\n\n";
            //Show the word in progress

            bool drawChar = false;
            for (char c1 : targetWord)
            {
                drawChar = false;
                for (char c2 : correctCharGuesses)
                {
                    if ((char) tolower(c1) ==(char) tolower(c2))
                    {
                        drawChar = true;
                    }
                    else
                    {
                        drawChar = false;
                    }
                                      
                }

                if (drawChar == true)
                {
                    cout << c1;
                }
                else
                {
                    cout << "[]";
                }

            }
            cout << "\n";

            //Display Contents of Incorrect guesses array
            cout << "Incorrect letters: ";
            for (char c : incorrectCharGuesses)
            {
                cout << c << " ";
            }


            cout << "\n";

            cout << "Correct Letters: ";
            for (char c : correctCharGuesses)
            {
                cout << c << " ";
            }

            cout << "\n";

            bool validCharGuess = false;
            bool notOnCorrectList = false;
            bool notOnIncorrectList = false;
            //PROMPT USER FOR INPUT
            //VALIDATE INPUT
            while (!validCharGuess)
            {
                cout << "Please Guess a Letter from the Word: ";
                cin >> userGuess;
                if (!isalpha(userGuess))
                {
                    cerr << "ERROR: Invalid input. Only input a single character.\n";
                    validCharGuess = false;
                    cin.ignore(100, '\n');
                    cin.clear();
                    
                }
                else
                {
                    for (char c1 : correctCharGuesses)
                    {
                        if ((char) tolower(userGuess) == (char) tolower(c1))
                        {
                            cout << "You have already guessed that letter. Please try another one. \n";
                            notOnCorrectList = false;
                              
                            
                        }
                        else
                        {
                            notOnCorrectList = true;
                        }
                    }

                    for (char c2 : incorrectCharGuesses)
                    {
                        if ((char) tolower(userGuess) == (char) tolower(c2))
                        {
                            cout << "You have already guessed tht letter. Please try another one. \n";
                            notOnIncorrectList = false;
                            
                            
                        }
                        else
                        {
                            notOnIncorrectList = true;
                        }
                    }                    
                }

                

            }
            
         //COMPARE INPUT TO TARGET WORD
            bool successfulGuess = false;

            for (char c : targetWord)
            {
                if ((char)tolower(c) ==(char) tolower(userGuess))
                {
                    successfulGuess = true;
                    break;
                }
                else
                {
                    successfulGuess = false;
                }
            }
            //MODIFY GAME INFORMATION BASED ON GUESS
            if (successfulGuess)
            {
                correctCharGuesses.push_back((char) tolower(userGuess));
            }
            else
            {
                incorrectCharGuesses.push_back((char)tolower(userGuess));
                currentNumOfIncorrectGuesses--;
            }

            

            

            //CHECK IF GAME IS OVER


         }
            
            

            
            
            //GAME IS OVER

            //PROMPT USER TO PLAY AGAIN
        }

        

    }
 

