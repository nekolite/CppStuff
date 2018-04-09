#include <iostream>
#include <stdlib.h>
#include "queue.h"

int main() {

    int pilihan, hapus;
    std::string name, number;
    char answer;

    Queue* queue = new Queue();

    MENU:
    do {

        queue->menu();

        std::cout << "Masukkan Pilihan\t: ";
        std::cin >> pilihan;

        std::cin.ignore(256, '\n');

        switch (pilihan) {

            case 0:

                exit(1);

            case 1:

                std::cout << "\nMasukkan Nama\t: ";
                std::getline(std::cin, name);

                std::cout << "Masukkan Nomor\t: ";
                std::cin >> number;

                queue->addData(name, number);

                std::cout << "\nKembali ke menu? (y/N)\t: ";
                std::cin >> answer;

                if(answer == 'y' || answer == 'Y') {

                    goto MENU;

                } else if(answer == 'n' || answer == 'N') {

                    exit(1);

                } else {

                    while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {

                        std::cout << "\n\nKode salah!" << std::endl;

                        std::cout << "\nKembali ke menu? (y/N)\t: ";
                        std::cin >> answer;

                        if(answer == 'y' || answer == 'Y') {

                            goto MENU;

                        } else if(answer == 'n' || answer == 'N') {

                            exit(1);

                        }
                    }
                }

                break;

            case 2:

                queue->display();

                std::cout << "\nKembali ke menu? (y/N)\t: ";
                std::cin >> answer;

                if(answer == 'y' || answer == 'Y') {

                    goto MENU;

                } else if(answer == 'n' || answer == 'N') {

                    exit(1);

                } else {

                    while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {

                        std::cout << "\n\nKode salah!" << std::endl;

                        std::cout << "\nKembali ke menu? (y/N)\t: ";
                        std::cin >> answer;

                        if(answer == 'y' || answer == 'Y') {

                            goto MENU;

                        } else if(answer == 'n' || answer == 'N') {

                            exit(1);

                        }
                    }
                }

                break;

            case 3:

                std::cout << "\nMasukkan Nama\t: ";
                std::getline(std::cin, name);

                queue->search(name);

                std::cout << "\nKembali ke menu? (y/N)\t: ";
                std::cin >> answer;

                if(answer == 'y' || answer == 'Y') {

                    goto MENU;

                } else if(answer == 'n' || answer == 'N') {

                    exit(1);

                } else {

                    while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {

                        std::cout << "\n\nKode salah!" << std::endl;

                        std::cout << "\nKembali ke menu? (y/N)\t: ";
                        std::cin >> answer;

                        if(answer == 'y' || answer == 'Y') {

                            goto MENU;

                        } else if(answer == 'n' || answer == 'N') {

                            exit(1);

                        }
                    }
                }

                break;

            case 4:

                if(queue->isEmpty()) {

                    std::cout << "\nData Kosong" << std::endl;

                    std::cout << "\nKembali ke menu? (y/N)\t: ";
                    std::cin >> answer;

                    if(answer == 'y' || answer == 'Y') {

                        goto MENU;

                    } else if(answer == 'n' || answer == 'N') {

                        exit(1);

                    } else {

                        while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {

                            std::cout << "\n\nKode salah!" << std::endl;

                            std::cout << "\nKembali ke menu? (y/N)\t: ";
                            std::cin >> answer;

                            if(answer == 'y' || answer == 'Y') {

                                goto MENU;

                            } else if(answer == 'n' || answer == 'N') {

                                exit(1);

                            }
                        }
                    }

                } else {

                    queue->display();

                    std::cout << "\nData yang dihapus : ";
                    std::cin >> hapus;

                    queue->deleteContact(hapus);

                    std::cout << "\nKembali ke menu? (y/N)\t: ";
                    std::cin >> answer;

                    if(answer == 'y' || answer == 'Y') {

                        goto MENU;

                    } else if(answer == 'n' || answer == 'N') {

                        exit(1);

                    } else {

                        while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {

                            std::cout << "\n\nKode salah!" << std::endl;

                            std::cout << "\nKembali ke menu? (y/N)\t: ";
                            std::cin >> answer;

                            if(answer == 'y' || answer == 'Y') {

                                goto MENU;

                            } else if(answer == 'n' || answer == 'N') {

                                exit(1);

                            }
                        }
                    }
                }

                break;

            default:

                std::cout << "\nKode Salah!" << std::endl;

                std::cout << "\nKembali ke menu? (y/N)\t: ";
                std::cin >> answer;

                if(answer == 'y' || answer == 'Y') {

                    goto MENU;

                } else if(answer == 'n' || answer == 'N') {

                    exit(1);

                } else {

                    while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {

                        std::cout << "\n\nKode salah!" << std::endl;

                        std::cout << "\nKembali ke menu? (y/N)\t: ";
                        std::cin >> answer;

                        if(answer == 'y' || answer == 'Y') {

                            goto MENU;

                        } else if(answer == 'n' || answer == 'N') {

                            exit(1);

                        }
                    }
                }

                break;
        }

    } while(answer == 'y' || answer == 'Y');

    return 0;
}

































