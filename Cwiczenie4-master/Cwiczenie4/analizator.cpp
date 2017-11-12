#include "Analizator.hpp"
#include <iostream>
#include <string>

Analizator::Analizator(){}
double Analizator::srednia (const Sygnal& sygnal) {
    double srednia = 0.0;
    for (int i = 0; i < sygnal.iloscProbek(); i++) {
        srednia += sygnal[i].x;
    }
    if (sygnal.iloscProbek() > 0) {
        srednia = srednia / sygnal.iloscProbek();
    }
    return srednia;
}
double Analizator::minimum(const Sygnal& sygnal) {
    double mini = 2;
    for ( int i=0; i<sygnal.iloscProbek(); i++) {
        if (sygnal[i].x < mini)
            mini = sygnal[i].x;
    }
    return mini;
}

double Analizator::maksimum(const Sygnal& sygnal) {
    double maksi = -2;
    for ( int i=0; i<sygnal.iloscProbek(); i++) {
        if (sygnal[i].x > maksi)
            maksi = sygnal[i].x;
    }
    return maksi;
}

double Analizator::calka(const Sygnal& sygnal) {
    double calka = 0, dt = 0, dpole = 0;
    for (int i=1; i < sygnal.iloscProbek()-1; i++)
    {
        dt = sygnal[i+1].x - sygnal[i].t;
        dpole = (sygnal[i].x + sygnal[i+1].x) * dt / 2;
        calka = calka + dpole;
    }
    return calka;
}
