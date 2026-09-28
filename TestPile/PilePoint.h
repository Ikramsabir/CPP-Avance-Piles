#ifndef PILEPOINT_H
#define PILEPOINT_H

#include <iostream>
#include <cstdlib>

using namespace std;

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

template <class T>
class DLL_EXPORT PilePoint
{
private:

    typedef struct Cel
    {
        T val;
        Cel *svt;
    } Cellule;

    typedef Cellule Pile;

    Pile *sommet;

public:

    PilePoint();

    Cellule* Creer_cel(T val);

    bool estvide() const;

    void empiler(T val);

    Pile* depiler();

    void afficher();

    virtual ~PilePoint();
};

#endif
