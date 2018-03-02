#include <iostream>
#include <iomanip>
#include "Doubly.h"

/* int size = 0 */

int Doubly::size = 0;

/* set head dan tail = null */

Doubly::Doubly() {
    
    head = nullptr;
    tail = nullptr;
}

/* cek empty */

bool Doubly::IsEmpty() {
    
    return head == nullptr;
}

/* cek size */

int Doubly::TotalSize() {
    
    return size;
}

/* menu */

void Doubly::Menu() {
    
    std::cout << "\n-------------------------------------------------------------" << std::endl;
    std::cout << std::setw(43) << "Doubly Linked List Demo" << std::endl;
    std::cout << "-------------------------------------------------------------\n" << std::endl;
    
    std::cout << "[1]. Check Empty" << std::endl;
    std::cout << "[2]. Check Size" << std::endl;
    std::cout << "[3]. Add First" << std::endl;
    std::cout << "[4]. Add Last" << std::endl;
    std::cout << "[5]. Add Node at Position" << std::endl;
    std::cout << "[6]. Delete First" << std::endl;
    std::cout << "[7]. Delete Last" << std::endl;
    std::cout << "[8]. Delete Node at Position" << std::endl;
    std::cout << "[9]. Reverse Node" << std::endl;
    std::cout << "[10]. Display" << std::endl;
    std::cout << "[0]. Exit" << std::endl;
}

/* add first */

void Doubly::AddFirst(int n) {
    
    Node* temp = new Node;
    this->size++;
    temp->data = n;
    
    if(IsEmpty()) {
        
        temp->prev = nullptr;
        temp->next = nullptr;
        head = temp;
        tail = temp;
        
    } else {
        
        temp->prev = nullptr;
        temp->next = head;
        head = temp;
    }
}

/* add last */

void Doubly::AddLast(int n) {
    
    Node* temp = new Node;
    this->size++;
    temp->data = n;
    
    if(IsEmpty()) {
        
        temp->prev = nullptr;
        temp->next = nullptr;
        head = temp;
        tail = temp;
        
    } else {
        
        temp->prev = tail;
        temp->next = nullptr;
        tail->next = temp;
        tail = tail->next;
    }
}

/* add node at position */

void Doubly::AddPosition(int n, int pos) {
    
    Node* temp = new Node;
    temp->data = n;
    
    if(IsEmpty()) {
        
        temp->next = nullptr;
        temp->prev = nullptr;
        head = temp;
        tail = temp;
        
        std::cout << "\nData kosong, nilai ditempatkan pada posisi pertama!" << std::endl;
        
        this->size++;
        
    } else {
        
        if(pos == 1) {
            
            temp->next = head;
            head->prev = temp;
            temp->prev = nullptr;
            head = temp;
            
            this->size++;
            
        } else if(pos > 1 && pos <= TotalSize()) {
            
            Node* current = head;
            Node* previous;
            
            for(int i = 1; i < pos; i++) {
                
                previous = current;
                current = current->next;
            }
            
            previous->next = temp;
            temp->prev = previous;
            temp->next = current;
            current->prev = temp;
            
            this->size++;
            
        } else {
            
            std::cout << "\nOut of range!" << std::endl;
        }
    }
}

/* delete first */

void Doubly::DeleteFirst() {
    
    if(head->next == nullptr) {
        
        Node* temp = head;
        delete temp;
        head = nullptr;
        
    } else {
        
        Node* temp = head;
        head = head->next;
        head->prev = nullptr;
        delete temp;
    }
    
    this->size--;
}

/* delete last */

void Doubly::DeleteLast() {
    
    if(head->next == nullptr) {
        
        Node* temp = head;
        delete temp;
        head = nullptr;
        
    } else {
        
        Node* current;
        Node* previous;
        
        current = head;
        
        while(current->next != nullptr) {
            
            previous = current;
            current = current->next;
        }
        
        previous->next = nullptr;
        tail->next = previous;
        tail = tail->next;
        delete current;
    }
    
    this->size--;
}

/* delete node at position */

void Doubly::DeletePosition(int pos) {
    
    if(pos == 1) {
        
        if(head->next == nullptr) {
            
            Node* temp = head;
            delete temp;
            head = nullptr;
            
        } else {
            
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
        
        this->size--;
        
    } else if(pos > 1 && pos <= TotalSize()) {
        
        Node* current = head;
        Node* previous;
        
        for(int i = 1; i < pos; i++) {
            
            previous = current;
            current = current->next;
        }
        
        previous->next = current->next;
        
        this->size--;
        
    } else {
        
        std::cout << "\nOut of range!" << std::endl;
    }
}

/* reverse */

void Doubly::Reverse() {
    
    Node* current = head;
    
    while(current != nullptr) {
        
        Node* currentNext = current->next;
        current->next = current->prev;
        current->prev = currentNext;
        
        if(currentNext == nullptr) {
            
            tail = head;
            head = current;
        }
        
        current = currentNext;
    }
}

/* display */

void Doubly::Display() {
    
    Node* temp = head;
    
    std::cout << "\nData : ";
    
    while(temp != nullptr) {
        
        std::cout << temp->data << " <-> ";
        temp = temp->next;
    }
    
    std::cout << "NULL" << std::endl;
}


