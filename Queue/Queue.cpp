//
// Created by luryel on 24/02/18.
//

#include <iostream>
#include "Queue.h"

/* head and tail = null */

Queue::Queue() {

    head = nullptr;
    tail = nullptr;
}

/* isEmpty, null atau tidak */

bool Queue::isEmpty() {

    bool isTrue;

    isTrue = head == nullptr;

    return isTrue;
}

/* isFull, data penuh atau tidak */

int Queue::isFull() {

    int total = 0;

    Node* temp;

    temp = head;

    while (temp != nullptr) {

        total++;
        temp = temp->next;
    }

    return total;
}

/* menu */

void Queue::Menu() {

    std::cout << "\n--------------------------------------------------------------------------------" << std::endl;
    std::cout << "\t\t\t\tQueue Program Demo" << std::endl;
    std::cout << "--------------------------------------------------------------------------------\n" << std::endl;

    std::cout << "1. Create" << std::endl;
    std::cout << "2. Check Empty" << std::endl;
    std::cout << "3. Check Full" << std::endl;
    std::cout << "4. Enqueue" << std::endl;
    std::cout << "5. Dequeue" << std::endl;
    std::cout << "6. Display" << std::endl;
    std::cout << "7. Clear" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

/* create a node */

void Queue::Create(int n) {

    auto* temp = new Node;

    temp->data = n;
    temp->next = nullptr;

    head = temp;
    tail = temp;

    std::cout << "\n>> Data berhasil dibuat!" << std::endl;
}

/* enqueue, menambahkan data pada posisi paling belakang */

void Queue::Enqueue(int n) {

    auto* temp = new Node;

    temp->data = n;
    temp->next = nullptr;

    tail->next = temp;
    tail = tail->next;

    std::cout << "\n>> Data berhasil ditambahkan pada posisi terakhir!" << std::endl;
}

/* dequeue, menambahkan data pada posisi pertama */

void Queue::Dequeue(int n) {

    auto* temp = new Node;

    temp->data = n;
    temp->next = head;
    head = temp;

    std::cout << "\n>> Data berhasil ditambahkan pada posisi pertama!" << std::endl;
}

/* clear, untuk menghapus semua data */

void Queue::Clear() {

    Node* current;
    Node* currentNext;

    current = head;

    while(current != nullptr) {

        currentNext = current->next;
        delete current;
        current = currentNext;
    }

    head = nullptr;
}

/* display all nodes */

void Queue::Display() {

    if(isEmpty()) {

        std::cout << "\n>> Data kosong!" << std::endl;

    } else {

        Node* temp;

        temp = head;

        std::cout << "\n>> Data : ";

        while (temp != nullptr) {

            std::cout << temp->data << " -> ";
            temp = temp->next;
        }

        std::cout << "NULL" << std::endl;
    }
}
























































