//
// Created by teodor.fredriksson on 2026-02-26.
//

#include "../../include/menu/menu.h"

#include <iostream>

void DisplayMainMenu() {
    int choice;

    // ASCII Welcome Banner
    std::cout << "====================================\n";
    std::cout << "||                                ||\n";
    std::cout << "||   WELCOME TO CLion Snakes      ||\n";
    std::cout << "||                                ||\n";
    std::cout << "====================================\n\n";

    std::cout << "Please choose an option:\n";
    std::cout << "1. Start Game\n";
    std::cout << "2. Quit\n";

    bool undecided = true;
    while (undecided) {
        std::cout << "Enter a number: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Starting game...";
                undecided = false;
                break;
            case 2: std::cout << "Exiting game...";
                undecided = false;
                break;
            default: std::cout << "Invalid choice!\n";
        }
    }
}
