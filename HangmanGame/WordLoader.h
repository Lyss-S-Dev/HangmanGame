#pragma once
#include <fstream>

class WordLoader
{
	std::vector<std::string> loadedWordsVector;
	

	std::ifstream wordFile;
	

	std::string loadedWordsString =" ";

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

	if (wordFile.is_open())
	{
		wordFile >> loadedWordsString;
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
		int periodIndex = loadedWordsString.find('.');
		std::string stringToValidate = loadedWordsString.substr(0, periodIndex);


		if (ValidateWord(stringToValidate))
		{
			loadedWordsVector.push_back(stringToValidate);
			loadedWordsString.erase(0, periodIndex + 1);
			validWordsLoaded++;
		}
		else
		{
			loadedWordsString.erase(0, periodIndex + 1);
			failedWords++;
		}

		if (loadedWordsString.length() <= 0)
		{
			wordsRemaining = false;
		}

	}

	std::cout << "Loading Finished! Words added into the program: " << validWordsLoaded << " Failed validation checks: " << failedWords << "\n\n";
	

}

bool WordLoader::ValidateWord(std::string check)
{
	bool wordIsValid = true;

	if (check.length() <= 3)
	{
		wordIsValid = false;
	}


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