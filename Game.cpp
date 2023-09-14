// Normal Includes
#include <iostream>
#include <string>

// Game Includes
#include "Colors.hpp"
#include "Player.hpp"
#include "Map.hpp"

int main() {
    char CurrentInput;
    std::cout << Colors::RED << Player::Sprite << Colors::RESET << std::endl;

    while(true) {
        // Game Loop
        Player::X = 0;
        Player::Y = 0;

        for(int i1 = 0; i1 < 5; ++i1) {
            for(int i2 = 0; i2 < 6; ++i2) {
                std::cout << Map::Map[i1][i2];
            }
        }

        if(Player::Y == 0)
            break;
    }

    return EXIT_SUCCESS;
}