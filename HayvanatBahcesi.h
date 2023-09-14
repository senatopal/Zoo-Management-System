
#ifndef HAYVANATBAHCESI_H
#define HAYVANATBAHCESI_H

#include <vector>
#include <string>
#include "Hayvan.h"
using namespace std;

class HayvanatBahcesi :public Hayvan {
private:
    double aslanYasOrt;
    double aslanHarmonikYasOrt;
    double kartalYasOrt;
    double kartalHarmonikYasOrt;
    double zebraYasOrt;
    double zebraHarmonikYasOrt;
    double gergedanYasOrt;
    double gergedanHarmonikYasOrt;
    double maymunYasOrt;
    double maymunHarmonikYasOrt;

public:
    HayvanatBahcesi();// hayvanat bahcesi nesnesi bo� olarak olu�turuldu
    void hayvanEkle(Hayvan*);  // i�erisine bir pointer(i�aret�i) al�ca�� g�sterildi
    void hayvanlariGoster();
    void hayvanBesle(string);
    void hayvanYasGuncelle(string, int);
    void hayvan�simGuncelle(string, string);
    double aslanYasOrtalama();
    double kartalYasOrtalama();
    double zebraYasOrtalama();
    double gergedanYasOrtalama();
    double maymunYasOrtalama();
    double aslanHarmonikYasOrtalama();
    double zebraHarmonikYasOrtalama();
    double kartalHarmonikYasOrtalama();
    double gergedanHarmonikYasOrtalama();
    double maymunHarmonikYasOrtalama();
    void hayvanC�kar(string, string);
    vector<Hayvan*> hayvanlar;  // i�aret�ileri tutan bir vekt�r
};

#endif
