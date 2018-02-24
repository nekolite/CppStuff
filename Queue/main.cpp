#include <iostream>
#include "Queue.h"

int main() {

    int pilihan, nilai;

    Queue queue;

    while (true) {

        queue.Menu();

        std::cout << "\nMasukkan Pilihan : ";
        std::cin >> pilihan;

        switch (pilihan) {

            case 0:

                exit(1);

            case 1:

                if(queue.isEmpty()) {

                    std::cout << "\nMasukkan Nilai : ";
                    std::cin >> nilai;

                    while (std::cin.fail()) {

                        std::cout << "\nKode salah!" << std::endl;
                        std::cout << "\nMasukkan Nilai : ";
                        std::cin >> nilai;
                        std::cin.clear();
                    }

                    queue.Create(nilai);

                } else {

                    std::cout << "\n>> Data sudah ada, tidak perlu membuat lagi." << std::endl;
                }

                break;

            case 2:

                if(queue.isEmpty()) {

                    std::cout << "\n>> Data kosong!" << std::endl;

                } else {

                    std::cout << "\n>> Data tidak kosong!" << std::endl;
                }

                break;

            case 3:

                std::cout << "\n>> Total data : " << queue.isFull() << std::endl;
                break;

            case 4:

                if(queue.isEmpty()) {

                    std::cout << "\n>> Data kosong!, silahkan buat data terlebih dahulu." << std::endl;

                } else {

                    if(queue.isFull() < MAX_SIZE) {

                        std::cout << "\nMasukkan Nilai : ";
                        std::cin >> nilai;

                        while (std::cin.fail()) {

                            std::cout << "\nKode salah!" << std::endl;
                            std::cout << "\nMasukkan Nilai : ";
                            std::cin >> nilai;
                            std::cin.clear();
                        }

                        queue.Enqueue(nilai);

                    } else {

                        std::cout << "\n>> Data sudah penuh!" << std::endl;
                    }
                }

                break;

            case 5:

                if(queue.isEmpty()) {

                    std::cout << "\n>> Data kosong!, silahkan buat data terlebih dahulu." << std::endl;

                } else {

                    if(queue.isFull() < MAX_SIZE) {

                        std::cout << "\nMasukkan Nilai : ";
                        std::cin >> nilai;

                        while (std::cin.fail()) {

                            std::cout << "\nKode salah!" << std::endl;
                            std::cout << "\nMasukkan Nilai : ";
                            std::cin >> nilai;
                            std::cin.clear();
                        }

                        queue.Dequeue(nilai);

                    } else {

                        std::cout << "\n>> Data sudah penuh!" << std::endl;
                    }
                }

                break;

            case 6:

                queue.Display();
                break;

            case 7:

                if(queue.isEmpty()) {

                    std::cout << "\n>> Data kosong!" << std::endl;

                } else {

                    queue.Clear();

                    if(queue.isEmpty()) {

                        std::cout << "\n>> Semua data sudah dihapus!" << std::endl;
                    }
                }

                break;

            default:

                std::cout << "\n>> Kode salah!" << std::endl;
                break;
        }
    }

}














































