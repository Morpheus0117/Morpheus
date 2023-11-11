#include "Account.h"
Account::Account(
	string id,
	string password,
	AccountStatus status
)
{
	this->id = id;
	this->password = password;
	this->status = status;
}
bool Account::resetPassword()
{
	// chua code ..
	return true;
}