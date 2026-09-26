#include <cstdlib>
#include <iostream>
#include "src/Board.hpp"

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed time to rand
    Board monopolyBoard = Board();

    cout << monopolyBoard.getCurrentSpace() << endl; // This should print "Go" to the console

    monopolyBoard.step();

    cout << monopolyBoard.getCurrentSpace() << endl; // This should print "Mediteranean Avenue" to the console

    monopolyBoard.step();
    monopolyBoard.step();
    monopolyBoard.step();

    cout << monopolyBoard.getCurrentSpace() << endl; // This should print "Income Tax" to the console

    for (int i = 0; i < 37; i++){
        monopolyBoard.step();
    }

    cout << monopolyBoard.getCurrentSpace() << endl << endl;

    cout << "Rolling dice..." << endl;
    cout << "You rolled: " << monopolyBoard.rollDice() << endl;
    cout << monopolyBoard.getCurrentSpace() << endl;
    cout << "You rolled: " << monopolyBoard.rollDice() << endl;
    cout << monopolyBoard.getCurrentSpace() << endl;
    cout << "You rolled: " << monopolyBoard.rollDice() << endl;
    cout << monopolyBoard.getCurrentSpace() << endl;
    cout << "You rolled: " << monopolyBoard.rollDice() << endl;
    cout << monopolyBoard.getCurrentSpace() << endl << endl;

    cout << "Printing the board..." << endl;
    monopolyBoard.printBoard();
}
