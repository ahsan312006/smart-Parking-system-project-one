#ifndef PARKING_SLOT_H
#define PARKING_SLOT_H

#include <string>

enum class SlotStatus {
    AVAILABLE,
    OCCUPIED,
    RESERVED,
    MAINTENANCE
};

enum class VehicleType {
    CAR,
    MOTORBIKE,
    BUS,
    EV
};

class ParkingSlot {
private:
    int id;
    VehicleType type;
    SlotStatus status;
    std::string occupiedBy;

public:
    ParkingSlot(int id, VehicleType type = VehicleType::CAR);
    
    int getId() const;
    VehicleType getType() const;
    SlotStatus getStatus() const;
    std::string getOccupiedBy() const;

    void setStatus(SlotStatus status);
    void occupy(const std::string& vehicleId);
    void vacate();
    
    std::string getStatusString() const;
    std::string getTypeString() const;
};

#endif // PARKING_SLOT_H
