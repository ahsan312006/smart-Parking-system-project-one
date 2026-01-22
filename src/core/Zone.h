#ifndef ZONE_H
#define ZONE_H

#include <vector>
#include <string>
#include "ParkingSlot.h"

class Zone {
private:
    std::string name;
    VehicleType allowedType;
    std::vector<ParkingSlot*> slots;

public:
    Zone(const std::string& name, VehicleType allowedType);
    ~Zone();

    void addSlot(ParkingSlot* slot);
    const std::vector<ParkingSlot*>& getSlots() const;
    std::string getName() const;
    VehicleType getAllowedType() const;
    
    int getAvailableCount() const;
    int getTotalCount() const;
};

#endif // ZONE_H
