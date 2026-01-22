#ifndef PARKING_AREA_H
#define PARKING_AREA_H

#include <vector>
#include <string>
#include "Zone.h"

class ParkingArea {
private:
    int id;
    std::vector<Zone*> zones;

public:
    ParkingArea(int id);
    ~ParkingArea();

    void addZone(Zone* zone);
    const std::vector<Zone*>& getZones() const;
    int getId() const;

    void showSlots() const;
    ParkingSlot* findSlotById(int slotId) const;
};

#endif // PARKING_AREA_H
