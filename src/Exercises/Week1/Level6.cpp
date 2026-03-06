#include "../../../include/Exercises/Week1/Level6.h"

#include <conio.h>
#include <vector>
#include <iostream>

#include "Exercises/Week1/Level5.h"

using namespace std;

namespace Week1::LevelSix {
    void ShowMainMenu();
    void ShowHelpMenu();
    void QuitGame();
    void StartSnake();

    enum GameState {
        Menu,
        Help,
        Play,
        Quit
    };

    GameState gameState = Menu;
    bool isRunning = true;

    void RunBasicSnake() {
        do {
            switch (gameState) {
                case Menu:
                    ShowMainMenu();
                    break;
                case Help:
                    ShowHelpMenu();
                    break;
                case Play:
                    StartSnake();
                    break;
                case Quit:
                    QuitGame();
                    break;
            }
        } while (isRunning);
    }

    void StartSnake() {
        Week1::LevelFive::GridGenerator(0,0);
        Week1::LevelFive::GetInput();
    }

    void ShowMainMenu() {
        system("cls");

        cout << "Please choose an option below\n\n";
        cout << "1. Start Game\n";
        cout << "2. Show Help\n";
        cout << "3. Quit Console\n";

        while (gameState == Menu) {
            char choice = _getch();

            switch (choice) {
                case '1':
                    gameState = Play;
                    return;

                case '2':
                    gameState = Help;
                    return;

                case '3':
                    gameState = Quit;
                    return;

                default:
                    system("cls");
                    return;
            }
        }
    }

    void ShowHelpMenu() {
        system("cls");

        cout << "Keyboard Controls\n";

        cout << "W - Move Up\n";
        cout << "A - Move Left\n";
        cout << "S - Move Down\n";
        cout << "D - Move Right\n";
        cout << endl;
        cout << "Q - Quit Game\n";
        cout << endl;
        cout << "1. - Back to Main Menu\n";

        int choice;

        do {
            choice = _getch();

            switch (choice) {
                case '1':
                    gameState = Menu;
                    break;
                case 'q':
                    gameState = Quit;
                    break;
                default:
                    cout << "Press '1' to return to Main Menu\n";
            }
        } while (choice != 'q' && choice != '1');
    }

    void QuitGame() {
        isRunning = false;
    }
}
