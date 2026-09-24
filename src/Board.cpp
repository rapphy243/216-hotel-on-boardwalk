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
    head = new LLNode<std::string>(names[0]);
    LLNode<std::string>* temp = head;
    for (int i = 1; i < names.size(); ++i) {
        temp->setNext(new LLNode<std::string>(names[i]));
        temp = temp->getNext();
    }
    temp->setNext(head);
    current = head;
}

void Board::move(int spaces) {
    for (int i = 0; i < spaces; ++i) {
        current = current->getNext();
    }
}

std::string Board::getCurrentSpace() const {
    return current->getData();
}

void Board::printBoard() {
    LLNode<std::string>* temp = head;
    std::cout << temp->getData();
    if (temp == current) {
            std::cout << " <-- Your Current Position";
        }
    std::cout << std::endl;
    
    temp = temp->getNext();
    while (temp != head) {
        std::cout << temp->getData();
        if (temp == current) {
            std::cout << " <-- Your Current Position";
        }
        std::cout << std::endl;

        temp = temp->getNext();
    }
}
