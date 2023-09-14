
#include "Aslan.h"
#include <iostream>
using namespace std;
Aslan::Aslan(string i, string t, int y, string r) :Hayvan(i, t, y, r) { //isim ,t�r ve ya�� hayvan class �nda hesaplat�ld�
}
void Aslan::hayvanBesle(string n) {
    cout << getAd() << " hayvan� et ile besleniyor..." << endl;
}