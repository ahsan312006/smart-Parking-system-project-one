#ifndef PARKING_REQUEST_H
#define PARKING_REQUEST_H

#include <string>
#include "ParkingSlot.h"

class ParkingRequest {
private:
    std::string vehicleId;
    VehicleType vehicleType;
    int durationMinutes;

public:
    ParkingRequest(const std::string& vehicleId, VehicleType vehicleType, int durationMinutes);

    std::string getVehicleId() const;
    VehicleType getVehicleType() const;
    int getDuration() const;
};

#endif // PARKING_REQUEST_H
