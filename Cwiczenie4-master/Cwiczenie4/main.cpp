#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Probka.hpp"
#include "Analizator.hpp"
#include "Loader.hpp"
#include "Sygnal.hpp"

using namespace std;

int main(int argc, char*argv[])
{
    if(argc !=2)
    {
        return -1;
    }
    Sygnal S1;
    Loader L1;
    Analizator A1;
    S1=L1.wczytaj(argv[1]);
    L1.zapiszSygnal(S1,"out.csv");
    cout<<endl<<"Srednia: "<<A1.srednia(S1);
    cout<<endl<<"Minimum: "<<A1.minimum(S1);
    cout<<endl<<"Maksimum: "<<A1.maksimum(S1);
    cout<<endl<<"Calka: "<<A1.calka(S1);


    return 0;
}
