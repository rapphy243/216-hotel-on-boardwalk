#include <string>
#include "LLNode.hpp"
#include "LList.hpp"

class Board {
private:
    LList<std::string>* list;
    LLNode<std::string>* current;
public:
    Board();
    void step();
    void step(int spaces);
    int rollDice();
    std::string getCurrentSpace() const;
    void printBoard();
};
