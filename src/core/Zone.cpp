#include "Zone.h"

Zone::Zone(const std::string& name, VehicleType allowedType) 
    : name(name), allowedType(allowedType) {}

Zone::~Zone() {
    for (auto slot : slots) {
        delete slot;
    }
}

void Zone::addSlot(ParkingSlot* slot) {
    slots.push_back(slot);
}

const std::vector<ParkingSlot*>& Zone::getSlots() const {
    return slots;
}

std::string Zone::getName() const { return name; }
VehicleType Zone::getAllowedType() const { return allowedType; }

int Zone::getAvailableCount() const {
    int count = 0;
    for (const auto& slot : slots) {
        if (slot->getStatus() == SlotStatus::AVAILABLE) {
            count++;
        }
    }
    return count;
}

int Zone::getTotalCount() const {
    return slots.size();
}
