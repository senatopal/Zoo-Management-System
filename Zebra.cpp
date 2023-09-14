
#include "Zebra.h"
#include <iostream>
using namespace std;
Zebra::Zebra(string i, string t, int y, int e) :Hayvan(i, t, y, e) { //isim ,t�r ve ya�� hayvan class �nda hesaplat�ld�
};
void Zebra::hayvanBesle(string n) {
    cout << getAd() << " hayvan� ot ile besleniyor..." << endl;
}