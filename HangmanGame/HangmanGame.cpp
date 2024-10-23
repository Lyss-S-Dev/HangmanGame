// HangmanGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "HangmanGame.h"


void DrawHangmanImage(int incorrectGuessesLeft)
{
    switch (incorrectGuessesLeft)
    {
    case 12:
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n\n";
        break;
    case 11:
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "====================================\n\n";
        break;
    case 10:
        std::cout << "\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "====================================\n\n";
        break;
    case 9:
        std::cout << "\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "  /|\n";
        std::cout << " / | \n";
        std::cout << "/  |  \n";
        std::cout << "====================================\n\n";
        break;
    case 8:
        std::cout << "\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    case 7:
        std::cout << "+---------------------------+\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    case 6:
        std::cout << "+---------------------------+\n";
        std::cout << "   |       /\n";
        std::cout << "   |      /\n";
        std::cout << "   |     /\n";
        std::cout << "   |    /\n";
        std::cout << "   |   /\n";
        std::cout << "   |  /\n";
        std::cout << "   | /\n";
        std::cout << "   |/\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    case 5:
        std::cout << "+---------------------------+\n";
        std::cout << "   |       /              |\n";
        std::cout << "   |      /               |\n";
        std::cout << "   |     /\n";
        std::cout << "   |    /\n";
        std::cout << "   |   /\n";
        std::cout << "   |  /\n";
        std::cout << "   | /\n";
        std::cout << "   |/\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    case 4:
        std::cout << "+---------------------------+\n";
        std::cout << "   |       /              |\n";
        std::cout << "   |      /               |\n";
        std::cout << "   |     /            ---------\n";
        std::cout << "   |    /           /           \\\n";
        std::cout << "   |   /            |           |\n";
        std::cout << "   |  /             |           |\n";
        std::cout << "   | /               \\_________/\n";
        std::cout << "   |/\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    case 3:
        std::cout << "+---------------------------+\n";
        std::cout << "   |       /              |\n";
        std::cout << "   |      /               |\n";
        std::cout << "   |     /            ---------\n";
        std::cout << "   |    /           /           \\\n";
        std::cout << "   |   /            |           |\n";
        std::cout << "   |  /             |           |\n";
        std::cout << "   | /               \\_________/\n";
        std::cout << "   |/                     |\n";
        std::cout << "   |                      | \n";
        std::cout << "   |                      |\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                      |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    case 2:
        std::cout << "+---------------------------+\n";
        std::cout << "   |       /              |\n";
        std::cout << "   |      /               |\n";
        std::cout << "   |     /            ---------\n";
        std::cout << "   |    /           /           \\\n";
        std::cout << "   |   /            |           |\n";
        std::cout << "   |  /             |           |\n";
        std::cout << "   | /               \\_________/\n";
        std::cout << "   |/                     |\n";
        std::cout << "   |                 ---- | ----\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                      |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    case 1:
        std::cout << "+---------------------------+\n";
        std::cout << "   |       /              |\n";
        std::cout << "   |      /               |\n";
        std::cout << "   |     /            ---------\n";
        std::cout << "   |    /           /           \\\n";
        std::cout << "   |   /            |           |\n";
        std::cout << "   |  /             |           |\n";
        std::cout << "   | /               \\_________/\n";
        std::cout << "   |/                     |\n";
        std::cout << "   |                 ---- | ----\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                     /\n";
        std::cout << "   |                    /\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    case 0:
        std::cout << "+---------------------------+\n";
        std::cout << "   |       /              |\n";
        std::cout << "   |      /               |\n";
        std::cout << "   |     /            ---------\n";
        std::cout << "   |    /           /           \\\n";
        std::cout << "   |   /            |           |\n";
        std::cout << "   |  /             |           |\n";
        std::cout << "   | /               \\_________/\n";
        std::cout << "   |/                     |\n";
        std::cout << "   |                 ---- | ----\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                      |\n";
        std::cout << "   |                     / \\\n";
        std::cout << "   |                    /   \\\n";
        std::cout << "   |\n";
        std::cout << "  /|\\\n";
        std::cout << " / | \\\n";
        std::cout << "/  |  \\\n";
        std::cout << "====================================\n\n";
        break;
    }
}

void DrawGuessArrays(std::vector<char> crctGuess, std::vector<char> incrctGuess)
{
    std::cout << "Incorrect letters: ";
    for (char c : incrctGuess)
    {
        std::cout << c << " ";
    }


    std::cout << "\n";

    std::cout << "Correct Letters: ";
    for (char c : crctGuess)
    {
        std::cout << c << " ";
    }
}

void CheckGameIsOver()
{
    if (currentNumOfIncorrectGuesses == 0)
    {
        isPlayingRound = false;
        isWin = false;

    }
    else
    {
        int correctNumberOfGuesses = 0;
        for (char c1 : targetWord)
        {
            for (char c2 : correctCharGuesses)
            {
                if ((char)tolower(c1) == (char)tolower(c2))
                {
                    correctNumberOfGuesses++;



                }
            }
        }

        if (correctNumberOfGuesses >= targetWord.length())
        {
            isPlayingRound = false;
            isWin = true;
        }
    }
}

std::string PickWordToGuess(int difficulty)
{
    int wordIndex;
    srand(time(0));

    switch (difficulty)
    {
    case 1:
        std::cout << "You have chosen a short word. Now selecting word...\n\n";
        wordIndex = rand() % shortWords.size();
        return shortWords[wordIndex];
        
    case 2:
        std::cout << "You have chosen a medium word. Now selecting word...\n\n";
        wordIndex = rand() % mediumWords.size();
        return mediumWords[wordIndex];
        
    case 3:
        std::cout << "You have chosen a long word. Now selecting word...\n\n";
        wordIndex = rand() % longWords.size();
        return longWords[wordIndex];
        
    }
}

void PopulateWordArrays()
{
    for (std::string wordToSort : wordArray)
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
}

void PrintWordArrays()
{
    std::cout << "Printing word lists...\n\n";
    std::cout << "SHORT WORDS: \n";
    for (std::string sWord : shortWords)
    {
        std::cout << sWord << ", ";
    }
    std::cout << "\n";
    std::cout << shortWords.size() << " words in the list\n";

    std::cout << "MEDIUM WORDS: \n";
    for (std::string mWord : mediumWords)
    {
        std::cout << mWord << ", ";
    }
    std::cout << "\n";
    std::cout << mediumWords.size() << " words in the list\n";

    std::cout << "LONG WORDS: \n";
    for (std::string lWord : longWords)
    {
        std::cout << lWord << ", ";
    }
    std::cout << "\n";
    std::cout << longWords.size() << " words in the list\n";
    std::cout << "ALL LISTS PRINTED\n\n";
}

void DrawWordToGuess()
{
    bool drawChar = false;

    for (char c1 : targetWord)
    {
        drawChar = false;

        for (char c2 : correctCharGuesses)
        {
            if ((char)tolower(c1) == (char)tolower(c2))
            {
                std::cout << " " << c1 << " ";
                drawChar = true;
                break;
            }


        }

        if (!drawChar)
        {
            std::cout << "[.]";
        }

    }
}

void CheckGuessIsCorrect()
{
    bool successfulGuess = false;

    for (char c : targetWord)
    {
        if ((char)tolower(c) == (char)tolower(userGuess))
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
        correctCharGuesses.push_back((char)tolower(userGuess));
    }
    else
    {
        incorrectCharGuesses.push_back((char)tolower(userGuess));
        currentNumOfIncorrectGuesses--;
    }
}

void CheckPlayerWantsToPlayAgain()
{
    bool playAgainValid = false;
    char playAgainChoice = 'z';

    while (!playAgainValid)
    {
        playAgainValid = false;
        std::cout << "Would you like to play again? y/n" << '\n';
        std::cin >> playAgainChoice;



        if ((char)tolower(playAgainChoice) == 'y' || (char)tolower(playAgainChoice) == 'n')
        {
            playAgainValid = true;
        }
        else
        {
            std::cout << "ERROR: Invalid Input, please enter 'y' for yes or 'n' for no\n";
            playAgainValid = false;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
    }

    switch ((char)tolower(playAgainChoice))
    {
    case 'y':
        std::cout << "\n\n\n";
        break;

    case 'n':
        isGameActive = false;
        break;
    }
}

int main()
{
    

    //WORD COLLECTION POPULATION
    PopulateWordArrays();


    //SHOW TITLE OF GAME
    std::cout << "THE NAME OF THE GAME IS...\n" << "HANGMAN!\n\n";


    while (isGameActive)
    {
 
        //PROMPT USER FOR DIFFICULTY SELECT
        //ADD DEBUG TO DISPLAY WORD VECTORS
        targetWord = "Nothing";
        bool validDifficulty = false;
        int userDifficultyInput = 0;

        while (!validDifficulty)
        {
            std::cin.clear();
            std::cout << "Please enter a number to select your difficulty!\n";
            std::cout << "1. Short Word  2. Medium Word  3. Long Word\n4.DEBUG: Display Word Lists\n\n";
            std::cin >> userDifficultyInput;

            if (userDifficultyInput >= 1 && userDifficultyInput <= 3)
            {
                validDifficulty = true;
            }
            else if (userDifficultyInput == 4)
            {
                PrintWordArrays();
                validDifficulty = false;

            }
            else
            {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cerr << "ERROR: Invalid Input. Please enter one of the options listed \n\n";
                validDifficulty = false;
            }
        }

        std::cout << '\n';

        //PICK WORD FROM CORRECT COLLECTION
    
        targetWord = PickWordToGuess(userDifficultyInput);

        std::cout << "DEBUG The word to guess is: " << targetWord << "\n\n";

        //INITIALISE GAME LOOP VARIABLES

        currentNumOfIncorrectGuesses = startNumOfIncorrectGuesses;
        correctCharGuesses.clear();
        incorrectCharGuesses.clear();
        isPlayingRound = true;
        isWin = false;

        //IN GAME LOOP STARTS
        while (isPlayingRound)
        {
            //DRAW GAME STATUS
            DrawHangmanImage(currentNumOfIncorrectGuesses);
            std::cout << "++++++++++++++++++++++++++++++++++++\n\n";
            
            //Show the word in progress
            DrawWordToGuess();
            
            std::cout << "\n";

            //Display Contents of Incorrect and Correct guesses array
            DrawGuessArrays(correctCharGuesses, incorrectCharGuesses);

            std::cout << "\n";

            bool validCharGuess = false;

            //PROMPT USER FOR INPUT
            //VALIDATE INPUT
            while (!validCharGuess)
            {
                validCharGuess = true;
                std::cout << "Please Guess a Letter from the Word: ";
                std::cin >> userGuess;
                
                if (!isalpha(userGuess) || std::cin.fail())
                {
                    std::cerr << "ERROR: Invalid input. Only input a single character.\n";
                    validCharGuess = false;
                    std::cin.ignore(100, '\n');
                    std::cin.clear();
                    
                    

                }
                else
                {
                    for (char c1 : correctCharGuesses)
                    {
                        if ((char)tolower(userGuess) == (char)tolower(c1))
                        {
                            std::cout << "You have already guessed that letter. Please try another one. \n";
                            std::cin.ignore(100, '\n');
                            std::cin.clear();
                            
                            
                            validCharGuess = false;
                            break;

                        }



                    }

                    for (char c2 : incorrectCharGuesses)
                    {
                        if ((char)tolower(userGuess) == (char)tolower(c2))
                        {
                            std::cout << "You have already guessed that letter. Please try another one. \n";
                            std::cin.ignore(100, '\n');
                            std::cin.clear();
                            
                            
                            validCharGuess = false;
                            break;
                        }

                    }

                    

                }

                //IMPORTANT LINES DO NOT DELETE. Clears input stream. Prevents multiple characters from being checked.
                std::cin.clear();
                std::cin.ignore(100, '\n');

                //COMPARE INPUT TO TARGET WORD
                if (validCharGuess)
                {
                    CheckGuessIsCorrect();


                    //CHECK IF GAME IS OVER
                    CheckGameIsOver();
                }
                
                


              
            }

            
        }

        DrawHangmanImage(currentNumOfIncorrectGuesses);

        if (isWin)
        {
            std::cout << "You got it! The word was " << targetWord << '\n';
        }
        else
        {
            std::cout << "Oh no! You didn't get the word in time! The word was " << targetWord << '\n';
        }

        std::cout << '\n';

        //GAME IS OVER
        //PROMPT USER TO PLAY AGAIN

        CheckPlayerWantsToPlayAgain();

        

    }

 
}
 

