#include "CashTransaction.h"

CashTransaction::CashTransaction(
	double amount,
	DateTime creationDate,
	double cashTendered
) : BillTransaction(amount, creationDate)
{
	this->cashTendered = cashTendered;
}