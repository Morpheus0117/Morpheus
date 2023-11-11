#include "Person.h"

Person::Person(
	string name,
	Address address,
	string email,
	string phone,
	AccountType accountType
) {
	this->accountType = accountType;
	this->address = address;
	this->email = email;
	this->name = name;
	this->phone = phone;
}

void Person::setAccount(
	Account  account
) {
	this->account = account;
}

string Person::toString()
{
	return
		this->name
		+ " . " + this->phone
		+ " . " + this->address.toString();
}

string Person::getName()
{
	return this->name;
}
Address Person::getAddress()
{
	return this->address;
}
string Person::getEmail()
{
	return this->email;
}
string Person::getPhone()
{
	return this->phone;
}
AccountType  Person::getAccountType()
{
	return this->accountType;
}