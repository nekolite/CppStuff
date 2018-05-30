#include "doublelinkedlist.h"

int DoubleLinkedList::size = 0;

bool DoubleLinkedList::isEmpty() const {

    return head == nullptr;
}

int DoubleLinkedList::getSize() const {

    return this->size;
}

void DoubleLinkedList::menu() {

    std::cout << "\n1. Add First" << std::endl;
    std::cout << "2. Add Last" << std::endl;
    std::cout << "3. Add at Position" << std::endl;
    std::cout << "4. Delete First" << std::endl;
    std::cout << "5. Delete Last" << std::endl;
    std::cout << "6. Delete at Position" << std::endl;
    std::cout << "7. Dispay" << std::endl;
    std::cout << "8. Is Empty" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

void DoubleLinkedList::isDataEmpty() {

    if(isEmpty()) {

        std::cout << "\nData Kosong!" << std::endl;

    } else {

        std::cout << "\nData tidak kosong!" << std::endl;
    }
}

DoubleLinkedList::DoubleLinkedList() {

    head = nullptr;
    tail = nullptr;
}

void DoubleLinkedList::addFirst(int n) {

    Node* temp = new Node;
    temp->data = n;
    temp->next = nullptr;
    temp->prev = nullptr;

    this->size++;

    if(isEmpty()) {

        head = temp;
        tail = temp;

    } else {

        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void DoubleLinkedList::addLast(int n) {

    Node* temp = new Node;
    temp->data = n;
    temp->next = nullptr;
    temp->prev = nullptr;

    this->size++;

    if(isEmpty()) {

        head = temp;
        tail = temp;

    } else {

        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
    }
}

void DoubleLinkedList::addPosition(int n, int pos) {

    if(isEmpty()) {

        std::cout << "\nData is empty!" << std::endl;

    } else {

        Node* temp = new Node;
        temp->data = n;
        temp->next = nullptr;
        temp->prev = nullptr;

        if(pos == 1) {

            temp->next = head;
            head->prev = temp;
            head = temp;

        } else if(pos > 1 && pos <= getSize()) {

            Node* current = head;
            Node* previous = nullptr;

            for(int i = 1; i < pos; i++) {

                previous = current;
                current = current->next;
            }

            previous->next = temp;
            temp->prev = previous;
            temp->next = current;
            current->prev = temp;

        } else {

            std::cout << "\nPosisi tidak valid!" << std::endl;
        }
    }
}

void DoubleLinkedList::deleteFirst() {

    if(isEmpty()) {

        std::cout << "\nData Kosong!" << std::endl;

    } else {

        Node* temp = head;
        int number;

        if(temp->next == nullptr) {

            number = temp->data;

            delete temp;
            head = nullptr;

        } else {

            number = temp->data;

            head = temp->next;
            head->prev = nullptr;
            delete temp;

        }

        std::cout << "\n" << number << " sudah terhapus!" << std::endl;
    }
}

void DoubleLinkedList::deleteLast() {

    if(isEmpty()) {

        std::cout << "\nData Kosong!" << std::endl;

    } else {

        Node* current = head;
        Node* previous = nullptr;

        while (current->next != nullptr) {

            previous = current;
            current = current->next;
        }

        int number = current->data;

        previous->next = nullptr;
        tail->next = previous;
        tail = tail->next;
        delete current;

        std::cout << "\n" << number << " sudah terhapus!" << std::endl;
    }
}

void DoubleLinkedList::deletePosition(int pos) {

    if(isEmpty()) {

        std::cout << "\nData Kosong!" << std::endl;

    } else {

        if(pos == 1) {

            Node* temp = head;
            head = temp->next;
            head->prev = nullptr;
            delete temp;

        } else if(pos > 1 && pos <= getSize()) {

            Node* current = head;
            Node* previous = nullptr;

            for(int i = 1; i < pos; i++) {

                previous = current;
                current = current->next;
            }

            int number = current->data;

            previous->next = current->next;
            current->next->prev = previous;

            std::cout << "\n" << number << " sudah terhapus!" << std::endl;

        } else {

            std::cout << "\nPosisi tidak valid!" << std::endl;
        }
    }
}

void DoubleLinkedList::clear() {

    if(isEmpty()) {

        std::cout << "\nData Kosong!" << std::endl;

    } else {

        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr) {

            previous = current;
            delete current;
            current = previous->next;
        }

        head = nullptr;

        std::cout << "\nSemua data sudah terhapus!" << std::endl;
    }
}

void DoubleLinkedList::display() {

    if(isEmpty()) {

        std::cout << "\nData Kosong!" << std::endl;

    } else {

        Node* temp = head;

        std::cout << "\n";

        while (temp != nullptr) {

            std::cout << temp->data << " <-> ";
            temp = temp->next;
        }

        std::cout << "null\n" << std::endl;
    }
}


























