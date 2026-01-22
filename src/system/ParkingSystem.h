#ifndef PARKING_SYSTEM_H
#define PARKING_SYSTEM_H

#include "../core/ParkingArea.h"
#include "../engine/AllocationEngine.h"

class ParkingSystem {
private:
    ParkingArea* area;

public:
    ParkingSystem();
    ~ParkingSystem();

    void initialize();
    bool processRequest(const std::string& vehicleId, VehicleType type, int duration);
    bool releaseSlot(int slotId);
    void displayStatus() const;
    
    ParkingArea* getArea() const;
};

#endif // PARKING_SYSTEM_H
