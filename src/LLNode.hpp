template <typename T>
class LLNode {
private:
   T data;
   LLNode<T>* next;

public:
   LLNode() : data(T()), next(nullptr) {}
   LLNode(T data) : data(data), next(nullptr) {}
   LLNode(T data, LLNode<T>* nextNode) : data(data), next(nextNode) {}

   LLNode<T>* getNext() const {
       return next;
   }
   void setNext(LLNode<T>* nextNode) {
         next = nextNode;
   }

   T getData() const {
       return data;
   }
   void setData(T newData) {
       data = newData;
   }
};
