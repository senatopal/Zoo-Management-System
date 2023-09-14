
#include "Maymun.h"
#include <iostream>
using namespace std;
Maymun::Maymun(string n, string t, int y) :Hayvan(n, t, y) {}; //isim ,t�r ve ya�� hayvan class �nda hesaplat�ld�
void Maymun::hayvanBesle(string n) {
    cout << getAd() << " hayvan� muzla besleniyor..." << endl;
}