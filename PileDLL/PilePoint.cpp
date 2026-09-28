#include "PilePoint.h"

// ==================== CONSTRUCTEUR ====================

template <class T>
PilePoint<T>::PilePoint()
{
    sommet = nullptr;
}


// ==================== CREER CELLULE ====================

template <class T>
typename PilePoint<T>::Cellule*
PilePoint<T>::Creer_cel(T val)
{
    Cellule *NE = new Cellule();

    if (!NE)
        exit(-1);

    NE->val = val;
    NE->svt = nullptr;

    return NE;
}


// ==================== EST VIDE ====================

template <class T>
bool PilePoint<T>::estvide() const
{
    return sommet == nullptr;
}


// ==================== EMPILER ====================

template <class T>
void PilePoint<T>::empiler(T val)
{
    Cellule *NE = Creer_cel(val);

    NE->svt = sommet;

    sommet = NE;
}


// ==================== DEPILER ====================

template <class T>
typename PilePoint<T>::Pile*
PilePoint<T>::depiler()
{
    if (estvide())
    {
        cout << "Pile est vide" << endl;
        return nullptr;
    }

    Cellule *temp = sommet;

    sommet = sommet->svt;

    delete temp;

    return sommet;
}


// ==================== AFFICHER ====================

template <class T>
void PilePoint<T>::afficher()
{
    if (estvide())
    {
        cout << "Pile est vide" << endl;
        return;
    }

    Pile *court = sommet;

    while (court != nullptr)
    {
        cout << court->val << "->";
        court = court->svt;
    }

    cout << "NULL" << endl;
}


// ==================== DESTRUCTEUR ====================

template <class T>
PilePoint<T>::~PilePoint()
{
    while (sommet != nullptr)
    {
        Pile *temp = sommet;
        sommet = sommet->svt;
        delete temp;
    }
}

template class DLL_EXPORT PilePoint<int>;
