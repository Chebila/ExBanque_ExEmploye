#include "Employe.h"
double Employe::taux_horaire = 50;
Employe::Employe(string n, string p, int nbrHt) : nom(n), prenom(p), nbrHeureT(nbrHt)
{
    salaire = 0.0;
}

double Employe::Calculer_salaireB()
{
    return nbrHeureT*taux_horaire;
}

void Employe::print_employe() const
{
    cout << "\nInformations Employe : " << endl;
    cout << "Nom : " << this->nom << endl;
    cout << "Prenom : " << this->prenom << endl;
    cout << "Heure de trvail : " << this->nbrHeureT << endl;
}
