#include "ParkingRequest.h"

ParkingRequest::ParkingRequest(const std::string& vehicleId, VehicleType vehicleType, int durationMinutes)
    : vehicleId(vehicleId), vehicleType(vehicleType), durationMinutes(durationMinutes) {}

std::string ParkingRequest::getVehicleId() const { return vehicleId; }
VehicleType ParkingRequest::getVehicleType() const { return vehicleType; }
int ParkingRequest::getDuration() const { return durationMinutes; }
