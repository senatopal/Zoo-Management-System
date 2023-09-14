
#include "Hayvan.h"
#include <iostream>
using namespace std;
Hayvan::Hayvan(string isim, string tur, int yas) {
	this->isim = isim;
	this->tur = tur;
	this->yas = yas;
}
Hayvan::Hayvan(string isim, string tur, int yas, string renk) {
	this->isim = isim;
	this->tur = tur;
	this->yas = yas;
	this->renk = renk;
}
Hayvan::Hayvan(string isim, string tur, int yas, int uzunluk) {
	this->isim = isim;
	this->tur = tur;
	this->yas = yas;
	this->uzunluk = uzunluk;
}
string Hayvan::getAd() {
	return isim;
}
string Hayvan::getTur() {
	return tur;
}
int Hayvan::getYas() {
	return yas;
}
void Hayvan::hayvanBesle() {
	cout << "Hayvan besleniyor..." << endl;
}
void Hayvan::Ozellikler() {
	cout << "�sim: " << getAd() << endl;
	cout << "T�r: " << getTur() << endl;
	cout << "Ya�: " << getYas() << endl;
}
void Hayvan::setYas(int y) {
	yas = y;
}
void Hayvan::set�sim(string i) {
	isim = i;
}
void Hayvan::setTur(string t) {
	tur = t;
}
string Hayvan::getRenk() {
	return renk;
}
int Hayvan::getUzunluk() {
	return uzunluk;
}