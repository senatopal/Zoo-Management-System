
#ifndef GERGEDAN_H
#define GERGEDAN_H
#include "Hayvan.h"
#include <string>
using namespace std;
class Gergedan :public Hayvan {
public:
    Gergedan(string, string, int);
    void hayvanBesle(string);
};
#endif