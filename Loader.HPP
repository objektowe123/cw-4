public:
typedef vector<Probka> Dane;
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

void zapisz (string nazwa_pliku, Dane dane)
{
    ofstream zapis(nazwa_pliku);
    for(int i=0;i<dane.size();i++)
    {
        zapis<<dane[i].x<<" "<<dane[i].t<<endl;
    }
    zapis.close();
}
