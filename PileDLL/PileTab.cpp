#include "PileTab.h"

template <class T, int max>
PileTab<T, max>::PileTab()
{
    sommet = -1;
}

template <class T, int max>
bool PileTab<T, max>::estplein() const
{
    return sommet == max - 1;
}

template <class T, int max>
bool PileTab<T, max>::estvide() const
{
    return sommet == -1;
}

template <class T, int max>
void PileTab<T, max>::empiler(T val)
{
    if (estplein())
    {
        cout << "Pile est pleine" << endl;
        return;
    }

    tab[++sommet] = val;
}

template <class T, int max>
T PileTab<T, max>::depiler()
{
    if (estvide())
    {
        cout << "Pile est vide" << endl;
        return T();
    }

    return tab[sommet--];
}

template <class T, int max>
void PileTab<T, max>::afficher() const
{
    if (estvide())
    {
        cout << "Pile est vide" << endl;
        return;
    }

    for (int i = sommet; i >= 0; i--)
    {
        cout << tab[i] << "-";
    }

    cout << endl;
}

template <class T, int max>
PileTab<T, max>::~PileTab()
{
}

// Explicit instantiation
template class DLL_EXPORT PileTab<int, 10>;
