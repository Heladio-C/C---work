#include <vector>


template <typename T> 

class LinkedList{

    public:
    void enqueue(const T& item){
        Node* newNode = new Node(item);

        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;

        while (current -> next != nullptr){
            current = current -> next;
        }

        current -> next = newNode;
    }

    T dequeue(){
        
        Node* temp = head;

        T val = temp -> data;
        head = head -> next;
        delete temp;
        return val;
    }

    private:
     struct Node{
        T data;
        Node* next;
        Node(T vale) : data(val), next(nullptr) {}
     };
     Node* head = nullptr;

};