#include <iostream>
#include "MyString.h"
using namespace std;

int main() 
{
	MyString string1, string2;

	string1.value = "Mohammed Almislaty! 1999";
	string2.value = "mohammed almislaty! 1999";

	
	string text = "Mohammed Almislaty! 1999";


	cout << "Number Of Vowels : " << string1.countVowels() << endl;
	cout << "Number Of Vowels : " << string2.countVowels() << endl;
	cout << "Number Of Vowels : " << MyString::countVowels(text) << endl;


	//cout << "Is Equal  : " << string1.value << "|   And   |" << string2.value << "    Is 1(true)/0(false)  : "
	//	<< string1.equalTo(string1.value, string2.value) << endl;

	//cout << "Is Equal  : " << string1.value << "|   And   |" << string2.value << "    Is 1(true)/0(false)  : "
	//	<< string1.equalTo(string2.value) << endl;


	//cout << "Is Equal Ignore Case :  " << string1.value << "|   And   |" << string2.value << "    Is 1(true)/0(false)  : "
	//	<< string1.equalToIgnoreCase(string1.value, string2.value) << endl;

	//cout << "Is Equal Ignore Case : " << string1.value << "|   And   |" << string2.value << "    Is 1(true)/0(false)  : "
	//	<< string1.equalToIgnoreCase(string2.value) << endl;

	//cout << "Compare " << string1.value << "|   And   |" << string2.value << "    Is 1(true)/0(false)  : "
	//	<< string1.stringCompare(string1.value, string2.value) << endl;

	//cout << "\nCompare " << string1.value << "|   And   |" << string2.value << "    Is 1(true)/0(false)  : "
	//	<< string1.stringCompare(string1.value, string2.value) << endl;



	//cout << "\nCompare " << string1.value << "|   And   |" << text << "    Is 1(true)/0(false)  : "
	//	<< string1.stringCompare(text) << endl;

	//cout << "\nCompare Object " << &string1 << "|   And   |" << &string2 << "    Is 1(true)/0(false)  : "
	//	<< string1.compareObjects(string1,string2) << endl;


	//cout << "\nCompare Object " << &string1 << "|   And   |" << &string2 << "    Is 1(true)/0(false)  : "
	//	<< string1.compareObjects(string1) << endl;


	//cout << "\nCompare Object " << &string1 << "|   And   |" << &string2 << "    Is 1(true)/0(false)  : "
	//	<< string1.compareObjects(string2) << endl;

	//cout << "\nCompare My Custom String Objects Values : \n" 
	//	<< string1.value << "|   And   |" << text << "    Is 1(true)/0(false)  : "
	//	<< string1.compareStringObjects(string1, string2) << endl;

	//cout << "\nCompare My Custom String Objects Values : \n"
	//	<< string1.value << "|   And   |" << string2.value << "    Is 1(true)/0(false)  : "
	//	<< string1.compareStringObjects(string1) << endl;

	//cout << "\nCompare My Custom String Objects Values : \n"
	//	<< string1.value << "|   And   |" << string2.value << "    Is 1(true)/0(false)  : "
	//	<< string1.compareStringObjects(string2) << endl;

	//cout << "Capital Letter Counters : " << string1.countCapitalLetters() << endl;
	//cout << "Capital Letter Counters Via static function member : " 
	//	<< MyString::countCapitalLetters("Mohammed Abdu Salem Almislaty") << endl;

	//cout << "Small Letter Counters : " << string1.countSmallLetters() << endl;
	//cout << "Small Letter Counters Via static function member : "
	//	<< MyString::countSmallLetters("Mohammed Abdu Salem Almislaty") << endl;

	//cout << "Number string Counters : " << string1.countNumbers() << endl;
	//cout << "Number string  Counters Via static function member : "
	//	<< MyString::countNumbers("MohammedAlmislati99@gmail.com") << endl;

	//cout << "Punctuation  Counters : " << string1.countPunctuationSymbols() << endl;
	//cout << "Punctuation  Counters Via static function member : "
	//	<< MyString::countPunctuationSymbols("MohammedAlmislati99@gmail.com") << endl;

	//cout << "Find Letter 'a' Position : " << string1.findLetterFirstPos("a") << endl;

	//cout << "Find Letter 'a' Last Postition : " << string1.findLetterLastPos("a") << endl;

	//cout << "Position 9 in String is : " << string1.charPosition(9) << endl;
	//cout << "Position 18 in String is : " << string1.charPosition(18) << endl;

	//cout << "Name : " << string1.value << endl;

	//cout << "Number Of Words  : " << string1.countWords() << endl;

	//cout << "Number Of Words  : " << MyString::countWords("Mohammed Abdualrazag Salem Almislaty") << endl;

	//cout << "Upper Case Words   :    " << string1.toUpperCase() << endl;

	//cout << "Upper Case Words static function member   :    "
	//	<< MyString::toUpperCase("Mohammed abdualrazag salem almislaty") << endl;

	//
	//cout << "Upper Case Words   :    " << string1.toLowerCase() << endl;

	//cout << "Upper Case Words static function member   :    "
	//	<< MyString::toLowerCase("Mohammed Abdualrazag SalEm AlmIslaty") << endl;


	//cout << "Invert Case String   :    " << string1.invertString() << endl;

	//cout << "Invert Case String by static function member   :    "
	//	<< MyString::invertString("Mohammed Abdualrazag SalEm AlmIslaty") << endl;

	//cout << "Substr string : " << string1.mySubstr(5, 13) << endl;
	//cout << "Substr string : " << string1.mySubstr(5, 18) << endl;

	//cout << "Custom length : " << string1.customLength("Mohammed Almislaty") << endl;

	//string koko = "Hello world";
	//cout << "Custom length : " << string1.customLength(koko) << endl;
	//cout << "Custom Length : " << string1.customLength() << endl;

	//cout << "Upper Case First Letter Of Every Word By static function member    : " 
	//	<< string1.firstLetterWordUpperCase("mohammed abdualrazag salem almislaty") << endl;
	//cout << "Upper Case First Letter Of Every Word : " << string1.firstLetterWordUpperCase() << endl;


	//cout << "Lower Case First Letter Of Every Word By static function member    : "
	//	<< string1.firstLetterWordLowerCase("Mohammed Abdualrazag Salem Almislaty") << endl;
	//cout << "Lower Case First Letter Of Every Word : " << string1.firstLetterWordLowerCase() << endl;

	//cout << "Substr String by static function member   : " 
	//	<< MyString::mySubstr("Mohammed Almsialty", 8, 10) << endl;

	////string test = "                                                      Mohammed Almislaty";

	//cout << "Trim Right via static function member : " 
	//	<< MyString::trimRight("                      Mohammed Almislaty") << endl;
	//cout << "Trim Right  : " << string1.trimRight("                        Mohammed Almislaty") << endl;
	//cout << "Trim Right  : " << string1.trimRight() << endl;

	//cout << "Trim Left  via static function member : "
	//	<< MyString::trimLeft("Mohammed Almislaty                ") << endl;
	//cout << "Trim Left   : " << string1.trimLeft() << endl;

	//cout << "Trim All    via static function member : " 
	//	<< MyString::trimAll("                 MOhammed                ") << endl;
	//cout << "Trim All   : " << string1.trimAll() << endl;

	//string testable = "Mohammed Almislaty";
	//cout << "Erase Via Static Method Member Test : " << MyString::eraseStr(testable, 0, 8) << endl;
	//cout << "Erase Via Static Method Member Test : " << string1.eraseStr( 8, 18) << endl;

	//cout << "Testing split " << endl;
	//vector <string> vTest = string1.splitString(testable, " ");

	//for (string test : vTest) 
	//{
	//	cout << test << endl;
	//}

	//vTest.clear();

	//cout << endl << endl;
	//vTest = MyString::splitString("Mohammed Abdu Salem Almislaty", " ");

	//for (string test : vTest)
	//{
	//	cout << test << endl;
	//}

	//cout << "Test Join String : " << MyString::joinString(vTest, " ") << endl;

	//vTest.clear();

	//cout << endl << endl;
	//vTest = string1.splitString(" ");

	//for (string test : vTest)
	//{
	//	cout << test << endl;
	//}


	//cout << "Test Join String " << string1.joinString(vTest, " ") << endl;
	//

	//vTest.clear();

	//cout << endl << endl;
	//vTest = string1.splitString(" ");

	//for (string test : vTest)
	//{
	//	cout << test << endl;
	//}


	//cout << "Test Join String " << string1.joinString( " ") << endl;

	//cout << "Testing done it's work\n";

	system("pause > 0");


	return 0;
}