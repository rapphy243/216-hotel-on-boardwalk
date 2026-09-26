#include <string>
#include <iostream>
#include <vector>
#include "Board.hpp"

const std::vector<std::string> names = {
    "Go",
    "Mediterranean Avenue",
    "Community Chest",
    "Baltic Avenue",
    "Income Tax",
    "Reading Railroad",
    "Oriental Avenue",
    "Chance",
    "Vermont Avenue",
    "Connecticut Avenue",
    "Jail (Just Visiting)",
    "St. Charles Place",
    "Electric Company",
    "States Avenue",
    "Virginia Avenue",
    "Pennsylvania Railroad",
    "St. James Place",
    "Community Chest",
    "Tennessee Avenue",
    "New York Avenue",
    "Free Parking",
    "Kentucky Avenue",
    "Chance",
    "Indiana Avenue",
    "Illinois Avenue",
    "B&O Railroad",
    "Atlantic Avenue",
    "Ventnor Avenue",
    "Water Works",
    "Marvin Gardens",
    "Go to Jail",
    "Pacific Avenue",
    "North Carolina Avenue",
    "Community Chest",
    "Pennsylvania Avenue",
    "Short Line Railroad",
    "Chance",
    "Park Place",
    "Luxury Tax",
    "Boardwalk"
};

Board::Board() {
    list = new LList<std::string>();
    for (int i = 0 ; i < names.size(); ++i) {
        list->insert(names[i]);
    }
    current = list->getStart();
}

void Board::step() {
    step(1);
}

void Board::step(int spaces) {
    for (int i = 0; i < spaces; ++i) {
        current = current->getNext();
    }
}

int Board::rollDice() {
     int roll = 0;
     for (int i = 0; i < 2; ++i) {
         roll += (rand() % 6) + 1;
     }
     step(roll);
     return roll;
}

std::string Board::getCurrentSpace() const {
    return current->getData();
}

void Board::printBoard() {
    LLNode<std::string>* temp = list->getStart();
    std::cout << temp->getData();
    if (temp == current) {
            std::cout << " <-- Your Current Position";
        }
    std::cout << std::endl;
    
    temp = temp->getNext();
    while (temp != list->getStart()) {
        std::cout << temp->getData();
        if (temp == current) {
            std::cout << " <-- Your Current Position";
        }
        std::cout << std::endl;

        temp = temp->getNext();
    }
}
