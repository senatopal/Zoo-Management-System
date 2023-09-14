
#ifndef ZEBRA_H
#define ZEBRA_H
#include <string>
#include "Hayvan.h"
#include <vector>
using namespace std;
class Zebra :public Hayvan {
public:
    Zebra(string, string, int, int);
    void hayvanBesle(string n);
};
#endif