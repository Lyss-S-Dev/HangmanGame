#pragma once
#include <fstream>

class WordLoader
{
	std::vector<std::string> loadedWordsVector;
	
	std::ifstream wordFile;
	

	std::string* loadedWordsString = new std::string;

	bool ValidateWord(std::string check);

	int validWordsLoaded = 0;
	int failedWords = 0;

public:
	
	std::vector<std::string> GetWordVector();
	void OpenWordFile(std::string fileName);
	void AddWordsToString(std::string fileName);
	void CloseWordFile();
	void LoadWordsIntoVector();

};

void WordLoader::OpenWordFile(std::string fileName)
{
	wordFile.open(fileName);
}

void WordLoader::CloseWordFile()
{
	wordFile.close();
}

void WordLoader::AddWordsToString(std::string filename)
{
	//Loads the contents of the word file into a string declared on the heap. 
	if (wordFile.is_open())
	{
		wordFile >> *loadedWordsString;
	}
	else
	{
		std::cerr << "ERROR: Hangman Word File is not open. Please ensure the folder containing the program has a \"" << filename << "\" document";
	}

}

void WordLoader::LoadWordsIntoVector()
{
	bool wordsRemaining = true;

	while (wordsRemaining)
	{
		//find a period in the text file
		int periodIndex = loadedWordsString->find('.');
		//creates a substring from the start to where the period has been found
		std::string stringToValidate = loadedWordsString->substr(0, periodIndex);

		//checks if the word is valid
		if (ValidateWord(stringToValidate))
		{
			//if the word is valid, add it to the master array and erase the substring from the loaded string
			loadedWordsVector.push_back(stringToValidate);
			loadedWordsString->erase(0, periodIndex + 1);
			validWordsLoaded++;
		}
		else
		{
			//if the word is not valid, only erase the string from the loaded word string
			loadedWordsString->erase(0, periodIndex + 1);
			failedWords++;
		}

		//if the string is empty, there are no more words
		if (loadedWordsString->length() <= 0)
		{
			wordsRemaining = false;
		}

	}

	//remove the loaded words string from the heap
	delete loadedWordsString;
	std::cout << "Loading Finished! Words added into the program: " << validWordsLoaded << " Failed validation checks: " << failedWords << "\n\n";
	

}

bool WordLoader::ValidateWord(std::string check)
{
	bool wordIsValid = true;

	//rejects the word if it has less than 3 characters
	if (check.length() <= 3)
	{
		wordIsValid = false;
	}

	//checks if the string only alphabetical characters
	for (char c : check)
	{
		if (isalpha(c))
		{
			continue;
		}
		else
		{
			wordIsValid = false;
		}
	}


	return wordIsValid;
}

std::vector<std::string> WordLoader::GetWordVector()
{
	return loadedWordsVector;
}