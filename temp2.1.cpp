#include <iostream>
#include <string>
using namespace std;

class Transport {
public:
    virtual void bookTicket() {
        cout << "Booking a generic transport ticket." << std::endl;
    }

    virtual ~Transport() {}
};

class Bus : public Transport {
public:
    void bookTicket() override {
        cout << "Booking a bus ticket: Selecting seat, checking route availability." << std::endl;
    }
};

class Train : public Transport {
public:
    void bookTicket() override {
        cout << "Booking a train ticket: Choosing class, checking train schedule." << std::endl;
    }
};

class Flight : public Transport {
public:
    void bookTicket() override {
        cout << "Booking a flight ticket: Selecting airline, seat, and managing baggage." << std::endl;
    }
};

int main() {
    Bus myBus;
    Train myTrain;
    Flight myFlight;

    Transport* transport1 = &myBus;
    Transport* transport2 = &myTrain;
    Transport* transport3 = &myFlight;

    cout << "--- Transport Ticket System ---" << std::endl;

    transport1->bookTicket();
    transport2->bookTicket();
    transport3->bookTicket();

    cout << "-------------------------------" << std::endl;

    return 0;
}