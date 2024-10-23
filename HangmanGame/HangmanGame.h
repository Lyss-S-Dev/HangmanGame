#pragma once

#include <iostream>
#include <string>
#include <vector>
//VARIABLE DECLARATION

bool isGameActive = true;
bool isPlayingRound = false;
bool isWin = false;

std::string targetWord = "Nothing";
char userGuess;

const int startNumOfIncorrectGuesses = 12;
int currentNumOfIncorrectGuesses;

//ARRAYS AND VECTORS
std::string wordArray[] = { "Banana", "Apple", "Pomegranite", "Dragonfruit", "Cheeseburger", "Milk", "Wheat", "Soup", "Pasta", "Sauasage", "Toothpaste", "Bleach", "Cashew", "Peanut" };

//3 Vectors that the words from the word array will be sorted into. Words will be selected from the array the user chooses at game start.
std::vector<std::string> shortWords;
std::vector<std::string> mediumWords;
std::vector<std::string> longWords;

//Vector that keeps track of characters guessed
std::vector<char> correctCharGuesses;
std::vector<char> incorrectCharGuesses;

void DrawHangmanImage(int incorrectGuessesLeft);

void DrawGuessArrays(std::vector<char> crctGuess, std::vector<char> incrctGuess);

void CheckGameIsOver();

std::string PickWordToGuess(int difficulty);

void PopulateWordArrays();

void PrintWordArrays();

void DrawWordToGuess();

void CheckGuessIsCorrect();

void CheckPlayerWantsToPlayAgain();


