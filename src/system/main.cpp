#include <iostream>
#include <string>
#include "ParkingSystem.h"

void showMenu() {
    std::cout << "\n=== Smart Parking System ===\n";
    std::cout << "1. Park Vehicle\n";
    std::cout << "2. Release Slot\n";
    std::cout << "3. Display Status\n";
    std::cout << "4. Exit\n";
    std::cout << "Choice: ";
}

int main() {
    ParkingSystem system;
    system.initialize();

    int choice;
    std::string vehicleId;
    int typeChoice;
    int slotId;

    while (true) {
        showMenu();
        if (!(std::cin >> choice)) break;

        switch (choice) {
            case 1:
                std::cout << "Enter Vehicle ID: ";
                std::cin >> vehicleId;
                std::cout << "Enter Vehicle Type (0:Car, 1:Bike, 2:Bus): ";
                std::cin >> typeChoice;
                system.processRequest(vehicleId, static_cast<VehicleType>(typeChoice), 60);
                break;
            case 2:
                std::cout << "Enter Slot ID to release: ";
                std::cin >> slotId;
                system.releaseSlot(slotId);
                break;
            case 3:
                system.displayStatus();
                break;
            case 4:
                return 0;
            default:
                std::cout << "invalid choice!\n";
        }
    }

    return 0;
}