
#include <iostream>
#include "Aslan.h"
#include "Hayvan.h"
#include "Kartal.h"
#include "Gergedan.h"
#include "Maymun.h"
#include "HayvanatBahcesi.h"
#include "Zebra.h"
#include <clocale>
#include <cctype>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
    setlocale(LC_ALL, "turkish");      // t�rk�e karakterler kullan�l�bilsin diye setlocale ile t�rk�e dili ayarland�

    HayvanatBahcesi hayvanatbahcesi;   // hayvanatbahcesi nesnesi olu�turuldu HayvanatBahcesindeki fonksiyonlar uygulanabilsin diye, en ba�ta belirtildi i�i bo� anlam� verildi
    Hayvan* aslan1 = new Aslan("Simba", "Aslan", 10, "Kahvereng�");
    Hayvan* aslan2 = new Aslan("Max", "Aslan", 7, "Sar�");
    Hayvan* aslan3 = new Aslan("Boni", "Aslan", 5, "Kahverengi");

    hayvanatbahcesi.hayvanEkle(aslan1);
    hayvanatbahcesi.hayvanEkle(aslan2);
    hayvanatbahcesi.hayvanEkle(aslan3);

    while (true) {

        int secenek;
        cout << "---------HO� GELD�N�Z---------" << endl;
        cout << "1. Hayvan Ekle" << endl;
        cout << "2. Hayvan G�ster" << endl;
        cout << "3. Hayvan Besle" << endl;
        cout << "4. Hayvan D�zenle" << endl;
        cout << "5. ��k��" << endl;
        cout << "L�TFEN YUKARIDAK� ��LEMLERDEN B�R�N� SE��N�Z: ";
        cin >> secenek;

        if (secenek == 5) {
            cout << "��k�� yap�l�yor.." << endl;
            break;
        }
        if ((secenek != 1) and (secenek != 2) and (secenek != 3) and (secenek != 4) and (secenek != 5)) { // t�m se�enekler sa�lanmad���nda uyar� mesaj� verilir
            cout << "L�FTEN GE�ERL� B�R DE�ER G�R�N�Z !" << endl;
            break;
        }
        if ((secenek == 1) or (secenek == 2) or (secenek == 3) or (secenek == 4) or (secenek == 5)) {
            if (secenek == 1) {
                cout << endl;
                cout << "Hayvanat Bah�esinde 5 t�r bulunmaktad�r: Aslan,Gergedan,Kartal,Maymun ve Zebra. L�tfen buna g�re hayvan ekleme i�lemini ger�ekle�tiriniz." << endl << endl;
                cout << "Eklemek istedi�iniz hayvan�n ismi: ";
                string isim, t�r;
                int yas;
                cin >> isim;
                while (!isim.empty()) {    // burada girilen ismin ilk harfi b�y�k di�er harfleri k����e �evrilir isim bulmada herhangi bir sorun ya�anmas�n diye
                    isim[0] = toupper(isim[0]);
                    for (int i = 1; i < isim.size(); i++) {
                        isim[i] = tolower(isim[i]);
                    }
                    break;  // break yap�ld� sonsuz d�ng�ye girilmesin diye
                }
                cout << "Eklemek istedi�iniz hayvan�n t�r�: ";
                cin >> t�r;   // t�r�n isim gibi ilk harfi b�y�k di�er harfleri k����e �evrilir
                while (!t�r.empty()) {
                    t�r[0] = toupper(t�r[0]);
                    for (int i = 1; i < t�r.size(); i++) {
                        t�r[i] = tolower(t�r[i]);
                    }
                    break;
                }
                cout << "Eklemek istedi�iniz hayvan�n ya��: ";
                cin >> yas;

                if (t�r == "Aslan") {
                    string renk;
                    cout << "Hayvan�n rengini giriniz: ";
                    cin >> renk;
                    Hayvan* d = new Aslan(isim, t�r, yas, renk);
                    hayvanatbahcesi.hayvanEkle(d);
                    cout << "Hayvan ba�ar�yla eklendi. " << endl;

                }
                if (t�r == "Kartal") { // hangi t�re uygunsa kullan�c� taraf�ndan girilen t�r ona g�re ekleme yap�l�r
                    int kanat;
                    cout << "Hayvan�n kanat uzunlu�unu giriniz: ";
                    cin >> kanat;
                    Hayvan* d = new Kartal(isim, t�r, yas, kanat);
                    hayvanatbahcesi.hayvanEkle(d);
                    cout << "Hayvan ba�ar�yla eklendi. " << endl;

                }
                if (t�r == "Zebra") {
                    int enUzunluk;
                    cout << "Hayvan�n en uzunlu�unu giriniz: ";
                    cin >> enUzunluk;
                    Hayvan* d = new Zebra(isim, t�r, yas, enUzunluk);
                    hayvanatbahcesi.hayvanEkle(d);
                    cout << "Hayvan ba�ar�yla eklendi. " << endl;

                }
                if (t�r == "Gergedan") {
                    Hayvan* d = new Gergedan(isim, t�r, yas);
                    hayvanatbahcesi.hayvanEkle(d);
                    cout << "Hayvan ba�ar�yla eklendi. " << endl;

                }
                if (t�r == "Maymun") {
                    Hayvan* d = new Maymun(isim, t�r, yas);
                    hayvanatbahcesi.hayvanEkle(d);
                    cout << "Hayvan ba�ar�yla eklendi. " << endl;

                }

            }
            if (secenek == 2) {
                cout << "........Hayvanlar g�steriliyor........" << endl;
                hayvanatbahcesi.hayvanlariGoster();
            }
            if (secenek == 3) {
                string beslenilecekHayvan;
                cout << "HAYVANLAR: " << endl;
                hayvanatbahcesi.hayvanlariGoster();
                cout << "Beslemek istedi�iniz hayvan�n ad�n� giriniz: ";
                cin >> beslenilecekHayvan;
                while (!beslenilecekHayvan.empty()) {
                    beslenilecekHayvan[0] = toupper(beslenilecekHayvan[0]);
                    for (int i = 1; i < beslenilecekHayvan.size(); i++) {
                        beslenilecekHayvan[i] = tolower(beslenilecekHayvan[i]);
                    }
                    break;
                }
                hayvanatbahcesi.hayvanBesle(beslenilecekHayvan);
            }

            if (secenek == 4) {
                cout << endl;
                cout << "Hayvan d�zenlemeyi se�tiniz. L�tfen a�a��dakilerden hangi i�lem olaca��n� se�in." << endl << endl; //hayvan d�zenlemenin i�inde bu se�enekler yer al�yor
                cout << "1.�sim De�i�tirme" << endl;
                cout << "2.Ya� De�i�tirme" << endl;
                cout << "3.Aritmetik Ortalama ��renme " << endl;
                cout << "4.Harmonik Ortalama ��renme" << endl;
                cout << "5.Hayvan ��karma" << endl;
                int k;
                cout << "L�tfen se�ti�iniz i�lemi giriniz: ";
                cin >> k;
                if ((k != 1) and (k != 2) and (k != 3) and (k != 4) and (k != 5)) { // verilen se�enekler d���nca farkl� bir giri� olursa uyar� ve break ile ��k�yor
                    cout << "L�TFEN GE�ERL� B�R DE�ER G�R�N�Z! �IKI� YAPILIYOR..." << endl;
                    break;
                }
                else {
                    if (k == 1) {
                        string yeni�sim, eski�sim;
                        cout << "�sminin de�i�mesini istedi�iniz hayvan�n ismini giriniz: ";
                        cin >> eski�sim;
                        while (!eski�sim.empty()) { // isim kar���kl��� olmas�n diye ismin ilk harfi b�y�k di�er harfleri k���k yap�ld�
                            eski�sim[0] = toupper(eski�sim[0]);
                            for (int i = 1; i < eski�sim.size(); i++) {
                                eski�sim[i] = tolower(eski�sim[i]);
                            }
                            break;
                        }
                        cout << "Yeni ismi girin: ";
                        cin >> yeni�sim; // isim kar���kl��� olmas�n diye ismin ilk harfi b�y�k di�er harfleri k���k yap�ld�
                        while (!yeni�sim.empty()) {
                            yeni�sim[0] = toupper(yeni�sim[0]);
                            for (int i = 1; i < yeni�sim.size(); i++) {
                                yeni�sim[i] = tolower(yeni�sim[i]);
                            }
                            break;
                        }
                        hayvanatbahcesi.hayvan�simGuncelle(eski�sim, yeni�sim);
                    }
                    if (k == 2) {
                        string yasDe�i�ecek�sim;
                        int yeniYas;
                        cout << "Ya��n�n de�i�mesini istedi�iniz hayvan�n ismini giriniz: ";
                        cin >> yasDe�i�ecek�sim;
                        while (!yasDe�i�ecek�sim.empty()) { // isim kar���kl��� olmas�n diye ismin ilk harfi b�y�k di�er harfleri k���k yap�ld�
                            yasDe�i�ecek�sim[0] = toupper(yasDe�i�ecek�sim[0]);
                            for (int i = 1; i < yasDe�i�ecek�sim.size(); i++) {
                                yasDe�i�ecek�sim[i] = tolower(yasDe�i�ecek�sim[i]);
                            }
                            break;
                        }
                        cout << "Yeni ya�� giriniz: ";
                        cin >> yeniYas;
                        hayvanatbahcesi.hayvanYasGuncelle(yasDe�i�ecek�sim, yeniYas);
                    }
                    if (k == 3) {
                        cout << endl;
                        cout << "Hayvanat Bah�esinde 5 t�r bulunmaktad�r: Aslan,Gergedan,Kartal,Maymun ve Zebra. L�tfen buna g�re hayvan ekleme i�lemini ger�ekle�tiriniz." << endl << endl;
                        string istenenTur;
                        cout << "��renmek istedi�iniz t�r� giriniz: ";
                        cin >> istenenTur;
                        while (!istenenTur.empty()) { // t�r kar���kl��� olmas�n diye t�r�n ilk harfi b�y�k di�er harfleri k���k yap�ld�
                            istenenTur[0] = toupper(istenenTur[0]);
                            for (int i = 1; i < istenenTur.size(); i++) {
                                istenenTur[i] = tolower(istenenTur[i]);
                            }
                            break;
                        }
                        if (istenenTur == "Aslan") { // istenilen t�re g�re uygun if in i�erisine girilecek
                            cout << "Aslanlar�n ya�lar�n�n aritmetik ortalamas�: " << hayvanatbahcesi.aslanYasOrtalama() << endl;
                        }
                        if (istenenTur == "Kartal") {
                            cout << "Kartallar�n ya�lar�n�n aritmetik ortalamas�: " << hayvanatbahcesi.kartalYasOrtalama() << endl;
                        }
                        if (istenenTur == "Zebra") {
                            cout << "Zebralar�n ya�lar�n�n aritmetik ortalamas� : " << hayvanatbahcesi.zebraYasOrtalama() << endl;
                        }
                        if (istenenTur == "Gergedan") {
                            cout << "Gergedanlar�n ya�lar�n�n aritmetik ortalamas� : " << hayvanatbahcesi.gergedanYasOrtalama() << endl;
                        }
                        if (istenenTur == "Maymun") {
                            cout << "Maymunlar�n ya�lar�n�n aritmetik ortalamas� : " << hayvanatbahcesi.maymunYasOrtalama() << endl;
                        }
                    }
                    if (k == 4) {
                        cout << endl;
                        cout << "Hayvanat Bah�esinde 5 t�r bulunmaktad�r: Aslan,Gergedan,Kartal,Maymun ve Zebra. L�tfen buna g�re hayvan ekleme i�lemini ger�ekle�tiriniz." << endl << endl;
                        string istenenTur;
                        cout << "��renmek istedi�iniz t�r� giriniz: ";
                        cin >> istenenTur;
                        while (!istenenTur.empty()) {  // t�r kar���kl��� olmas�n diye t�r�n ilk harfi b�y�k di�er harfleri k���k yap�ld�
                            istenenTur[0] = toupper(istenenTur[0]);
                            for (int i = 1; i < istenenTur.size(); i++) {
                                istenenTur[i] = tolower(istenenTur[i]);
                            }
                            break;
                        }
                        if (istenenTur == "Aslan") { //istenilen t�re g�re uygun if in i�ine girilecek
                            cout << "Aslanlar�n ya�lar�n�n harmonik ortalamas�: " << hayvanatbahcesi.aslanHarmonikYasOrtalama() << endl;
                        }
                        if (istenenTur == "Kartal") {
                            cout << "Kartallar�n ya�lar�n�n harmonik ortalamas�: " << hayvanatbahcesi.kartalHarmonikYasOrtalama() << endl;
                        }
                        if (istenenTur == "Zebra") {
                            cout << "Zebralar�n ya�lar�n�n harmonik ortalamas� : " << hayvanatbahcesi.zebraHarmonikYasOrtalama() << endl;
                        }
                        if (istenenTur == "Gergedan") {
                            cout << "Gergedanlar�n ya�lar�n�n harmonik ortalamas� : " << hayvanatbahcesi.gergedanHarmonikYasOrtalama() << endl;
                        }
                        if (istenenTur == "Maymun") {
                            cout << "Maymunlar�n ya�lar�n�n harmonik ortalamas� : " << hayvanatbahcesi.maymunHarmonikYasOrtalama() << endl;
                        }
                    }
                    if (k == 5) {
                        string isim, t�r;
                        cout << "Silmek istedi�iniz hayvan�n t�r�n� giriniz: ";
                        cin >> t�r;
                        while (!t�r.empty()) {  // t�r kar���kl��� olmas�n diye t�r�n ilk harfi b�y�k di�er harfleri k���k yap�ld�
                            t�r[0] = toupper(t�r[0]);
                            for (int i = 1; i < t�r.size(); i++) {
                                t�r[i] = tolower(t�r[i]);
                            }
                            break;
                        }
                        cout << "Silmek istedi�iniz hayvan�n ismini giriniz: ";
                        cin >> isim;
                        while (!isim.empty()) {  // t�r kar���kl��� olmas�n diye t�r�n ilk harfi b�y�k di�er harfleri k���k yap�ld�
                            isim[0] = toupper(isim[0]);
                            for (int i = 1; i < isim.size(); i++) {
                                isim[i] = tolower(isim[i]);
                            }
                            break;
                        }
                        hayvanatbahcesi.hayvanC�kar(isim, t�r);

                    }

                }
            }


        }


    }



}