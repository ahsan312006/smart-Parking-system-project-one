# SmartPark Pro - Advanced Parking Management System

SmartPark Pro is a state-of-the-art parking management solution designed for modern urban environments. It features a high-performance C++ core engine for parking logic and a stunning, responsive React-based dashboard for real-time monitoring and management.

## 🚀 Features

- **Real-time Monitoring**: Live dashboard with glassmorphism design and smooth animations.
- **Automated Booking**: Easy-to-use interface for parking and releasing vehicles.
- **Multi-Vehicle Support**: Specialized zones for Cars, Motorbikes, and Buses.
- **Simulation Mode**: Built-in simulation engine for demonstration and testing.
- **Data Analytics**: Exportable CSV reports for parking sessions and revenue tracking.
- **C++ Core Engine**: Robust backend logic for slot allocation and status management.

## 🛠️ Tech Stack

- **Frontend**: React 18, TypeScript, Vite, Framer Motion, Lucide React, Tailwind CSS.
- **Backend/Core**: C++17 (Object-Oriented Design).
- **Styling**: Modern Glassmorphism UI with custom CSS variables.

## 📦 Project Structure

```text
Smart-Parking_System/
├── smart-parking-ui/      # React Frontend
│   ├── src/               # UI Components and Logic
│   └── public/            # Static Assets
├── src/                   # C++ Core Engine
│   ├── core/              # Domain Models (Slot, Vehicle, Zone)
│   ├── system/            # Parking System Logic
│   └── engine/            # Simulation/Processing Engine
├── parking                # Compiled C++ Binary (Linux)
└── parking.exe            # Compiled C++ Binary (Windows)
```

## 🚀 Getting Started

### Prerequisites

- Node.js (v18+)
- npm or yarn
- C++ Compiler (g++ or clang)

### Running the UI

1. Navigate to the UI directory:
   ```bash
   cd smart-parking-ui
   ```
2. Install dependencies:
   ```bash
   npm install
   ```
3. Start the development server:
   ```bash
   npm run dev
   ```
4. Open `http://localhost:5173` in your browser.

### Running the C++ Core (CLI)

1. Compile the source:
   ```bash
   g++ -o parking src/system/main.cpp src/system/ParkingSystem.cpp src/core/*.cpp -I src/core -I src/system
   ```
2. Run the executable:
   ```bash
   ./parking
   ```

## 📊 Shipment Readiness Checklist

- [x] Core logic implementation (C++).
- [x] Modern UI Dashboard (React).
- [x] Real-time status updates.
- [x] Simulation mode for demo.
- [x] CSV Report Export.
- [x] Responsive design.
- [x] SEO Optimization.

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.
