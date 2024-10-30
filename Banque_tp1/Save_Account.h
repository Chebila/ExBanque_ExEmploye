#pragma once
using namespace std;
#include "Account.h"
#include "Devise.h"
namespace ILISI_bank
{
	class Save_Account : public Account
	{
	private:
		static double taux_interets;
	public:
		Save_Account(Customer* o, Devise* d, HistoryTransaction* h, string date);
		Devise* calculer_interets();
	};
}
