#include "queue.h"

/* size = 0 */

int Queue::size = 0;

/* head, tail = null */

Queue::Queue() {

    head = nullptr;
    tail = nullptr;
}

/* is empty */

bool Queue::isEmpty() {

    return head == nullptr;
}

/* get size */

int Queue::getSize() {

    return this->size;
}

/* menu */

void Queue::menu() {

    std::cout << "\n--------------------------------------------------------------------------------" << std::endl;
    std::cout << std::setw(50) << "Phone Contact Demo" << std::endl;
    std::cout << "--------------------------------------------------------------------------------\n" << std::endl;

    std::cout << std::setw(47) << "1. Add Contact" << std::endl;
    std::cout << std::setw(43) << "2. Display" << std::endl;
    std::cout << std::setw(42) << "3. Search" << std::endl;
    std::cout << std::setw(42) << "4. Delete" << std::endl;
    std::cout << std::setw(40) << "0. Exit" << std::endl;
    std::cout << "--------------------------------------------------------------------------------\n" << std::endl;
}

/* add data */

void Queue::addData(std::string nama, std::string nomor) {

    this->size++;

    Node* temp = new Node;

    temp->name = nama;
    temp->number = nomor;

    if(isEmpty()) {

        head = temp;
        tail = temp;

    } else {

        tail->next = temp;
        tail = tail->next;
    }
}

/* sort */

void Queue::sort(Node* temp) {

    while (temp != nullptr) {

        Node* current = temp;
        Node* prev = nullptr;

        std::string nilaiSementara = temp->name;

        while (current != nullptr) {

            if(nilaiSementara > current->name) {

                nilaiSementara = current->name;
                prev = current;
            }

            current = current->next;
        }

        if(prev != nullptr) {

            std::swap(prev->name, temp->name);
            std::swap(prev->number, temp->number);
        }

        temp = temp->next;
    }
}

/* search */

void Queue::search(std::string n) {

    if(isEmpty()) {

        std::cout << "\nData kosong!" << std::endl;

    } else {

        std::list<std::string> namaTemp;
        std::list<std::string> nomorTemp;

        Node* temp = head;

        bool isTrue = false;

        while (temp != nullptr) {

            std::string nilai = temp->name;
            std::transform(nilai.begin(), nilai.end(), nilai.begin(), ::tolower);
            std::transform(n.begin(), n.end(), n.begin(), ::tolower);

            if(nilai == n) {

                namaTemp.push_back(temp->name);
                nomorTemp.push_back(temp->number);

                isTrue = true;
            }

            temp = temp->next;
        }

        if(isTrue) {

            std::list<std::string>::iterator it1 = namaTemp.begin();
            std::list<std::string>::iterator it2 = nomorTemp.begin();
            int i = 0;

            std::cout << "\nHasil pencarian : \n" << std::endl;

            while (it1 != namaTemp.end()) {

                std::cout << (i + 1) << " " << *it1 << " " << *it2 << std::endl;
                it1++;
                it2++;
                i++;
            }

            namaTemp.clear();
            nomorTemp.clear();

        } else {

            std::cout << "\nHasil pencarian tidak ada" << std::endl;
        }
    }
}

/* delete */

void Queue::deleteContact(int pos) {

    if(isEmpty()) {

        std::cout << "\nData kosong!" << std::endl;

    } else {

        if(pos == 1) {

            if(head->next == nullptr) {

                Node* temp = head;
                delete temp;
                head = nullptr;

            } else {

                Node* temp = head;
                head = head->next;
                delete temp;
            }

            std::cout << "\nData ke " << pos << " sudah dihapus!" << std::endl;

            this->size--;

        } else if(pos > 1 && pos <= getSize()) {

            Node* current = head;
            Node* prev;

            for(int i = 1; i < pos; i++) {

                prev = current;
                current = current->next;
            }

            prev->next = current->next;
            std::cout << "\nData ke " << pos << " sudah dihapus!" << std::endl;

            this->size--;

        } else {

            std::cout << "\nOut of range!" << std::endl;
        }
    }
}

/* display */

void Queue::display() {

    if(isEmpty()) {

        std::cout << "\nData kosong!" << std::endl;

    } else {

        Node* temp = head;
        int i = 0;
        sort(temp);

        std::cout << "\nNo\tNama\tNomor\n" << std::endl;

        while (temp != nullptr) {

            std::cout << (i + 1) << "\t" << temp->name << "\t" << temp->number << std::endl;
            temp = temp->next;
            i++;
        }
    }
}






























