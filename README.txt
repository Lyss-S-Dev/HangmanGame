Lyssia Sproston's Hangman Game

Instructions:

The game starts by loading the words from the "hangmanword.txt" file. If this file does not exist, the program won't be able to load any words. A file is included by default with a handful of words already provided.

You are then prompted to choose between 3 difficulties. The difficulty determines the length of the word you will be guessing. Notably, 4 and 5 are Debugging commands. 4 Shows all the words successfully loaded into the game. 5 will toggle the word selected by the program being shown once you have selected a difficulty.

Upon selecting 1 to 3, the program will pick a word from the ones available and the game begins.

Each round, you will guess a single letter that you think is part of the word. A correct guess means you proceed with nothing bad happening. An incorrect guess will decrease the number of guesses you have left before you lose. You have 12 incorrect guesses before you lose. Your objective is to guess all the characters from the word before you run out of guesses.

Win or lose, the game will ask if you want to play again. Type y to go back to the difficulty selection, type n to end the game and close the program

The Text File:

Its possible to add your own words to the game by adding to the "hangmanword.txt" file. For the word loader to read the file correctly, there are a few rules:
- All words must be on one line with no spaces between them
- Words must be separated by a full stop/period symbol
- Words cannot contain letters or symbols other than the full stop/period that separates them. Should the program read a word with a number or symbol inside of it, it will be rejected and not added into the game
- Words with less than 4 letters will also be rejected by the program.