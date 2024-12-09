// Stack implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>

template <typename T>
class ArrayStack {
private:
    T* stack;
    int top;
    int size;

public:
    ArrayStack(int size) : size(size) {
        stack = new T[size];
        top = -1;
    }

    ~ArrayStack() {
        delete[] stack;
    }

    void push(T item) {
        if (top == size - 1) {
            throw std::out_of_range("Stack is full");
        }
        stack[++top] = item;
    }

    T pop() {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty");
        }
        T item = stack[top];
        stack[top--] = T();
        return item;
    }

    T peek() {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty");
        }
        return stack[top];
    }

    bool isEmpty() {
        return top == -1;
    }

};

template <typename T>
class LinkedListStack {
private:
    struct Node {
        T data;
        Node* next;
    };

    Node* top;

public:
    LinkedListStack() : top(nullptr) {}

    ~LinkedListStack() {
        while (top) {
            Node* oldTop = top;
            top = top->next;
            delete oldTop;
        }
    }

    void push(T item) {
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = top;
        top = newNode;
    }

    T pop() {
        if (!top) {
            throw std::out_of_range("Stack is empty");
        }
        Node* oldTop = top;
        top = top->next;
        T oldTopData = oldTop->data;
        delete oldTop;
        return oldTopData;
    }

    T peek() {
        if (!top) {
            throw std::out_of_range("Stack is empty");
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
