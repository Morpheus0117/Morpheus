#include "CreditCardTransaction.h"

CreditCardTransaction::CreditCardTransaction(
	double amount,
	DateTime creationDate,
	string nameOnCard,
	string zipCode)
	: BillTransaction(amount, creationDate)
{
	this->nameOnCard = nameOnCard;
	this->zipCode = zipCode;
}