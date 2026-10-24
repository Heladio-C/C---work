#include <iostream>
#include <stack>
#include <stdexcept>

// Simple Stack implementation wrapper for testing
template <typename T>
class Stack {
private:
    std::stack<T> s;
public:
    void push(T val) { s.push(val); }
    void pop() { if (!s.empty()) s.pop(); }
    T peek() { return s.top(); }
    bool isEmpty() { return s.empty(); }
};

template <typename T>
class MyQueue {
private:
    Stack<T> stackIn;
    Stack<T> stackOut;

    void transferIfEmpty() {
        if (stackOut.isEmpty()) {
            while (!stackIn.isEmpty()) {
                stackOut.push(stackIn.peek());
                stackIn.pop();
            }
        }
    }

public:
    void enqueue(T x) {
        stackIn.push(x);
    }

    T dequeue() {
        transferIfEmpty();
        if (stackOut.isEmpty()) {
            throw std::runtime_error("Cannot dequeue: Queue is empty");
        }
        T frontElement = stackOut.peek();
        stackOut.pop();
        return frontElement;
    }

    T peek() {
        transferIfEmpty();
        if (stackOut.isEmpty()) {
            throw std::runtime_error("Cannot peek: Queue is empty");
        }
        return stackOut.peek();
    }

    bool isEmpty() {
        return stackIn.isEmpty() && stackOut.isEmpty();
    }
};

int main() {
    MyQueue<int> q;

    std::cout << "1. enqueue(10)" << std::endl;
    q.enqueue(10); //[cite: 3]

    std::cout << "2. enqueue(20)" << std::endl;
    q.enqueue(20); //[cite: 3]

    std::cout << "3. enqueue(30)" << std::endl;
    q.enqueue(30); //[cite: 3]

    std::cout << "4. peek() -> Should return 10. Actual: " << q.peek() << std::endl; //[cite: 3]

    std::cout << "5. dequeue() -> Returns 10. Actual: " << q.dequeue() << std::endl; //[cite: 3]

    std::cout << "6. peek() -> Should return 20. Actual: " << q.peek() << std::endl; //[cite: 3]

    std::cout << "7. dequeue() -> Returns 20. Actual: " << q.dequeue() << std::endl; //[cite: 3]

    std::cout << "8. enqueue(40)" << std::endl;
    q.enqueue(40); //[cite: 3]

    std::cout << "9. enqueue(50)" << std::endl;
    q.enqueue(50); //[cite: 3]

    std::cout << "10. peek() -> Should return 30. Actual: " << q.peek() << std::endl; //[cite: 3]

    std::cout << "11. dequeue() -> Returns 30. Actual: " << q.dequeue() << std::endl; //[cite: 3]

    std::cout << "12. enqueue(60)" << std::endl;
    q.enqueue(60); //[cite: 3]

    std::cout << "13. dequeue() -> Returns 40. Actual: " << q.dequeue() << std::endl; //[cite: 3]

    std::cout << "14. peek() -> Should return 50. Actual: " << q.peek() << std::endl; //[cite: 3]

    return 0;
}