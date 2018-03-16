#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>

class Clock {

private:

    int jam;
    int menit;
    int detik;

public:

    Clock();
    ~Clock();
    Clock(int jam, int menit, int detik);
    static void head();

    void setJam(int jam);
    int getJam() const;

    void setMenit(int menit);
    int getMenit() const;

    void setDetik(int detik);
    int getDetik() const;

    static void penjumlahanJam(Clock* clock1, Clock* clock2);
    static bool isEqual(Clock* clock1, Clock* clock2);

    void dipslay();

};

#endif // CLOCK_H






















