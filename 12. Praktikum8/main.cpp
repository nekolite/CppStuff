#include <iostream>
#include "doublelinkedlist.h"

int main() {

    int pilihan, nilai, posisi;
    char answer;

    DoubleLinkedList* doubleList = new DoubleLinkedList();

    do {

        doubleList->menu();

        std::cout << "\nMasukkan Pilihan : ";
        std::cin >> pilihan;

        switch (pilihan) {

            case 0:

                exit(1);

            case 1:

                std::cout << "\nMasukkan Nilai : ";
                std::cin >> nilai;

                doubleList->addFirst(nilai);

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            case 2:

                std::cout << "\nMasukkan Nilai : ";
                std::cin >> nilai;

                doubleList->addLast(nilai);

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            case 3:

                std::cout << "\nMasukkan Nilai : ";
                std::cin >> nilai;

                std::cout << "\nMasukkan Posisi : ";
                std::cin >> posisi;

                doubleList->addPosition(nilai, posisi);

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            case 4:

                doubleList->deleteFirst();

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            case 5:

                doubleList->deleteLast();

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            case 6:

                std::cout << "\nMasukkan Posisi : ";
                std::cin >> posisi;

                doubleList->deletePosition(posisi);

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            case 7:

                doubleList->display();

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            case 8:

                doubleList->isDataEmpty();

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

        }

    } while(answer == 'y' || answer == 'Y');

    return 0;
}




























