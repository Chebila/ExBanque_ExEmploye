#include "Commercial.h"
#include "Employe.h"
double Commercial::Comission = 100;

Commercial::Commercial(string nom, string prenom, int nbrHeureT, int totalV) :
     Employe(nom,  prenom, nbrHeureT), total_vente(totalV)
{}


double Commercial::Calculer_salaireB() 
{
    salaire = Employe::Calculer_salaireB();
    salaire = (Comission * total_vente);
    return salaire;
}

void Commercial::print_employe() const
{
    Employe::print_employe();
    cout << "Salaire :  " << this->salaire << endl;
    cout << "Total de vente : " << this->total_vente << endl;
}
