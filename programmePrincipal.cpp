/**
 * \file programmePrincipal.cpp
 * \brief
 */

#include <cstdlib>
#include <iostream>
#include <array>
#include "fonctionsUtilitaires.h"
using namespace std;

int main() {
    int num;
    int nbEleves;
    array<array<int, MAX_EXAMENS>, MAX_ETUDIANTS> tabNotes;

    bool valeurCorrecte = false;
    while (!valeurCorrecte) {
        cout << "Saisissez le nombre d'élèves. Il doit être compris entre 1 et " << MAX_ETUDIANTS << "." << endl;
        cin >> nbEleves;
        if (nbEleves > 0 && nbEleves <= MAX_ETUDIANTS) {
            valeurCorrecte = true;
        } else {
            cout << "La valeur entrée n'est pas valide." << endl;
        }
    }
    cout << "Saisir uniquement des nombres entiers positifs et inférieurs à 100 " << endl <<
            "(ce programme ne prend pas en charge la validation de saisie)" << endl;
    saisieNotes(tabNotes, &nbEleves);
    cout << "taille " << nbEleves << endl;
    cout << "note minimum : " << minimum(tabNotes, &nbEleves) << endl;
    cout << "note maximum :" << maximum(tabNotes, &nbEleves) << endl;
    cout << "écart type : " << ecartType(tabNotes[0]) << endl;

    afficherTableau(tabNotes, &nbEleves);
    return 0;
}
