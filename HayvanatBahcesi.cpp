
#include "HayvanatBahcesi.h"
#include <iostream>
#include <string>
#include <vector>
#include "Hayvan.h"
using namespace std;


HayvanatBahcesi::HayvanatBahcesi() {
    aslanYasOrt = 0.0;
    aslanHarmonikYasOrt = 0.0;
    kartalYasOrt = 0.0;
    kartalHarmonikYasOrt = 0.0;
    zebraYasOrt = 0.0;
    zebraHarmonikYasOrt = 0.0;
    gergedanYasOrt = 0.0;
    gergedanHarmonikYasOrt = 0.0;
    maymunYasOrt = 0.0;
    maymunHarmonikYasOrt = 0.0;


}

void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {
    hayvanlar.push_back(hayvan); // i�aret�i vector e dahil ediliyor push_back ile
}

void HayvanatBahcesi::hayvanlariGoster() {
    for (Hayvan* hayvan : hayvanlar) {  // hayvan s�n�f�ndan bir i�aret�i olu�turuldu hayvanlar vektor�n� dola�abilsin diye,direkt nesneler al�n�r
        if (hayvan->getTur() == "Aslan") { // kar��kl�k olmas�n diye t�r olarak bak�ld� ve ona g�re ��kt� verildi
            cout << "Hayvan ismi: " << hayvan->getAd() << endl;
            cout << "Hayvan T�r�: " << hayvan->getTur() << endl;
            cout << "Hayvan�n Ya��: " << hayvan->getYas() << endl;
            cout << "Hayvan Rengi: " << hayvan->getRenk() << endl;
            cout << "............................." << endl;
        }
        if (hayvan->getTur() == "Kartal") {
            cout << "Hayvan ismi: " << hayvan->getAd() << endl;
            cout << "Hayvan T�r�: " << hayvan->getTur() << endl;
            cout << "Hayvan�n Ya��: " << hayvan->getYas() << endl;
            cout << "Hayvan�n Kanat Uzunlu�u: " << hayvan->getUzunluk() << " cm" << endl;
            cout << "............................." << endl;
        }
        if (hayvan->getTur() == "Zebra") {
            cout << "Hayvan ismi: " << hayvan->getAd() << endl;
            cout << "Hayvan T�r�: " << hayvan->getTur() << endl;
            cout << "Hayvan�n Ya��: " << hayvan->getYas() << endl;
            cout << "Hayvan�n En Uzunlu�u: " << hayvan->getUzunluk() << endl;
            cout << "............................." << endl;
        }
        if (hayvan->getTur() == "Gergedan") {
            cout << "Hayvan ismi: " << hayvan->getAd() << endl;
            cout << "Hayvan T�r�: " << hayvan->getTur() << endl;
            cout << "Hayvan�n Ya��: " << hayvan->getYas() << endl;
            cout << "............................." << endl;
        }
        if (hayvan->getTur() == "Maymun") {
            cout << "Hayvan ismi: " << hayvan->getAd() << endl;
            cout << "Hayvan T�r�: " << hayvan->getTur() << endl;
            cout << "Hayvan�n Ya��: " << hayvan->getYas() << endl;
            cout << "............................." << endl;
        }

    }

}
void HayvanatBahcesi::hayvanC�kar(string isim, string t�r) {
    for (vector<Hayvan*>::iterator i = hayvanlar.begin(); i != hayvanlar.end(); i++) { // erase iterator ile �al��t��� i�in iterat�r tan�mlay�p vector i�inde gezdik
        if ((*i)->getAd() == isim && (*i)->getTur() == t�r) {
            hayvanlar.erase(i);
            cout << "Hayvan Ba�ar�yla ��kar�ld�." << endl;
            return;
        }
    }
}

void HayvanatBahcesi::hayvanBesle(string n) {
    for (Hayvan* hayvan : hayvanlar) { // vectoru dola�abilsin diye bir i�aret�i olu�turuldu 
        // her vectorde denk gelinen hayvan hayvanBesle fonksiyonu ile �a�r�ld�
        if (hayvan->getAd() == n && hayvan->getTur() == "Aslan") {
            cout << hayvan->getAd() << " hayvan� etle besleniyor..." << endl;
            return;
        }

        if (hayvan->getAd() == n && hayvan->getTur() == "Kartal") {
            cout << hayvan->getAd() << " hayvan� etle besleniyor..." << endl;
            return;
        }

        if (hayvan->getAd() == n && hayvan->getTur() == "Zebra") {
            cout << hayvan->getAd() << " hayvan� otla besleniyor..." << endl;
            return;
        }

        if (hayvan->getAd() == n && hayvan->getTur() == "Gergedan") {
            cout << hayvan->getAd() << " hayvan� otla besleniyor..." << endl;
            return;
        }

        if (hayvan->getAd() == n && hayvan->getTur() == "Maymun") {
            cout << hayvan->getAd() << " hayvan� muzla besleniyor..." << endl;
            return;
        }
    }
}

void HayvanatBahcesi::hayvanYasGuncelle(string isim, int yeniYas) {
    for (Hayvan* hayvan : hayvanlar) {
        if (hayvan->getAd() == isim) {
            hayvan->setYas(yeniYas);
            cout << hayvan->getAd() << " adl� hayvan�n ya� g�ncellemesi yap�ld�." << endl;
            return;
        }
    }
    cout << "Hayvan bulunamad�: " << isim << endl; // kullan�c� taraf�ndan belirtilen isim e�le�emezse bu uyar� ekrana yaz�l�cak
}
void HayvanatBahcesi::hayvan�simGuncelle(string isim, string yeni�sim) {
    for (Hayvan* hayvan : hayvanlar) {
        if (hayvan->getAd() == isim && hayvan->getTur() == "Aslan") { // uygun t�re g�re uygun if in i�erisine girilecek
            hayvan->set�sim(yeni�sim);
            cout << hayvan->getAd() << " adl� hayvan�n isim g�ncellemesi yap�ld�." << endl;
            return;
        }
        if (hayvan->getAd() == isim && hayvan->getTur() == "Zebra") {
            hayvan->set�sim(yeni�sim);
            cout << hayvan->getAd() << " adl� hayvan�n isim g�ncellemesi yap�ld�." << endl;
            return;
        }
        if (hayvan->getAd() == isim && hayvan->getTur() == "Kartal") {
            hayvan->set�sim(yeni�sim);
            cout << hayvan->getAd() << " adl� hayvan�n isim g�ncellemesi yap�ld�." << endl;
            return;
        }
        if (hayvan->getAd() == isim && hayvan->getTur() == "Gergedan") {
            hayvan->set�sim(yeni�sim);
            cout << hayvan->getAd() << " adl� hayvan�n isim g�ncellemesi yap�ld�." << endl;
            return;
        }
        if (hayvan->getAd() == isim && hayvan->getTur() == "Maymun") {
            hayvan->set�sim(yeni�sim);
            cout << hayvan->getAd() << " adl� hayvan�n isim g�ncellemesi yap�ld�." << endl;
            return;
        }

    }
    cout << "Hayvan bulunamad�: " << isim << endl; // e�er t�r ve isim e�le�mezse,bulunamaz sa bu uyar� verilecek
}


double HayvanatBahcesi::aslanYasOrtalama() {
    double sum = 0;
    int counter = 0;
    for (Hayvan* hayvan : hayvanlar) {
        if (hayvan->getTur() == "Aslan") { // sadece aslan t�r� hesaplan�cak
            counter++;
            sum = sum + hayvan->getYas();
        }
    }
    aslanYasOrt = sum / counter;
    return aslanYasOrt;
}

double HayvanatBahcesi::kartalYasOrtalama() {
    double sum = 0;
    int counter = 0;
    for (Hayvan* hayvan : hayvanlar) {
        if (hayvan->getTur() == "Kartal") { // sadece kartal t�r� hesaplan�cak
            counter++;
            sum = sum + hayvan->getYas();
        }
    }
    kartalYasOrt = sum / counter;
    return kartalYasOrt;
}

double HayvanatBahcesi::zebraYasOrtalama() {
    double sum = 0;
    int counter = 0;
    for (Hayvan* hayvan : hayvanlar) {
        if (hayvan->getTur() == "Zebra") { // sadece zebra t�r� hesaplan�cak
            counter++;
            sum = sum + hayvan->getYas();
        }
    }
    zebraYasOrt = sum / counter;
    return zebraYasOrt;
}
double HayvanatBahcesi::gergedanYasOrtalama() {
    double sum = 0;
    int counter = 0;
    for (Hayvan* hayvan : hayvanlar) {
        if (hayvan->getTur() == "Gergedan") { // sadece gergedan t�r� hesaplan�cak
            counter++;
            sum = sum + hayvan->getYas();
        }
    }
    gergedanYasOrt = sum / counter;
    return gergedanYasOrt;
}
double HayvanatBahcesi::maymunYasOrtalama() {
    double sum = 0;
    int counter = 0;
    for (Hayvan* hayvan : hayvanlar) {
        if (hayvan->getTur() == "Maymun") { // sadece maymun t�r� hesaplan�cak
            counter++;
            sum = sum + hayvan->getYas();
        }
    }
    maymunYasOrt = sum / counter;
    return maymunYasOrt;
}



double HayvanatBahcesi::aslanHarmonikYasOrtalama() {
    double sum = 0;
    double counter = 0;
    for (Hayvan* i : hayvanlar) {
        if (i->getTur() == "Aslan") { // sadece aslan t�r� hesaplan�cak
            sum = sum + 1 / double(i->getYas());
            counter++;
        }
    }
    aslanHarmonikYasOrt = counter / sum;
    return aslanHarmonikYasOrt;
}

double HayvanatBahcesi::kartalHarmonikYasOrtalama() {
    double sum = 0;
    double counter = 0;
    for (Hayvan* i : hayvanlar) {
        if (i->getTur() == "Kartal") { // sadece kartal t�r� hesaplan�cak
            sum = sum + 1 / double(i->getYas());
            counter++;
        }
    }
    kartalHarmonikYasOrt = counter / sum;
    return kartalHarmonikYasOrt;
}

double HayvanatBahcesi::zebraHarmonikYasOrtalama() {
    double sum = 0;
    double counter = 0;
    for (Hayvan* i : hayvanlar) {
        if (i->getTur() == "Zebra") { // sadece zebra t�r� hesaplan�cak
            sum = sum + 1 / double(i->getYas());
            counter++;
        }
    }
    zebraHarmonikYasOrt = counter / sum;
    return zebraHarmonikYasOrt;
}
double HayvanatBahcesi::gergedanHarmonikYasOrtalama() {
    double sum = 0;
    double counter = 0;
    for (Hayvan* i : hayvanlar) {
        if (i->getTur() == "Gergedan") { // sadece gergedan t�r� hesaplan�cak
            sum = sum + 1 / double(i->getYas());
            counter++;
        }
    }
    gergedanHarmonikYasOrt = counter / sum;
    return gergedanHarmonikYasOrt;
}
double HayvanatBahcesi::maymunHarmonikYasOrtalama() {
    double sum = 0;
    double counter = 0;
    for (Hayvan* i : hayvanlar) {
        if (i->getTur() == "Maymun") { // sadece maymun t�r� hesaplan�cak
            sum = sum + 1 / double(i->getYas());
            counter++;
        }
    }
    maymunHarmonikYasOrt = counter / sum;
    return maymunHarmonikYasOrt;
}
