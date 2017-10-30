class Sygnal
{
vector<Probka> Dane;
Dane wczytaj (string nazwa_pliku)
{
    Dane tablica;
    ifstream plik(nazwa_pliku);
    string linia;
    while (getline(plik,linia))
    {
        double x,t;
        stringstream ss(linia);
        ss>>t;
        ss.ignore();
        ss>>x;
        Probka probka1(t,x);
        tablica.push_back(probka1);

    }
    plik.close();
    return tablica;
}
};

