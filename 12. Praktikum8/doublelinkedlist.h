#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include <iostream>

class DoubleLinkedList {

private:

    struct Node {

        int data;
        Node* next;
        Node* prev;
    };

    Node* head;
    Node* tail;

    static int size;

    bool isEmpty() const;
    int getSize() const;

public:

    DoubleLinkedList();
    void menu();
    void addFirst(int);
    void addLast(int);
    void addPosition(int, int);
    void deleteFirst();
    void deleteLast();
    void deletePosition(int);
    void clear();
    void isDataEmpty();
    void display();
};

#endif // DOUBLELINKEDLIST_H
































