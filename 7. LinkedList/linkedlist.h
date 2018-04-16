#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class LinkedList {

private:

    struct Node {

        std::string name;
        std::string nim;

        Node* next;
    };

    Node* head;
    Node* tail;

    void clearList();

public:

    LinkedList();
    ~LinkedList();
    bool isEmpty();
    void addFirst(std::string name, std::string nim);
    void addLast(std::string name, std::string nim);
    void deleteFirst();
    void deleteLast();
    void display();
};

#endif // LINKEDLIST_H



























