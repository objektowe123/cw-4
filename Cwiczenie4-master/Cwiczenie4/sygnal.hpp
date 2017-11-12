#ifndef Sygnal_hpp
#define Sygnal_hpp
#include <iostream>
#include <string>
#include <vector>
#include "Probka.hpp"

class Sygnal{
std::vector<Probka> probki;
public:
    Sygnal();
    void dodajProbke(const Probka& p);
    int iloscProbek() const;
    Probka& operator[](int i);
    const Probka& operator[](int i) const;
    friend std::ostream& operator<< (std::ostream& stream, const Sygnal& sygnal);
};

#endif // sygnal_hpp
