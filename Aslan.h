
#ifndef ASLAN_H
#define ASLAN_H
#include "Hayvan.h"
#include <string>
#include <vector>
#include <queue>
using namespace std;
class Aslan :public Hayvan {
protected:
	string renk;
public:
	Aslan(string, string, int, string);
	void hayvanBesle(string);
};
#endif