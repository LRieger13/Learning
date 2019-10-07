// ---------------------------------------------------------------
// Programming Assignment:	Course Project
// Developer:			Leah Rieger
// Date Written:		08/02/2019
// Purpose:				Programming Tutorial Program 
// ---------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

//Function Prototyping
void mainMenu();
void selection(string userAnswer);
void learnVariables();
void learnInput();
void learnLoops();
void popQuiz();
void levelUp(string correctAnswer, string userVariable);
void testScores(int numberCorrect);
void endOfProgram(string finalAnswer);

int main() {
	//Begin the description of the program & what lesson to go to first
	string userName;
	cout << "Good Day! My name is Alan. What is yours? \n";
	std::cin >> userName;
	cout << "Hello " << userName << " & Welcome to your Programming Tutorial!\n";
	cout << "Just remember: to move on press 'Y'\n";
	cout << "____________________________________________________\n";
	cout << "                                                    \n";

	mainMenu();
	return 0;
	system("pause");
}


//Main Menu function - will ask user what part of program they want to complete
void mainMenu() {
	string userAnswer;
	cout << "What lesson would you like start? A) Variable Declaration B) Input / Output C) Pop Quiz! D) Loops OR EXIT\n";
	cout << "Key in A, B, C, D or EXIT for your answer: " << endl;
	std::cin >> userAnswer;
	selection(userAnswer);
}

//Selection function - will go to what function the user has selected
void selection(string userAnswer) {
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
	if (userAnswer == "D")	{
		learnLoops();
	}
	if (userAnswer == "EXIT") {
		mainMenu();
	}
}

//Function to compare users input to correct answer & move onto next chapter of tutorial
void levelUp(string correctAnswer, string userVariable) {
	//loop to continue when entering a wrong answer
	string nextLevel;
	while ((correctAnswer != userVariable))
	{
		cout << "Uhoh!! That's not quite it, let's try again. \n";
		getline(cin, userVariable);
	};

	//Processing, Comparing answers
	if (correctAnswer == userVariable) {
		cout << "WooHoo! Ready for the next one?\n"; // if no & return need to call menu function
		std::cin >> nextLevel;
	}
}


//First function - goes to learning how to declare a variable
//Based on users answer to run the variable declaration program
void learnVariables() {
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
void learnInput() {
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
void learnLoops() {
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
	popQuiz();

}


//Gives the user a pop quiz on the information they have gone over 
void popQuiz() {
	int i, numberCorrect = 0;
	string userTestAnswers[5] = {};
	const string testQuestions[5] = { "Which Line Contains the Variable Declarations?", "Which line is the first place collecting input from the user?", "Which line is the last output?", "How would you get input?", "Which kind of loop executes a line of code before checking the condition?" };
	const string correctTestAnswers[5] = { "1", "5", "6", "cin >>", "do While loops" };

	cout << "1\t int num1, num2, smallestNumber;\\n\"\n";
	cout << "2\t cout << \"Welcome to the smallest number guesser!\\n\"\n";
	cout << "3\t cout << \"Enter 2 numbers and well guess the rest! \\n\"\n";
	cout << "4\t cout << \"First number: \\n\";\n";
	cout << "5\t cin >> \"num1;\n";
	cout << "6\t cout << \"Second number: \\n\";\n";
	cout << "7\t cin >> \"num2;\n";

	cin.ignore();

	for (i = 0; i < 5; i++) {

		cout << testQuestions[i] << " : " << endl;

		getline(cin, userTestAnswers[i]);
		if (userTestAnswers[i] == correctTestAnswers[i]) {
			numberCorrect += 1;
		}
	}

	testScores(numberCorrect);
}


//This one takes user's answers, compares them to the correct answers & grades
void testScores(int numberCorrect) {
	string finalAnswer;
	int finalScore = 0;
	finalScore = (100 / 5) * numberCorrect;

	cout << "Here is your score: " << finalScore << "% \n" << endl;
	cout << "Would you like to try again?\n";
	cin.ignore();
	getline(cin, finalAnswer);

	endOfProgram(finalAnswer);
}

//This wraps up the program & gives option to go back to main menu
void endOfProgram(string finalAnswer) {
	if (finalAnswer == "Y") {
		popQuiz();
	}
	if (finalAnswer != "N") {
		mainMenu();
	}
}
