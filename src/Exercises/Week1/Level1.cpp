#include "../include/Exercises/Week1/Level1.h"
#include <iostream>
#include <conio.h>
#include <ctype.h>

using namespace std;

namespace Week1 {
    // 6. Single-character command: ask for a command p/h/q. If invalid, print “Invalid command”.
    void SingleCharCommand() {
        char input;
        char play = 'p';
        char help = 'h';
        char quit = 'q';

        do {
            cout << "Please enter one of the characters 'p', 'h', or 'q' in order to progress.\n";
            cin >> input;
        } while (input != play && input != quit && input != help);

        switch (input) {
            case 'p':
                cout << "You pressed " << play;
                break;
            case 'h':
                cout << "You pressed " << help;
                break;
            case 'q':
                cout << "You pressed " << quit;
                break;
            default:
                cout << "You entered an invalid command.";
        }
    }

    // 7. Simple menu: show options 1–3, read an int choice, use a switch.
    void ShowMainMenu() {
        cout << "Please choose an option below\n";

        cout << "1. Start Game\n";
        cout << "2. Show Help\n";
        cout << "3. Quit Console\n";

        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Starting game..\n";
                break;
            case 2:
                cout << "Showing help..\n";
                break;
            case 3:
                cout << "Quitting game..\n";
                break;
            default:
                cout << "You entered an invalid choice.\n";
        }
    }

    // 8. Yes/no input: read a char y/n and loop until valid.
    void ReadSingleCharInput() {
        int ch;

        do {
            cout << "Please enter a character (y/n). y for yes, and n for no: ";
            ch = _getch();
            ch = toupper(ch);
            cout << endl;
        } while (ch != 'Y' && ch != 'N');

        cout << "You entered: " << static_cast<char>(ch) << endl;
    }

    // 9. Guessing game: secret number = 7. Ask for guesses until correct. Count attempts.
    void GuessMyNumber() {
        int constexpr secretNumber = 7;
        int guessedNumber;
        int attempts = 1;

        cout << "Welcome to the 'Numbers Game'!\n";
        cout << "Enter a number between 1 and 10.\n";
        cin >> guessedNumber;

        if (guessedNumber == secretNumber) {
            cout << "You guessed " << guessedNumber << ", WHICH IS CORRECT! HOORAY!\n";
        } else {
            do {
                if (guessedNumber < secretNumber) {
                    cout << "You guessed " << guessedNumber << ". The secret number is MORE than that!\n";
                } else {
                    cout << "You guessed " << guessedNumber << ". The number is LESS than that!\n";
                }

                cin >> guessedNumber;
                attempts++;
            } while (guessedNumber != secretNumber);
        }

        cout << "You guessed the number " << guessedNumber << "!\n";
        cout << "It took you: " << attempts << " attempts!\n";
    }


    void Level1() {
        // Using Level1 to encapsulate forward declarations of this source file
        SingleCharCommand();
        ShowMainMenu();
        ReadSingleCharInput();
        GuessMyNumber();
    }
}
