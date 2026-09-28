#include <iostream>
#include "PilePoint.h"
#include "PileTab.h"

using namespace std;

int main()
{
    // =========================
    // PILE AVEC LISTE CHAINEE
    // =========================

    cout << "===== PILE LISTE CHAINEE =====" << endl;

    PilePoint<int> p1;

    p1.empiler(10);
    p1.empiler(20);
    p1.empiler(30);

    cout << "Contenu :" << endl;
    p1.afficher();

    p1.depiler();

    cout << "Apres depilage :" << endl;
    p1.afficher();


    // =========================
    // PILE AVEC TABLEAU
    // =========================

    cout << endl;
    cout << "===== PILE TABLEAU =====" << endl;

    PileTab<int, 10> p2;

    p2.empiler(10);
    p2.empiler(20);
    p2.empiler(30);
    p2.empiler(40);
    p2.empiler(50);

    cout << "Contenu :" << endl;
    p2.afficher();

    cout << "Element depile : " << p2.depiler() << endl;
    cout << "Element depile : " << p2.depiler() << endl;

    cout << "Apres depilage :" << endl;
    p2.afficher();

    return 0;
}
