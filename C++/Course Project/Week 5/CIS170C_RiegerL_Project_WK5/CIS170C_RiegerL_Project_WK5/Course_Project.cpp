// ---------------------------------------------------------------
// Programming Assignment:	Course Project
// Developer:			Leah Rieger
// Date Written:		08/17/2019
// Purpose:				Programming Tutorial Program 
// ---------------------------------------------------------------

#include <iostream>
#include "Project.h"
#include <string>

MyClass::MyClass() {
	//Begin the description of the program & what lesson to go to first
	string userName;
	cout << "Good Day! My name is Alan. What is yours? \n";
	std::cin >> userName;
	setUserName(userName);
	cout << "Hello " << userName << " & Welcome to your Programming Tutorial!\n";
	cout << "Just remember: to move on press 'Y'\n";
	cout << "____________________________________________________\n";
	cout << "                                                    \n";
}

string MyClass::getUserName() {
	return userName;
}

void MyClass::setUserName(string userName1) {
	userName = userName1;
}


//Main Menu function - will ask user what part of program they want to complete
void MyClass::mainMenu() {
	string userAnswer;
	cout << "What lesson would you like start? A) Variable Declaration B) Input / Output C) Pop Quiz! D) Loops E) Arrays OR EXIT\n";
	cout << "Key in A, B, C, D, E or EXIT for your answer: " << endl;
	std::cin >> userAnswer;
	selection(userAnswer);
}

//Selection function - will go to what function the user has selected
void MyClass::selection(string userAnswer) {
	//if usr a\b\c execute function 
	if (userAnswer == "A") {
		learnVariables();
	}
	if (userAnswer == "B") {
		learnInput();
	}
	if (userAnswer == "C") {
		popQuiz();
	}
	if (userAnswer == "D") {
		learnLoops();
	}
	if (userAnswer == "E") {
		learnArray();
	}
	if (userAnswer == "EXIT") {
		mainMenu();
	}
}

//Function to compare users input to correct answer & move onto next chapter of tutorial
void MyClass::levelUp(string correctAnswer, string userVariable) {
	//loop to continue when entering a wrong answer
	string nextLevel;
	while ((correctAnswer != userVariable))
	{
		cout << "Uhoh!! That's not quite it, let's try again. \n";
		std::getline(cin, userVariable);
	};

	//Processing, Comparing answers
	if (correctAnswer == userVariable) {
		cout << "WooHoo! Ready for the next one?\n"; // if no & return need to call menu function
		std::cin >> nextLevel;
	}
}


//First function - goes to learning how to declare a variable
//Based on users answer to run the variable declaration program
void MyClass::learnVariables() {
	const string correctAnswer = "string userName;";
	string userVariable;

	cout << "                                     \n";
	cout << "Declaring Variables Lesson\n";
	cout << "                                     \n";
	cout << "To start every program you have to declare your variables!\n";
	cout << "You have to know your data type, variable name & what you might need your variable set to.\n";
	cout << "In the end, it could look something like this: \t string userName; \n";
	cout << "Why don't you try writing that out?\n";
	// A new line character(/n) keeps getting inserted into cin and continuing past the getline (because of a bug where std::cin >> leaves a /n in the cin buffer). 
	// We use Ignore to clear any previous input.
	cin.ignore();
	// Get line allows free entry of text up to a delimiter. If one is not specified it defaults to /n. 
	getline(cin, userVariable);

	levelUp(correctAnswer, userVariable);
	learnInput();
}

//Learning how to take input from a user and how to print your output
void MyClass::learnInput() {
	const string correctInput = "cin", correctOutput = "cout";
	string userInput;


	cout << "Basic programming is the ability to accept input and print some output!\n";
	cout << "You remember how you gave me your name, and then I printed it out on the screen?\n";
	cout << "Here is an example of the code behind the process: \n";
	cout << "                                                    \n";
	cout << "string userName; \\n\n";
	printf(" \"What is your name?\"\n\n");
	cout << "std::cin >> userName;\\n\n";
	printf(" cout << \"Hello \" << userName << \" to your Programming Tutorial!\" \\n\";\"\n");
	cout << "                                               \n";
	cout << "_____________________________________________\n";
	cout << "Do you know which one is responsible for receiving input from the user? \n";

	cin.ignore();
	getline(cin, userInput);

	levelUp(correctInput, userInput);
	learnLoops();

}


//user learns the different types of loops
void MyClass::learnLoops() {
	string loopAnswer;
	const string correctLoop = "do While loops";

	cout << "Welcome to your Loop lesson!\n";
	cout << "There are 3 different types of loops that you can use. They are called: \n";

	cout << "                                      \n";
	cout << "For loops \n";
	cout << "for (i = 1; i <= 10; i++) { \n";
	cout << "printf(\"Hello World\"\); \n";
	cout << "} \n";

	cout << "                                      \n";
	cout << "While loops \n";
	cout << "while (i <= 10) { \n";
	cout << "printf (\"Hello World\"\); \n";
	cout << " // update expression \n";
	cout << "i++; \n";
	cout << "} \n";

	cout << "                                      \n";
	cout << "do While loops \n";
	cout << "do { \n";
	cout << "// loop body \n";
	cout << "printf (\"Hello World\"\); \n";
	cout << "// update expression";
	cout << "i++; \n";
	cout << "} while (i < 1); //test expression \n";

	cout << "If you wanted to test your conditions before your code is executed, what kind of loop would you use? \n";
	cin.ignore();
	getline(cin, loopAnswer);

	levelUp(correctLoop, loopAnswer);
	learnArray();

}



//Getting Familiar with Arrays.
void MyClass::learnArray() {
	const string correctInput = "catNames[3] = {};";
	string userInput;


	cout << "Now you've got a chance to group together elements of information.\n";
	cout << "Like if you wanted to put a program together to randomly draw a name out of your\n";
	cout << "Top 3 favorite cat names for your new pet.\n";
	cout << "                                                    \n";
	cout << "These are what you call Arrays!";
	cout << "                                                    \n";
	cout << "                                               \n";
	cout << "void main()  { \n";
	cout << "\t string catNames[3] = {};\n";
	cout << "}\n";
	cout << "                                               \n";
	cout << "                                               \n";
	cout << "_____________________________________________\n";
	cout << "                                               \n";
	cout << "Inside the brackets {} of the array, you put the elements that you are grouping together in double quotes, separating them with ','.\n";
	cout << "                                               \n";
	cout << "Give it a shot & try writing out the empty array: \n";
	cout << "                                                  \n";


	cin.ignore();
	getline(cin, userInput);

	levelUp(correctInput, userInput);
	popQuiz();

}



//Gives the user a pop quiz on the information they have gone over 
void MyClass::popQuiz() {
	int i, numberCorrect = 0;
	string userTestAnswers[6] = {};
	const string testQuestions[6] = { "Which Line Contains the Variable Declarations?", "Which line is the first place collecting input from the user?", "Which line is the last output?", "Which is the command for get input?", "Which kind of loop executes a line of code before checking the condition?", "How would you write an empty array for 3 names?" };
	const string correctTestAnswers[6] = { "1", "5", "6", "cin", "do While", "names[3] = {};" };

	cout << "\tPOP QUIZ TIME\n";
	cout << "                                       \n";
	cout << "                                       \n";
	cout << "Examine the chunk of code & answer the following questions.\n";
	cout << "                                               \n";
	cout << "                                               \n";
	cout << "1\t int num1, num2, smallestNumber;\\n\"\n";
	cout << "2\t cout << \"Welcome to the smallest number guesser!\\n\"\n";
	cout << "3\t cout << \"Enter 2 numbers and well guess the rest! \\n\"\n";
	cout << "4\t cout << \"First number: \\n\";\n";
	cout << "5\t cin >> \"num1;\n";
	cout << "6\t cout << \"Second number: \\n\";\n";
	cout << "7\t cin >> \"num2;\n";

	cin.ignore();

	for (i = 0; i < 6; i++) {

		cout << testQuestions[i] << " : " << endl;

		getline(cin, userTestAnswers[i]);
		if (userTestAnswers[i] == correctTestAnswers[i]) {
			numberCorrect += 1;
		}
	}

	testScores(numberCorrect);
}


//This one takes user's answers, compares them to the correct answers & grades
void MyClass::testScores(int numberCorrect) {
	string finalAnswer;
	int finalScore = 0;
	finalScore = (100 / 6) * numberCorrect;

	cout << "Here is your score: " << finalScore << "% \n" << endl;
	cout << "Would you like to try again?\n";
	cin.ignore();
	getline(cin, finalAnswer);

	endOfProgram(finalAnswer);
}

//This wraps up the program & gives option to go back to main menu
void MyClass::endOfProgram(string finalAnswer) {
	if (finalAnswer == "Y") {
		popQuiz();
	}
	if (finalAnswer != "N") {
		mainMenu();
	}
}