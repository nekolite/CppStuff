#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <iomanip>
#include <list>
#include <algorithm>

class Queue {

private:

    struct Node {

        std::string name;
        std::string number;
        Node* next;
    };

    Node* head;
    Node* tail;

    static int size;

    int getSize();
    void sort(Node*);

public:

    Queue();

    void menu();
    bool isEmpty();
    void addData(std::string, std::string);
    void search(std::string);
    void deleteContact(int);
    void display();
};

#endif // QUEUE_H







































