#include "linkedlist.h"

/* head , tail = null */

LinkedList::LinkedList() {

    head = nullptr;
    tail = nullptr;
}

/* clear */

LinkedList::~LinkedList() {

    clearList();
}

/* is empty */

bool LinkedList::isEmpty() {

    return head == nullptr;
}

/* add first */

void LinkedList::addFirst(std::string name, std::string nim) {

    Node* temp = new Node;

    temp->name = name;
    temp->nim = nim;
    temp->next = nullptr;

    if(isEmpty()) {

        head = temp;
        tail = temp;

    } else {

        temp->next = head;
        head = temp;
    }
}

/* add last */

void LinkedList::addLast(std::string name, std::string nim) {

    Node* temp = new Node;

    temp->name = name;
    temp->nim = nim;
    temp->next  = nullptr;

    if(isEmpty()) {

        head = temp;
        tail = temp;

    } else {

        tail->next = temp;
        tail = tail->next;
    }
}

/* delete first */

void LinkedList::deleteFirst() {

    if(isEmpty()) {

        std::cout << "\nData kosong!" << std::endl;

    } else {

        if(head->next == nullptr) {

            Node* temp = head;

            std::cout << temp->name << " sudah dihapus" << std::endl;

            delete temp;
            head = nullptr;

        } else {

            Node* temp = head;
            head = head->next;

            std::cout << temp->name << " sudah dihapus" << std::endl;

            delete temp;
        }
    }
}

/* delete last */

void LinkedList::deleteLast() {

    if(isEmpty()) {

        std::cout << "\nData kosong!" << std::endl;

    } else {

        if(head->next == nullptr) {

            Node* temp = head;

            std::cout << temp->name << " sudah dihapus" << std::endl;

            delete temp;
            head = nullptr;

        } else {

            Node* current = head;
            Node* previous;

            while (current->next != nullptr) {

                previous = current;
                current = current->next;
            }

            previous->next = nullptr;
            tail->next = previous;
            tail = tail->next;

            std::cout << current->name << " sudah dihapus\n" << std::endl;

            delete current;
        }
    }
}

/* clear list */

void LinkedList::clearList() {

    Node* current;
    Node *prev;

    current = head;

    while (current != nullptr) {

        prev = current;
        current = current->next;

        delete prev;
    }

    head = nullptr;
}

/* display */

void LinkedList::display() {

    if(isEmpty()) {

        std::cout << "\nData kosong!" << std::endl;

    } else {

        Node* temp = head;

        std::cout << "DATA MAHASISWA\n" << std::endl;

        while (temp != nullptr) {

            std::cout << temp->name << "\t" << temp->nim << std::endl;
            temp = temp->next;
        }
    }

    std::cout << std::endl;
}


























