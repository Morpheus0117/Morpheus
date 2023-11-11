#include "RoomBooking.h"

RoomBooking::RoomBooking(
	DateTime startDate, int durationInDays
)
{
	this->startDate = startDate;
	this->durationInDays = durationInDays;
	// default - init...
	this->status = BookingStatus::Requested;
	this->reservationNumber = "000Co";
	this->checkin = DateTime(0, 0, 0);
	this->checkout = DateTime(0, 0, 0);
}
bool RoomBooking::checkOverlap(
	IN DateTime checkinDate, IN DateTime checkoutDate
)
{
	// checkinDate < this.EndDate = this.startDate+duration
	// this.startDate < checkoutDate

	return 
		(checkinDate.compareDate
		 (this->startDate.afterNDays(this->durationInDays))  == -1)
		&&
		(checkoutDate.compareDate(this->startDate) == 1)
		;
}

string RoomBooking::toString()
{
	return
		"[Booking] start " 
		+ startDate.toString() + " - " 
		+ startDate.afterNDays(durationInDays).toString()
		;
}