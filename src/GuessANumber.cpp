#include "../include/GuessANumber.h"
#include <iostream>
#include <string>

namespace Week1 {


	void HelloFromOtherNamespace() {
		std::cout << "Hello from a different namespace\n";
	}

	void GuessANumber() {


		std::cout << "Welcome to the 'Numerical Guessing Game'!\n\n";
		std::cout << "Please guess a number between 1 and 5. The game terminates when you press 'F'. On successfull guess, the game starts again.\n";

		int randomNr = (rand() % 5) + 1;

		std::string input;
		int guessedNr;

		bool wantsToQuit = false;
		while (!wantsToQuit) {


			std::cout << "Enter a number\n";
			std::cin >> input;


			if (input == "F" || input == "f") {
				return;
			}

			try {
				guessedNr = std::stoi(input);
			}
			catch (std::exception&) {
				std::cout << "Invalid input! Please enter a number or 'F'.\n";
				continue;
			}

			if (guessedNr < randomNr) {
				std::cout << input << " was not the right number. The correct number is greater than " << input << '\n';
			}
			else if (guessedNr > randomNr) {
				std::cout << input << " was not the right number. The correct number is less than " << input << '\n';
			}
			else {
				std::cout << guessedNr << " IS THE CORRECT NUMBER! CONGRATS!\n\n";
				std::cout << guessedNr << " We go again. The game continues untill you enter 'F'\n";
				randomNr = (rand() % 5) + 1;
			}
		}



	}

}
