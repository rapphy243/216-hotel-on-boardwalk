template <typename T>
class LList {
private:
   LLNode<T>* start;
   LLNode<T> *end;

   public:
   LList() : start(nullptr), end(nullptr) {}

   bool isEmpty() const {
       return start == nullptr;
   }

   int size() const {
    if (isEmpty()) {
        return 0;
    }

    int count = 0;
    LLNode<T>* current = start;
    count++;
    current = current->getNext();
    while (current != start) {
        count++;
        current = current->getNext();
    }

    return count;
}

   void insert(T data) {
    LLNode<T>* newNode = new LLNode<T>(data);

    if (isEmpty()) {
        start = newNode;
        end = newNode;
        end->setNext(start);
    } else {
        newNode->setNext(start);
        end->setNext(newNode);
        end = newNode;
    }
}

    LLNode<T>* getStart() {
         return start;
    }

    LLNode<T>* getEnd() {
         return end;
    }

};
