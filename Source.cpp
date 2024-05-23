#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype>

#include "words.cpp";


using namespace std;


//for avoiding case sensitivity
string toLowercase(const string& str) {
	string result;
	for (char c : str) {
		result += tolower(c);
	}
	return result;
}

int main() {

	Words word;
	string randomWord = word.WordsList();
	string Userinput;

	int attempts = 0;
	//setting attempts limit
	const int maxAttempts = 3;

	
	cout << endl;
	cout << "\t\t\t\t\t\t" << "<<< Word Guess Game >>>" << endl;
	cout << "\t\t\t\t\t" << "Welcome to the Word Guessing Game!" << endl;

	cout << "\t\t\t\t" << "------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "Guess the word from the following options:" << endl;
	cout << "\t\t\t\t" << "Sky, Rose, Petal, Sorrow, Rain, Cry, Enjoy, Hell, Happy, Toy" << endl;
	cout << "\t\t\t\t" << "------------------------------------------------------------" << endl;


	while (true) {
		
		//for asking user to mention guess
		cout << "guess the word: ";
		cin >> Userinput;
		attempts++;


		if (toLowercase(Userinput) == toLowercase(randomWord)) {
			cout << "Congratulations! Your guess is correct" << endl;
			break;
	
		}
		else {
			cout << "Incorrect guess. Try again!" << endl;
			cout << "Attempts remaining: " << maxAttempts - attempts << endl;
			cout << "---------------------------------------" << endl;

		}

		//lossing condition
		if (attempts == maxAttempts) {
			cout << "You loss the game" << endl;
			cout << "The word was " <<"'"<< randomWord << "'"<< " " << endl;
			break;
		}
	}


	

	return 0;
}

