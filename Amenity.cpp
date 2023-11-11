#include "Amenity.h"

Amenity::Amenity(DateTime atTime, 
	string name, string description)
	: RoomCharge(atTime)
{
	this->description = description;
	this->name = name;
}