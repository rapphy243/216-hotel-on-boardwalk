#include <string>
#include "LLNode.hpp"

class Board {
private:
    LLNode<std::string>* head;
    LLNode<std::string>* current;
public:
    Board();
    void move(int spaces);
    std::string getCurrentSpace() const;
    void printBoard();
};
