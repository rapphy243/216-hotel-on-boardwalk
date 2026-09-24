template <typename T>
class LLNode {
private:
   T data;
   LLNode<T>* next;

public:
   LLNode() : data(T()), next(nullptr) {}
   LLNode(T data) : data(data), next(nullptr) {}
   LLNode(T data, LLNode<T>* nextNode) : data(data), next(nextNode) {}

   LLNode<T>* getNext() const;
   void setNext(LLNode<T>* nextNode);
   T getData() const;
   void setData(T newData);
};
