#pragma once
// ---------------------------------------------------------------
// Programming Assignment:	Course Project
// Developer:			Leah Rieger
// Date Written:		08/29/2019
// Purpose:			Programming Tutorial Program 
// ---------------------------------------------------------------

#pragma once
#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass();

	void mainMenu();
	void selection(string userAnswer);
	void learnVariables();
	void learnInput();
	void learnLoops();
	void learnArray();
	void popQuiz();
	void levelUp(string correctAnswer, string userVariable);
	void testScores(int numberCorrect);
	void endOfProgram(string finalAnswer);

	string getUserName();
	void setUserName(string userName);

	void writeData(string arrayOfStringsToSave[6], string FileName);
	void readData(string FileName);


private:
	string userName;

};

