#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char*argv[])
{
    if(argc !=2)
    {
        return -1;
    }
    cout<<argv[1]<<endl;
    Dane dane = wczytaj(argv[1]);
    zapisz("out.csv",dane);
    cout<<endl<<"Srednia: "<<Srednia(dane);
    cout<<endl<<"Minimum: "<<Minimum(dane);
    cout<<endl<<"Maksimum: "<<Maksimum(dane);
    cout<<endl<<"Calka: "<<Calka(dane);
    return 0;
}
