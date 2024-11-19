#pragma once
#include <fstream>
#include <exception>

class WordFileMissing : public std::exception
{
	const char* what() const throw()
	{
		return "ERROR: Word file missing or unreadable!";
	}
}wordFileMissing;



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
	bool AddWordsToString(std::string fileName);
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

bool WordLoader::AddWordsToString(std::string filename)
{

	try
	{
		if (!wordFile.is_open() || wordFile.bad())
		{
			throw wordFileMissing;
		}
		else
		{
			wordFile >> *loadedWordsString;
			return true;
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
		std::cerr << "Please ensure " << filename << " is located in the same directory as this program.\n";
		return false;
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