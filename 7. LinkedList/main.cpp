#include <iostream>
#include "linkedlist.h"

int main() {

    std::string name, nim;

    LinkedList* linkedList = new LinkedList;

    std::cout << "PROGRAM SENARAI BERANTAI\n" << std::endl;

    for(int i = 0; i < 4; i++) {

        std::cout << "Masukkan Nama ke " << (i + 1) << "\t: ";
        std::cin >> name;

        std::cout << "Masukkan NIM ke " << (i + 1) << "\t: ";
        std::cin >> nim;

        linkedList->addLast(name, nim);

        std::cout << std::endl;
    }

    linkedList->display();

    linkedList->deleteLast();
    // linkedList->deleteLast();
    // linkedList->deleteLast();
    //linkedList->deleteLast();

    linkedList->display();

    return 0;
}

























