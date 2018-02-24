//
// Created by luryel on 24/02/18.
//

#ifndef PROGRAMMING2_QUEUE_H
#define PROGRAMMING2_QUEUE_H

#define MAX_SIZE 10

class Queue {

private:

    struct Node {

        int data;
        Node* next;
    };

    Node* head;
    Node* tail;

public:

    Queue();
    bool isEmpty();
    int isFull();
    void Menu();
    void Create(int n);
    void Enqueue(int n);
    void Dequeue(int n);
    void Clear();
    void Display();

};


#endif //PROGRAMMING2_QUEUE_H


























































