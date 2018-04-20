#include <iostream>

#define MAX_SIZE 10

int size = 0;
int pendapatan = 0;

struct Queue {

    std::string plat;
    int size = 0;
    Queue *next;
};

Queue* head;
Queue* tail;

void menu() {

    std::cout << std::endl;
    std::cout << "1. Add Data" << std::endl;
    std::cout << "2. Delete Data" << std::endl;
    std::cout << "3. Display" << std::endl;
    std::cout << "4. Pendapatan" << std::endl;
    std::cout << "5. Size" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

void initData() {

    head = nullptr;
    tail = nullptr;
}

void addData(std::string n) {

    Queue* temp = new Queue;
    temp->plat = n;
    temp->next = nullptr;

    if(size < MAX_SIZE) {

        if(head == nullptr) {

            head = temp;
            tail = temp;
            size++;

        } else {

            tail->next = temp;
            tail = tail->next;
            size++;
        }

    } else {

        std::cout << "\nData Penuh\n" << std::endl;
    }
}

int getSize() {

    return size;
}

void deleteData() {

    Queue* temp = head;

    if(head == nullptr) {

        std::cout << "\nData Kosong" << std::endl;

    } else {

        if(head->next == nullptr) {

            std::cout << "\n" << temp->plat << " sudah dihapus" << std::endl;

            delete temp;
            head = nullptr;

            size--;

            pendapatan += 3500;

        } else {

            std::cout << "\n" << temp->plat << " sudah dihapus" << std::endl;

            head = head->next;
            delete temp;

            size--;

            pendapatan += 3500;
        }
    }
}

int getPendapatan() {

    return pendapatan;
}

void display() {

    Queue* temp = head;

    if(head == nullptr) {

        std::cout << "\nData Kosong" << std::endl;

    } else {

        std::cout << "\nPlat Nomor : \n" << std::endl;

        while (temp != nullptr) {

            std::cout << temp->plat << std::endl;
            temp = temp->next;
        }

        std::cout << std::endl;
    }
}

int main() {

    int pilihan;
    std::string plat;

    initData();

    while (true) {

        menu();

        std::cout << "\nMasukkan Pilihan : ";
        std::cin >> pilihan;

        switch (pilihan) {

            case 0:

                exit(1);

            case 1:

                std::cout << "\nMasukkan Plat Nomor : ";
                std::cin >> plat;

                addData(plat);
                break;

            case 2:

                deleteData();
                break;

            case 3:

                display();
                break;

            case 4:

                std::cout << "\nPendapatan : " << getPendapatan() << std::endl;
                break;

            case 5:

                std::cout << "\nSize : " << getSize() << std::endl;
                break;

            default:

                std::cout << "\nKode salah!" << std::endl;
                break;
        }

    }

    return 0;
}

























