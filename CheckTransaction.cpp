#include "CheckTransaction.h"

CheckTransaction::CheckTransaction(
	double amount,
	DateTime creationDate,
	string bankName,
	string checkNumber
) : BillTransaction(amount, creationDate)
{
	this->bankName = bankName;
	this->checkNumber = checkNumber;
}