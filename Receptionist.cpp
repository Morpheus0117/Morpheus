#include "Receptionist.h"

Receptionist::Receptionist(Person a)
	: Person(
		a.getName(),
		a.getAddress(),
		a.getEmail(),
		a.getPhone(),
		a.getAccountType()
	)
{

}

Receptionist::Receptionist(
	string name,
	Address address,
	string email,
	string phone,
	AccountType accountType
)
	: Person(
		 name,
		 address,
		 email,
		 phone,
		 accountType
	)
{

}

bool Receptionist::assignToRoom()
{
	// chua code
	return true;
}