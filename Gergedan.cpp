
#include "Gergedan.h"
#include <iostream>
using namespace std;
Gergedan::Gergedan(string n, string t, int y) :Hayvan(n, t, y) {}; //isim ,t�r ve ya�� hayvan class �nda hesaplat�ld�
void Gergedan::hayvanBesle(string n) {
    cout << getAd() << " hayvan� otla besleniyor..." << endl;
}