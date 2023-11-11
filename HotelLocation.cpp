#include "HotelLocation.h"


HotelLocation::HotelLocation(string name,
	Address location)
{
	this->location = location;
	this->name = name;
}

list<Room> HotelLocation::getRooms()
{
	return this->roomList;
}

list<Room> HotelLocation::getAvailableRooms(
	RoomStyle roomType,
	DateTime checkinDate,
	DateTime checkoutDate
)
{
	list<Room> kq = list<Room>() ;
	// sap xu ly ...
	for (auto x : this->roomList)
	{
		if (x.isRoomAvailable(
			checkinDate, checkoutDate, roomType
		))
		{
			kq.push_back(x);
		}
	}	
	return kq;
}

bool HotelLocation::addRoom(Room room)
{
	this->roomList.push_back(room);
	// tam thoi chua xu ly cac tinh huong khac
	return true;
}