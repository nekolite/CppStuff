#include <iostream>
#include "clock.h"

int main() {

    int hour, minute, second;

    Clock::head();

    Clock* clock1;
    Clock* clock2;

    std::cout << "*Input dengan menggunakan spasi!*\n" << std::endl;

    std::cout << "Masukkan jam pertama : ";
    std::cin >> hour >> minute >> second;

    clock1 = new Clock(hour, minute, second);

    std::cout << "Masukkan jam pertama : ";
    std::cin >> hour >> minute >> second;

    clock2 = new Clock(hour, minute, second);

    std::cout << "\nOutput kedua jam : \n" << std::endl;
    std::cout << ">> Jam 1 : ";
    clock1->dipslay();
    std::cout << ">> Jam 2 : ";
    clock2->dipslay();

    std::cout << "\nHasil penjumlahan dua buah jam : \n" << std::endl;
    Clock::penjumlahanJam(clock1, clock2);

    if(Clock::isEqual(clock1, clock2)) {

        std::cout << "\n>> Kedua jam sama." << std::endl;

    } else {

        std::cout << "\n>> Kedua jam berbeda." << std::endl;
    }

    return 0;
}

















