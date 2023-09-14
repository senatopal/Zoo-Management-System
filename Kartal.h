
#ifndef KARTAL_H
#define KARTAL_H
#include "Hayvan.h"
#include <string>
#include <vector>
#include <queue>
using namespace std;
class Kartal :public Hayvan {
public:
	Kartal(string, string, int, int);
	void hayvanBesle(string);

};
#endif