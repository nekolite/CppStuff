#include "clock.h"

Clock::Clock() {


}

Clock::~Clock() {


}

/* constructor tanpa parameter */

void Clock::head() {

    std::cout << "\n\tADTs Implementation with C++ Classes" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "---------------------------------------------------\n" << std::endl;
}

/* constructor dengan parameter */

Clock::Clock(int jam, int menit, int detik) {

    this->jam = jam;
    this->menit = menit;
    this->detik = detik;
}

/* setter getter jam */

void Clock::setJam(int jam) {

    this->jam = jam;
}

int Clock::getJam() const {

    return this->jam;
}

/* setter getter menit */

void Clock::setMenit(int menit) {

    this->menit = menit;
}

int Clock::getMenit() const {

    return this->menit;
}

/* setter getter detik */

void Clock::setDetik(int detik) {

    this->detik = detik;
}

int Clock::getDetik() const {

    return this->detik;
}

/* mencari hasil penjumlahan dua buah jam */

void Clock::penjumlahanJam(Clock *clock1, Clock *clock2) {

    Clock *temp = new Clock();

    if(clock1->jam == 00 || clock2->jam == 00) {

        clock1->jam = 24;
        clock2->jam = 24;
    }

    int jumlahJam = (clock1->jam + clock2->jam) * 3600;
    int jumlahMenit = (clock1->menit + clock2->menit) * 60;
    int jumlahDetik = clock1->detik + clock2->detik;
    int total = (jumlahJam + jumlahMenit + jumlahDetik);

    temp->jam = (total / 3600);
    total %= 3600;

    temp->menit = (total / 60);
    total %= 60;

    temp->detik = total;

    if(temp->jam > 24) {

        std::cout << ">> Hasil penjumlahan : " << temp->jam << " jam "
        << temp->menit << " menit " << temp->detik << " detik." << std::endl;

        std::cout << ">> Atau sama dengan : " << temp->jam / 24 << " hari " << temp->jam - 24 <<
        " jam " << temp->menit << " menit " << temp->detik << " detik." << std::endl;

    } else {

        std::cout << ">> Hasil penjumlahan : " << temp->jam << " jam "
        << temp->menit << " menit " << temp->detik << " detik." << std::endl;
    }
}

/* is equal */

bool Clock::isEqual(Clock *clock1, Clock *clock2) {

    bool isTrue;

    if((clock1->jam == clock2->jam) && (clock1->menit == clock2->menit) && (clock1->detik == clock2->detik)) {

        isTrue = true;

    }

    return isTrue;
}

/* display */

void Clock::dipslay() {

    if(this->jam == 00) {

        this->jam = 24;
    }

    if(this->jam < 10) {

        std::cout << "0" << this->jam << ":";

    } else {

        std::cout << this->jam << ":";
    }

    if(this->menit < 10) {

        std::cout << "0" << this->menit << ":";

    } else {

        std::cout << this->menit << ":";
    }

    if(this->detik < 10) {

        std::cout << "0" << this->detik << std::endl;

    } else {

        std::cout << this->detik << std::endl;
    }

}






























