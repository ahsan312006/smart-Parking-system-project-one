#include "ParkingSystem.h"
#include <iostream>

ParkingSystem::ParkingSystem() : area(new ParkingArea(1)) {}

ParkingSystem::~ParkingSystem() {
    delete area;
}

void ParkingSystem::initialize() {
    // Create Zones
    Zone* carZone = new Zone("Car Zone", VehicleType::CAR);
    Zone* bikeZone = new Zone("Bike Zone", VehicleType::MOTORBIKE);
    Zone* busZone = new Zone("Bus Zone", VehicleType::BUS);

    // Add Slots to Car Zone
    for (int i = 1; i <= 10; ++i) {
        carZone->addSlot(new ParkingSlot(100 + i, VehicleType::CAR));
    }

    // Add Slots to Bike Zone
    for (int i = 1; i <= 5; ++i) {
        bikeZone->addSlot(new ParkingSlot(200 + i, VehicleType::MOTORBIKE));
    }

    // Add Slots to Bus Zone
    for (int i = 1; i <= 3; ++i) {
        busZone->addSlot(new ParkingSlot(300 + i, VehicleType::BUS));
    }

    area->addZone(carZone);
    area->addZone(bikeZone);
    area->addZone(busZone);
}

bool ParkingSystem::processRequest(const std::string& vehicleId, VehicleType type, int duration) {
    ParkingRequest request(vehicleId, type, duration);
    ParkingSlot* slot = AllocationEngine::findBestSlot(*area, request);

    if (slot) {
        slot->occupy(vehicleId);
        std::cout << "Successfully parked vehicle " << vehicleId << " in slot " << slot->getId() << std::endl;
        return true;
    } else {
        std::cout << "No available slots for vehicle type " << (int)type << std::endl;
        return false;
    }
}

bool ParkingSystem::releaseSlot(int slotId) {
    ParkingSlot* slot = area->findSlotById(slotId);
    if (slot && slot->getStatus() == SlotStatus::OCCUPIED) {
        slot->vacate();
        std::cout << "Slot " << slotId << " is now vacant." << std::endl;
        return true;
    } else {
        std::cout << "Slot " << slotId << " is not occupied or does not exist." << std::endl;
        return false;
    }
}

void ParkingSystem::displayStatus() const {
    area->showSlots();
}

ParkingArea* ParkingSystem::getArea() const {
    return area;
}
