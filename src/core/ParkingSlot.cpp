#include "ParkingSlot.h"

ParkingSlot::ParkingSlot(int id, VehicleType type) 
    : id(id), type(type), status(SlotStatus::AVAILABLE), occupiedBy("") {}

int ParkingSlot::getId() const { return id; }
VehicleType ParkingSlot::getType() const { return type; }
SlotStatus ParkingSlot::getStatus() const { return status; }
std::string ParkingSlot::getOccupiedBy() const { return occupiedBy; }

void ParkingSlot::setStatus(SlotStatus newStatus) { status = newStatus; }

void ParkingSlot::occupy(const std::string& vehicleId) {
    status = SlotStatus::OCCUPIED;
    occupiedBy = vehicleId;
}

void ParkingSlot::vacate() {
    status = SlotStatus::AVAILABLE;
    occupiedBy = "";
}

std::string ParkingSlot::getStatusString() const {
    switch (status) {
        case SlotStatus::AVAILABLE: return "Available";
        case SlotStatus::OCCUPIED: return "Occupied";
        case SlotStatus::RESERVED: return "Reserved";
        case SlotStatus::MAINTENANCE: return "Maintenance";
        default: return "Unknown";
    }
}

std::string ParkingSlot::getTypeString() const {
    switch (type) {
        case VehicleType::CAR: return "Car";
        case VehicleType::MOTORBIKE: return "Motorbike";
        case VehicleType::BUS: return "Bus";
        case VehicleType::EV: return "EV";
        default: return "Unknown";
    }
}
