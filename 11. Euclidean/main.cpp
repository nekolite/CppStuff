#include <iostream>
#include <math.h>
#include <limits>

int isInteger(double value) {

    return value == floor(value);
}

bool isGreater(double value) {

    return value < std::numeric_limits<double>::max();
}

int euclidean(int a, int b) {

    int pbb = 0;

    if(a == 0 || b == 0) {

        pbb = 1;

    } else {

        int r = (a % b);

        while (r < 0 || r > 0) {

            a = b;
            b = r;
            r = (a % b);
        }

        pbb = b;
    }

    return pbb;
}

int main() {

    double a, b;

    std::cout << "Masukkan a\t: ";
    std::cin >> a;

    /* menggunakan isInteger untuk mengecek apakah nilai yang diinputkan berkoma / tidak *
    * nilai a dan b harus lebih dari 0 *
    * jika tidak maka program akan langsung selesai / exit */

    if(!(isInteger(a)) || (a < 0) || !(isGreater(a))) {

        std::cout << "\n* Nilai a tidak boleh berkoma."
                     "\n* Nilai a tidak boleh negatif."
                     "\n* Nilai a tidak boleh lebih dari max of double.\n" << std::endl;

        std::cout << "Program exit ... \n" << std::endl;

        exit(1);
    }

    std::cout << "Masukkan b\t: ";
    std::cin >> b;

    if(!(isInteger(b)) || (b < 0) || !(isGreater(b))) {

        std::cout << "\n* Nilai b tidak boleh berkoma."
                     "\n* Nilai b tidak boleh negatif."
                     "\n* Nilai b tidak boleh lebih dari max of double.\n" << std::endl;

        std::cout << "Program exit ... \n" << std::endl;

        exit(1);
    }

    std::cout << "\nPBB\t\t: " << euclidean(a, b) << std::endl;

    return 0;
}





















