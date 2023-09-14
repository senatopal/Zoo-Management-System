
#include "Kartal.h"
#include <iostream>
using namespace std;
Kartal::Kartal(string i, string t, int y, int k) :Hayvan(i, t, y, k) { //isim ,t�r ve ya�� hayvan class �nda hesaplat�ld�
};
void Kartal::hayvanBesle(string n) {
    cout << getAd() << " etle besleniyor..." << endl;
}
