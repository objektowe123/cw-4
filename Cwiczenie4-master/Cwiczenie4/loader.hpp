#ifndef Loader_hpp
#define Loader_hpp
#include "Sygnal.hpp"
#include <iostream>
#include <string>

class Loader
{
public:
    Loader();
    Sygnal wczytaj(std::string nazwa_pliku);
    void zapiszSygnal(Sygnal& sygnal,std::string nazwa_pliku);

};


#endif // Loader_hpp
