#ifndef Analizator_hpp
#define Analizator_hpp
#include "Sygnal.hpp"
#include <iostream>
#include <string>

class Analizator{
public:
    Analizator();
    double dlugosc(const Sygnal& sygnal);
    double minimum (const Sygnal& sygnal);
    double maksimum (const Sygnal& sygnal);
    double srednia(const Sygnal& sygnal);
    double calka(const Sygnal& sygnal);
};

#endif // analizator_hpp
