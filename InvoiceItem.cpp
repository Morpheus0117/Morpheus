#include "InvoiceItem.h"

InvoiceItem::InvoiceItem(double  amount)
{
	this->amount = amount;
}

bool InvoiceItem::updateAmount(double  amount)
{
	bool flag = false;
	if (amount > 0) {
		this->amount = amount;
		flag = true;
	}
	return flag;
}
