#include "Server.h"

Server::Server(Person server)
	: Person(
		server.getName(),
		server.getAddress(),
		server.getEmail(),
		server.getPhone(),
		server.getAccountType()
	)
{

}
Server::Server(
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
bool Server::addRoomCharge()
{
	// chua code
	return true;
}
