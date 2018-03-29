#include <iostream>
#include <iomanip>

void menu();
void toUpper(char*);
void toLower(char*);
void display(char*);

/* main program */

int main() {

    int pilihan;
    char kata[50];
    char* pKata;
    char answer;

    do {

        menu();

        std::cout << "Masukkan Pilihan : ";
        std::cin >> pilihan;

        std::cin.ignore(256, '\n');

        switch (pilihan) {

            case 0:

                exit(1);

            case 1:

                std::cout << "\nMasukkan Kata : ";
                std::cin.getline(kata, 50);

                pKata = kata;

                std::cout << "\nSebelum : ";
                display(pKata);
                std::cout << std::endl;

                std::cout << "\nSesudah : ";
                toUpper(pKata);
                display(pKata);
                std::cout << std::endl;

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            case 2:

                std::cout << "\nMasukkan Kata : ";
                std::cin.getline(kata, 50);

                pKata = kata;

                std::cout << "\nSebelum : ";
                display(pKata);
                std::cout << std::endl;

                std::cout << "\nSesudah : ";
                toLower(pKata);
                display(pKata);
                std::cout << std::endl;

                std::cout << "\nKembali ke menu? (y/N) : ";
                std::cin >> answer;

                break;

            default:

                std::cout << "\nKode salah!" << std::endl;
                break;
        }

    } while (answer == 'y' || answer == 'Y');

    return 0;
}

/* definisi */

void menu() {

    std::cout << "\n--------------------------------------------------------------------------------" << std::endl;
    std::cout << std::setw(48) << "String Converter"<< std::endl;
    std::cout << "--------------------------------------------------------------------------------\n" << std::endl;
    std::cout << std::setw(47)  << "1. To Uppercase" << std::endl;
    std::cout << std::setw(47)  << "2. To Lowercase" << std::endl;
    std::cout << std::setw(39)  << "0. Exit" << std::endl;
    std::cout << "\n--------------------------------------------------------------------------------\n" << std::endl;
}

/* to uppercase */

void toUpper(char* pKata) {

    while (*pKata != '\0') {

        *pKata = toupper(*pKata);
        pKata++;
    }
}

/* to lower */

void toLower(char* pKata) {

    while (*pKata != '\0') {

        *pKata = tolower(*pKata);
        pKata++;
    }
}

/* display */

void display(char* pKata) {

    while (*pKata != '\0') {

        std::cout << *pKata;
        pKata++;
    }
}





























