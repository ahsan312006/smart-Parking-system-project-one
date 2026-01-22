#include "ParkingArea.h"
#include <iostream>
#include <iomanip>

ParkingArea::ParkingArea(int id) : id(id) {}

ParkingArea::~ParkingArea() {
    for (auto zone : zones) {
        delete zone;
    }
}

void ParkingArea::addZone(Zone* zone) {
    zones.push_back(zone);
}

const std::vector<Zone*>& ParkingArea::getZones() const {
    return zones;
}

int ParkingArea::getId() const { return id; }

void ParkingArea::showSlots() const {
    std::cout << "\n--- Parking Area " << id << " Status ---\n";
    std::cout << std::left << std::setw(10) << "Zone" 
              << std::setw(10) << "Slot ID" 
              << std::setw(15) << "Type" 
              << std::setw(15) << "Status" 
              << "Occupied By" << std::endl;
    std::cout << std::string(60, '-') << std::endl;

    for (const auto& zone : zones) {
        for (const auto& slot : zone->getSlots()) {
            std::cout << std::left << std::setw(10) << zone->getName()
                      << std::setw(10) << slot->getId()
                      << std::setw(15) << slot->getTypeString()
                      << std::setw(15) << slot->getStatusString()
                      << slot->getOccupiedBy() << std::endl;
        }
    }
}

ParkingSlot* ParkingArea::findSlotById(int slotId) const {
    for (const auto& zone : zones) {
        for (const auto& slot : zone->getSlots()) {
            if (slot->getId() == slotId) {
                return slot;
            }
        }
    }
    return nullptr;
}
