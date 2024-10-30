#include "Save_Account.h"
#include "Devise.h"
double ILISI_bank::Save_Account::taux_interets = 0.06;

ILISI_bank::Save_Account::Save_Account(Customer* o, Devise* d, HistoryTransaction* h, string date) :
	Account(o, d, h, date)
{}

ILISI_bank::Devise* ILISI_bank::Save_Account::calculer_interets()
{
	return (*this->balance) * this->taux_interets;
}