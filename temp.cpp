#include <iostream>
#include <string>

using namespace std;

// Forward declaration for TrafficSignal to resolve pointer dependencies.
class TrafficSignal;

// Abstract base class for all vehicles, defining common properties and behaviors.
class Vehicle {
protected:
    string vehicleID;
    double speed;
    string fuelType;
    int capacity;

public:
    Vehicle(string id, double spd, string fuel, int cap)
        : vehicleID(id), speed(spd), fuelType(fuel), capacity(cap) {}

    // Pure virtual functions: subclasses must implement these.
    virtual double computeTravelTime(double distance) = 0;
    virtual void getVehicleDetails() = 0;

    string getVehicleID() const { return vehicleID; }
};

// Car subclass.
class Car : public Vehicle {
protected:
    int numDoors;

public:
    Car(string id, double spd, string fuel, int cap, int doors)
        : Vehicle(id, spd, fuel, cap), numDoors(doors) {}

    double computeTravelTime(double distance) override {
        return distance / speed;
    }

    void getVehicleDetails() override {
        cout << "  Vehicle Type: Car" << endl;
        cout << "  ID: " << vehicleID << endl;
        cout << "  Speed: " << speed << " km/h" << endl;
        cout << "  Fuel Type: " << fuelType << endl;
        cout << "  Capacity: " << capacity << " people" << endl;
        cout << "  Number of Doors: " << numDoors << endl;
    }
};

// Bus subclass.
class Bus : public Vehicle {
protected:
    int standingCapacity;

public:
    Bus(string id, double spd, string fuel, int cap, int standingCap)
        : Vehicle(id, spd, fuel, cap), standingCapacity(standingCap) {}

    // Bus travel time includes a factor for stops.
    double computeTravelTime(double distance) override {
        return (distance / speed) * 1.2;
    }

    void getVehicleDetails() override {
        cout << "  Vehicle Type: Bus" << endl;
        cout << "  ID: " << vehicleID << endl;
        cout << "  Speed: " << speed << " km/h" << endl;
        cout << "  Fuel Type: " << fuelType << endl;
        cout << "  Capacity: " << capacity << " seated, " << standingCapacity << " standing" << endl;
    }
};

// Motorcycle subclass.
class Motorcycle : public Vehicle {
protected:
    bool hasSidecar;

public:
    Motorcycle(string id, double spd, string fuel, int cap, bool sidecar)
        : Vehicle(id, spd, fuel, cap), hasSidecar(sidecar) {}

    double computeTravelTime(double distance) override {
        return distance / speed;
    }

    void getVehicleDetails() override {
        cout << "  Vehicle Type: Motorcycle" << endl;
        cout << "  ID: " << vehicleID << endl;
        cout << "  Speed: " << speed << " km/h" << endl;
        cout << "  Fuel Type: " << fuelType << endl;
        cout << "  Capacity: " << capacity << " people" << endl;
        cout << "  Has Sidecar: " << (hasSidecar ? "Yes" : "No") << endl;
    }
};

// Defines the possible states of a traffic signal.
enum SignalState {
    RED,
    YELLOW,
    GREEN
};

// Manages a single traffic light's state and behavior.
class TrafficSignal {
protected:
    int signalID;
    string location;
    SignalState currentState;
    int timer; // Time remaining for current state in "simulation steps"

public:
    TrafficSignal(int id, string loc, SignalState initialState, int initialTimer)
        : signalID(id), location(loc), currentState(initialState), timer(initialTimer) {}

    // Advances the signal's timer and changes its state if needed.
    void operateSignal() {
        if (timer > 0) {
            timer--;
        } else {
            // Cycle through signal states.
            switch (currentState) {
                case RED:
                    currentState = GREEN;
                    timer = 30;
                    break;
                case GREEN:
                    currentState = YELLOW;
                    timer = 5;
                    break;
                case YELLOW:
                    currentState = RED;
                    timer = 25;
                    break;
            }
        }
        cout << "  Signal " << signalID << " (" << location << "): ";
        switch (currentState) {
            case RED: cout << "RED (Timer: " << timer << "s)" << endl; break;
            case YELLOW: cout << "YELLOW (Timer: " << timer << "s)" << endl; break;
            case GREEN: cout << "GREEN (Timer: " << timer << "s)" << endl; break;
        }
    }

    // Forces the signal to RED for a specified duration (e.g., during an emergency).
    void emergencyOverride(int duration) {
        currentState = RED;
        timer = duration;
        cout << "  !!! Emergency Override for Signal " << signalID << " (" << location << "): Forced to RED for " << duration << "s !!!" << endl;
    }

    int getSignalID() const { return signalID; }
    string getLocation() const { return location; }
    SignalState getCurrentState() const { return currentState; }
    void setTimer(int newTimer) { timer = newTimer; }
};

// Handles logging accidents and their impact on nearby traffic signals.
class AccidentReport {
protected:
    int reportID;
    string vehicleID1;
    string vehicleID2;
    bool hasSecondVehicle;
    string location;
    string severity;
    TrafficSignal* nearbySignal; // Pointer to a related traffic signal.

public:
    AccidentReport(int id, string vID1, string loc, string sev, TrafficSignal* signal = nullptr, string vID2 = "")
        : reportID(id), vehicleID1(vID1), location(loc), severity(sev), nearbySignal(signal) {
        hasSecondVehicle = (vID2 != "");
        vehicleID2 = vID2;
    }

    // Logs accident details and triggers signal adjustment if a nearby signal is linked.
    void logAccident() {
        cout << "\n--- Accident Report (ID: " << reportID << ") ---\n";
        cout << "  Location: " << location << endl;
        cout << "  Severity: " << severity << endl;
        cout << "  Vehicles Involved: " << vehicleID1;
        if (hasSecondVehicle) {
            cout << ", " << vehicleID2;
        }
        cout << endl;

        if (nearbySignal) {
            cout << "  Associated Traffic Signal: " << nearbySignal->getSignalID() << " (" << nearbySignal->getLocation() << ")" << endl;
            // Dynamically adjust signal: force to RED due to accident.
            nearbySignal->emergencyOverride(10);
        } else {
            cout << "  No nearby traffic signal reported for this accident." << endl;
        }
        cout << "---------------------------------\n";
    }
};

// Main simulation function.
int main() {
    // --- 1. Vehicle Management Demonstration ---
    cout << "--- Vehicle Management Demonstration ---\n";
    
    // Fixed array for vehicles.
    Vehicle* vehicles[3];
    vehicles[0] = new Car("C-001", 60.0, "Petrol", 4, 4);
    vehicles[1] = new Bus("B-001", 40.0, "Diesel", 30, 20);
    vehicles[2] = new Motorcycle("M-001", 80.0, "Petrol", 2, false);

    double distance = 10.0;

    for (int i = 0; i < 3; ++i) {
        cout << "\nVehicle Details:" << endl;
        vehicles[i]->getVehicleDetails();
        cout << "  Estimated travel time for " << distance << " km: " << vehicles[i]->computeTravelTime(distance) << " hours" << endl;
    }

    // --- 2. Traffic Signal Simulation ---
    cout << "\n--- Traffic Signal Simulation ---\n";
    
    // Creating signal objects.
    TrafficSignal signal1(101, "Downtown Crossing", GREEN, 20);
    TrafficSignal signal2(102, "Uptown Square", RED, 15);
    TrafficSignal signal3(103, "Highway Exit 5", GREEN, 40);

    // Fixed array for signals.
    TrafficSignal* signals[3];
    signals[0] = &signal1;
    signals[1] = &signal2;
    signals[2] = &signal3;

    // Simulate 5 time steps for signals.
    for (int i = 0; i < 5; ++i) {
        cout << "\n--- Simulation Step " << i + 1 << " ---\n";
        for (int j = 0; j < 3; ++j) {
            signals[j]->operateSignal();
        }
    }

    // --- 3. Accident Reporting and Dynamic Signal Adjustment ---
    cout << "\n--- Accident Reporting and Dynamic Signal Adjustment ---\n";

    // Simulate an accident involving two vehicles near signal3.
    AccidentReport accident1(1, "C-001", "Near Highway Exit 5", "Moderate", &signal3, "B-001");
    accident1.logAccident();

    // Show signal status after the accident (signal 103 should be RED).
    cout << "\n--- Post-Accident Signal Status (Signal 103 should be RED) ---\n";
    for (int j = 0; j < 3; ++j) {
        signals[j]->operateSignal();
    }

    // Clean up dynamically allocated Vehicle objects.
    for (int i = 0; i < 3; ++i) {
        delete vehicles[i];
    }

    cout << "\nSimulation Complete. Goodbye!\n";

    return 0;
}
