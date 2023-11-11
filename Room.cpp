#include "Room.h"

Room::Room(
	string roomNumber,
	RoomStyle style,
	double bookingPrice,
	bool isSmoking
)
{
	this->bookingPrice = bookingPrice;
	this->roomNumber = roomNumber;
	this->style = style;
	this->isSmoking = isSmoking;
	// --- default
	this->status = RoomStatus::Available;
	this->bookingList = list<RoomBooking>();
}
bool Room::isRoomAvailable()
{
	// chua code
	return true;
}
bool Room::isRoomAvailable(IN DateTime checkinDate,
	IN DateTime checkoutDate)
{
	// code day roi
	bool flag = true;
	
	for (auto booking : bookingList)
	{
		if (booking.checkOverlap(checkinDate, checkoutDate))
		{
			flag = false;
			//break;
		}
	}
	return flag;
}

bool Room::isRoomAvailable(
	IN DateTime checkinDate,
	IN DateTime checkoutDate,
	IN RoomStyle roomStyle
)
{
	bool flag = false;
	if (roomStyle == this->style)
	{
		flag = true;
	}
	// code them 
	if (flag) {
		flag = isRoomAvailable(checkinDate, checkoutDate);
	}

	return flag;
}
bool Room::checkIn()
{
	// chua code
	return true;
}
bool Room::checkOut()
{
	// chua code
	return true;
}

bool Room::addBooking(DateTime start, int nDays)
{
	bool flag = false;
	if (this->isRoomAvailable(start, start.afterNDays(nDays)))
	{
		this->bookingList.push_back(
			RoomBooking(start, nDays)
		);
		flag = true;
	}
	return flag;
}

string Room::toString()
{
	string str =
	 "Room: " + this->roomNumber
		+ " . Price: " + to_string(this->bookingPrice)
		;

	for (auto booking : bookingList)
	{
		str = str + "\n\r\t" + booking.toString();
	}
	return str;
}