#include "RoomService.h"

RoomService::RoomService(DateTime atTime, bool isChargable,
	DateTime requestTime)
	: RoomCharge(atTime)
{
	this->isChargable = isChargable;
	this->requestTime = requestTime;
}