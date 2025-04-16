#include <iostream>
#include <string>
using namespace std;

class Navigation {
protected:
    string currentLocation;

public:
    Navigation() {
        currentLocation = "Unknown";
    }

    void setLocation(string location) {
        currentLocation = location;
    }

    string getLocation() {
        return currentLocation;
    }
};

class SmartNavigation : public Navigation {
private:
    struct Route {
        string start;
        string end;
        int distance;
    };
    Route routes[10]; // Fixed size array
    int routeCount;   // To keep track of number of routes

public:
    SmartNavigation() {
        routeCount = 3;


        routes[0] = {"CityA", "CityB", 50};
        routes[1] = {"CityB", "CityC", 30};
        routes[2] = {"CityA", "CityC", 90};
    }

    void findShortestRoute(string destination) {
        cout << "\nCalculating route from " << currentLocation << " to " << destination << "...\n";

        int shortestDistance = 999999;
        for(int i = 0; i < routeCount; i++) {
            if(routes[i].start == currentLocation && routes[i].end == destination) {
                if(routes[i].distance < shortestDistance) {
                    shortestDistance = routes[i].distance;
                }
            }
        }

        if(shortestDistance != 999999) {
            cout << "Shortest route found: " << shortestDistance << " km\n";
        } else {
            cout << "No direct route found!\n";
        }
    }
};

int main() {
    SmartNavigation nav;


    nav.setLocation("CityA");
    cout << "Current Location: " << nav.getLocation() << endl;
    nav.findShortestRoute("CityB");

    return 0;
}
