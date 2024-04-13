#include <iostream>
#include "MyString.h"
using namespace std;

int main() 
{
	MyString string1;

	string1.value = "Mohammed Almislaty";

	cout << "Name : " << string1.value << endl;

	cout << "Number Of Words  : " << string1.countWords() << endl;

	cout << "Number Of Words  : " << MyString::countWords("Mohammed Abdualrazag Salem Almislaty") << endl;

	cout << "Upper Case Words   :    " << string1.toUpperCase() << endl;

	cout << "Upper Case Words static function member   :    "
		<< MyString::toUpperCase("Mohammed abdualrazag salem almislaty") << endl;

	
	cout << "Upper Case Words   :    " << string1.toLowerCase() << endl;

	cout << "Upper Case Words static function member   :    "
		<< MyString::toLowerCase("Mohammed Abdualrazag SalEm AlmIslaty") << endl;


	cout << "Invert Case String   :    " << string1.invertString() << endl;

	cout << "Invert Case String by static function member   :    "
		<< MyString::invertString("Mohammed Abdualrazag SalEm AlmIslaty") << endl;

	cout << "Substr string : " << string1.mySubstr(5, 13) << endl;
	cout << "Substr string : " << string1.mySubstr(5, 18) << endl;

	cout << "Custom length : " << string1.customLength("Mohammed Almislaty") << endl;

	string koko = "Hello world";
	cout << "Custom length : " << string1.customLength(koko) << endl;
	cout << "Custom Length : " << string1.customLength() << endl;

	cout << "Upper Case First Letter Of Every Word By static function member    : " 
		<< string1.firstLetterWordUpperCase("mohammed abdualrazag salem almislaty") << endl;
	cout << "Upper Case First Letter Of Every Word : " << string1.firstLetterWordUpperCase() << endl;


	cout << "Lower Case First Letter Of Every Word By static function member    : "
		<< string1.firstLetterWordLowerCase("Mohammed Abdualrazag Salem Almislaty") << endl;
	cout << "Lower Case First Letter Of Every Word : " << string1.firstLetterWordLowerCase() << endl;

	cout << "Substr String by static function member   : " 
		<< MyString::mySubstr("Mohammed Almsialty", 8, 10) << endl;

	//string test = "                                                      Mohammed Almislaty";

	cout << "Trim Right via static function member : " 
		<< MyString::trimRight("                      Mohammed Almislaty") << endl;
	cout << "Trim Right  : " << string1.trimRight("                        Mohammed Almislaty") << endl;
	cout << "Trim Right  : " << string1.trimRight() << endl;

	cout << "Trim Left  via static function member : "
		<< MyString::trimLeft("Mohammed Almislaty                ") << endl;
	cout << "Trim Left   : " << string1.trimLeft() << endl;

	cout << "Trim All    via static function member : " 
		<< MyString::trimAll("                 MOhammed                ") << endl;
	cout << "Trim All   : " << string1.trimAll() << endl;

	string testable = "Mohammed Almislaty";
	cout << "Erase Via Static Method Member Test : " << MyString::eraseStr(testable, 0, 8) << endl;
	cout << "Erase Via Static Method Member Test : " << string1.eraseStr( 8, 18) << endl;

	cout << "Testing split " << endl;
	vector <string> vTest = string1.splitString(testable, " ");

	for (string test : vTest) 
	{
		cout << test << endl;
	}

	vTest.clear();

	cout << endl << endl;
	vTest = MyString::splitString("Mohammed Abdu Salem Almislaty", " ");

	for (string test : vTest)
	{
		cout << test << endl;
	}

	cout << "Test Join String : " << MyString::joinString(vTest, " ") << endl;

	vTest.clear();

	cout << endl << endl;
	vTest = string1.splitString(" ");

	for (string test : vTest)
	{
		cout << test << endl;
	}


	cout << "Test Join String " << string1.joinString(vTest, " ") << endl;
	

	vTest.clear();

	cout << endl << endl;
	vTest = string1.splitString(" ");

	for (string test : vTest)
	{
		cout << test << endl;
	}


	cout << "Test Join String " << string1.joinString( " ") << endl;

	cout << "Testing done it's work\n";

	system("pause > 0");


	return 0;
}