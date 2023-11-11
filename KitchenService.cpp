#include "KitchenService.h"

KitchenService::KitchenService(DateTime atTime, 
	string description)
	: RoomCharge(atTime)
{
	this->description = description;
}