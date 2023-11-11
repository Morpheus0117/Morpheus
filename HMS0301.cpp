
//---------- BUILT-IN
#include <iostream>
#include <string>
using namespace std;

//--- DEV LIBs
#include "BasicTypes.h"
#include "Address.h"

//--- MOC TEST
#include "Account.h"
#include "Person.h"
#include "Room.h"
#include "HotelLocation.h"
#include "RoomBooking.h"

int main()
{
    cout << "HMS - ETE \n";

	HotelLocation ksHoaSen = HotelLocation(
		"nha nghi Hoa Sen",
		Address("7 TT", "HCM", "HCM", "70000", "VN")
	);
	
	Room r43 = Room("43", RoomStyle::Standard, 100000, false);
	r43.addBooking(DateTime(3, 11, 2023), 5);
	r43.addBooking(DateTime(10, 11, 2023), 3);
	r43.addBooking(DateTime(26, 11, 2023), 3);
	ksHoaSen.addRoom(r43);

	ksHoaSen.addRoom(
		Room("44", RoomStyle::FamilySuite, 200000, false)
	);
	ksHoaSen.addRoom(
		Room("45", RoomStyle::BusinessSuite, 300000, false)
	);
	ksHoaSen.addRoom(
		Room("46", RoomStyle::Deluxe, 400000, false)
	);
	ksHoaSen.addRoom(
		Room("47", RoomStyle::BusinessSuite, 500000, false)
	);

	//--- check Available Rooms
	list<Room> lst = ksHoaSen.getAvailableRooms(
		RoomStyle::Standard,
		DateTime(16, 11, 2023),
		DateTime(19, 11, 2023)
	);
	
	for (auto r : lst)
	{
		cout << r.toString() << endl;
	}

	bool kq = r43.isRoomAvailable(DateTime(16, 11, 2023),
		DateTime(19, 11, 2023));
	cout << kq;
}

/*

Person x = Person(
		"oTu",
		Address("11HB","HaLoi","HaBa","50000","VN"),
		"oTu@oNha.vn",
		"066666666",
		AccountType::Receptionist
	);

*/