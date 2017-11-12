#ifndef Probka_hpp
#define Probka_hpp
#include <iostream>
#include <string>

class Probka
{
    public:
    double t,x;
    Probka();
    Probka(double t1, double x1);
    friend std::ostream& operator<<(std::ostream& stream,const Probka& probka );
};

#endif // Probka_hpp
