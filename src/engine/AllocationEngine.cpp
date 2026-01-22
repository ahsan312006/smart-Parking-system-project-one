#include "AllocationEngine.h"

ParkingSlot* AllocationEngine::findBestSlot(const ParkingArea& area, const ParkingRequest& request) {
    for (const auto& zone : area.getZones()) {
        // Check if zone allows this vehicle type
        if (zone->getAllowedType() == request.getVehicleType()) {
            for (const auto& slot : zone->getSlots()) {
                if (slot->getStatus() == SlotStatus::AVAILABLE) {
                    return slot;
                }
            }
        }
    }
    
    // Fallback: search all zones if no specific zone found (optional logic)
    return nullptr;
}
