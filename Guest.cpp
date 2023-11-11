#include "Guest.h"

Guest::Guest(Person guest)
	: Person(
		guest.getName(),
		guest.getAddress(),
		guest.getEmail(),
		guest.getPhone(),
		guest.getAccountType()
	)
{

}
bool Guest::createBooking()
{
	// chua code
	return true;
}
