#pragma once
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


class MyString
{
private:

	string _value;


	//'A' = 65 , a = 97 , 97 - 32 = 65.
//In this equation we are able to convert any lower case letter to upper case letter
//by subtracting 32 from it to get converted successfully.
	static char toUpperCase(char letter)
	{

		if (letter >= 'a' && letter <= 'z')
		{
			letter = letter - 32;

			return letter;
		}

		return letter;
	}


	//'A' = 65 , a = 97 , 65 - 32 = 97.
	//In this equation we are able to convert any upper case letter to lower case letter
	//by adding 32 to it to get converted successfully.
	static char toLowerCase(char letter)
	{
		if (letter >= 'A' && letter <= 'Z')
		{
			letter = letter + 32;

			return letter;
		}

		return letter;
	}

	static bool isUpperCase(char letter)
	{
		return (letter >= 'A' && letter <= 'Z');
	}

	static bool isLowerCase(char letter)
	{
		return (letter >= 'a' && letter <= 'z');
	}

	static char invertCharacter(char letter)
	{
		return (isLowerCase(letter)) ? toUpperCase(letter) : toLowerCase(letter);
	}


	//Take Only c string style.
	static int _customLength(const char* str)
	{
		int counter = 0;

		while (*str != '\0')
		{
			counter++;
			str++;
		}

		return counter;
	}

public:

	MyString()
	{
		_value;
	}

	MyString(string value)
	{
		_value = value;
	}


	void setValue(string value)
	{
		_value = value;
	}

	string getValue()
	{
		return _value;
	}

	__declspec(property(get = getValue, put = setValue)) string value;


	static short countWords(string text)
	{
		short pos = 0;
		string word = "";
		string delimiter = " ";

		short wordCounter = 0;

		while ((pos = text.find(delimiter)) != string::npos)
		{
			word = text.substr(0, pos);

			if (word != "")
				wordCounter++;

			text.erase(0, pos + delimiter.length());
		}

		if (text != "")
			wordCounter++;


		return wordCounter;
	}


	short countWords()
	{
		return countWords(_value);
	}



	static string toUpperCase(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = toUpperCase(text[i]);
		}

		return text;
	}

	string toUpperCase()
	{
		return toUpperCase(_value);
	}

	static string toLowerCase(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = toLowerCase(text[i]);
		}

		return text;
	}

	string toLowerCase()
	{
		return toLowerCase(_value);
	}

	static string invertString(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = invertCharacter(text[i]);
		}

		return text;
	}

	string invertString()
	{
		return invertString(_value);
	}

	static string mySubstr(string text, short start, short end)
	{

		string word = "";

		short length = text.length();

		if (start < 0 || start > length)
			return "";

		if (end > length)
			end = length;


		for (int i = start; i < end; i++)
		{
			word += text[i];
		}

		return word;
	}

	string mySubstr(short start, short end)
	{
		return mySubstr(_value, start, end);
	}


	static int customLength(string text)
	{
		const char* str = text.c_str();

		return _customLength(str);
	}

	int customLength()
	{
		const char* str = _value.c_str();

		return _customLength(str);
	}

	static string firstLetterWordUpperCase(string text)
	{
		bool isFirstLetter = true;

		short length = customLength(text);

		for (int i = 0; i < length; i++)
		{
			if (isFirstLetter)
				text[i] = toUpperCase(text[i]);

			isFirstLetter = (text[i] == ' ') ? true : false;
		}

		return text;
	}

	string firstLetterWordUpperCase()
	{
		return firstLetterWordUpperCase(_value);
	}

	static string firstLetterWordLowerCase(string text)
	{
		bool isFirstLetter = true;

		short length = customLength(text);

		for (int i = 0; i < length; i++)
		{
			if (isFirstLetter)
				text[i] = toLowerCase(text[i]);

			isFirstLetter = (text[i] == ' ') ? true : false;
		}

		return text;
	}

	string firstLetterWordLowerCase()
	{
		return firstLetterWordLowerCase(_value);
	}


	static string trimRight(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] != ' ')
				return mySubstr(text, i, text.length());
		}

		return text;
	}

	string trimRight()
	{
		return trimRight(_value);
	}

	static string trimLeft(string text)
	{
		for (int i = text.length() - 1; i >= 0; i--)
		{
			if (text[i] != ' ')
				return mySubstr(text, 0, i + 1);
		}

		return text;
	}

	string trimLeft()
	{
		return trimLeft(_value);
	}

	static string trimAll(string text)
	{
		text = trimRight(text);
		text = trimLeft(text);

		return text;
	}

	string trimAll()
	{
		return trimAll(_value);
	}


	static string eraseStr(string text, short start, short end) 
	{
		string words = "";

		words = mySubstr(text, 0, start) + mySubstr(text, end, text.length());

		return words;
	}

	string eraseStr(short start, short end) 
	{
		return eraseStr(_value, start, end);
	}


	~MyString() 
	{
		cout << "The End Of String Object life Time\n";
	}
};

