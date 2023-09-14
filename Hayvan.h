
#ifndef HAYVAN_H
#define HAYVAN_H
#include <string>
using namespace std;
class Hayvan {
private:
	string isim;
	int yas;
	string renk;
	string tur;
	int uzunluk;
public:
	Hayvan(string, string, int);  // iism,t�r,yas
	Hayvan() { isim = "yok"; tur = "yok"; yas = 0; }
	Hayvan(string, string, int, string);
	Hayvan(string, string, int, int);
	string getAd();
	int getYas();
	string getTur();
	virtual void hayvanBesle();
	void Ozellikler();
	void set�sim(string);
	void setYas(int);
	void setTur(string);
	string getRenk();
	int getUzunluk();
};
#endif