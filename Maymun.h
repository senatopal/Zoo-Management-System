
#ifndef MAYMUN_H
#define MAYMUN_H
#include "Hayvan.h"
#include <string>
using namespace std;
class Maymun :public Hayvan {
public:
    Maymun(string, string, int);
    void hayvanBesle(string);
};
#endif