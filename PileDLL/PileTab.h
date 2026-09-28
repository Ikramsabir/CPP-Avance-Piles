#ifndef PILETAB_H
#define PILETAB_H

#include <iostream>
using namespace std;

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

template <class T, int max>
class DLL_EXPORT PileTab
{
public:
    PileTab();

    virtual ~PileTab();

    bool estplein() const;
    bool estvide() const;

    void empiler(T val);
    T depiler();

    void afficher() const;

private:
    T tab[max];
    int sommet;
};

#endif
