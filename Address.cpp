#include "Address.h"

Address::Address(
	string streetAddress,
	string city,
	string state,
	string zipcode,
	string country
) {
	this->city = city;
	this->country = country;
	this->state = state;
	this->streetAddress = streetAddress;
	this->zipcode = zipcode;
}

string Address::toString() {
	return
		this->streetAddress
		+ " . " + this->city
		+ " . " + this->country;
}
