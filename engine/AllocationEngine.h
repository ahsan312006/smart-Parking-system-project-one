#ifndef ALLOCATION_ENGINE_H
#define ALLOCATION_ENGINE_H

#include "../core/ParkingArea.h"
#include "../core/ParkingRequest.h"

class AllocationEngine {
public:
    static ParkingSlot* findBestSlot(const ParkingArea& area, const ParkingRequest& request);
};

#endif // ALLOCATION_ENGINE_H
