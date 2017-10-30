public:
double Srednia (Dane dane) {
    double srednia = 0.0;
    for (int i = 0; i < dane.size(); i++) {
        srednia += dane[i].x;
    }
    if (dane.size() > 0) {
        srednia = srednia / dane.size();
    }
    return srednia;
}

double Minimum(Dane dane) {
    double minimum = 2;
    for ( int i=0; i<dane.size(); i++) {
        if (dane[i].x < minimum)
            minimum = dane[i].x;
    }
    return minimum;
}

double Maksimum(Dane dane) {
    double maksimum = -2;
    for ( int i=0; i<dane.size(); i++) {
        if (dane[i].x > maksimum)
            maksimum = dane[i].x;
    }
    return maksimum;
}

double Calka(Dane dane) {
    double calka = 0, dt = 0, dpole = 0;
    for (int i=1; i < dane.size()-1; i++)
    {
        dt = dane[i+1].x - dane[i].t;
        dpole = (dane[i].x + dane[i+1].x) * dt / 2;
        calka = calka + dpole;
    }
    return calka;
}
