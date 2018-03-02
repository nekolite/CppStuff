#ifndef DOUBLY_H
#define DOUBLY_H

class Doubly {
    
private:
    
    struct Node{
        
        int data;
        Node* next;
        Node* prev;
    };
    
    Node* head;
    Node* tail;
    
    static int size;
    
public:

    Doubly();
    bool IsEmpty();
    static int TotalSize();
    static void Menu();
    
    void AddFirst(int n);
    void AddLast(int n);
    void AddPosition(int n, int pos);
    
    void DeleteFirst();
    void DeleteLast();
    void DeletePosition(int pos);
    
    void Reverse();
    void Display();

};

#endif // DOUBLY_H
