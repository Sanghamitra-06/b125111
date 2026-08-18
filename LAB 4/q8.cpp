#include <iostream>
#include <string>
using namespace std;
class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool isBooked;
public:
    TrainSeat(int seat, string name, bool booked) {
        seatNumber = seat;
        passengerName = name;
        isBooked = booked;
    }

    friend class TicketChecker;
};
class TicketChecker {
public:
    void displaySeatDetails(const TrainSeat& ts) {
        cout << "Seat Number: " << ts.seatNumber << endl;
        cout << "Booking Status: " << (ts.isBooked ? "Booked" : "Available") << endl;
        if (ts.isBooked) {
            cout << "Passenger Name: " << ts.passengerName << endl;
        }
    }
    void checkAvailability(const TrainSeat& ts) {
        if (ts.isBooked) {
            cout << "Seat " << ts.seatNumber << " is already booked." << endl;
        } else {
            cout << "Seat " << ts.seatNumber << " is available." << endl;
        }
    }
    void displayPassengerIfBooked(const TrainSeat& ts) {
        if (ts.isBooked) {
            cout << "Passenger on Seat " << ts.seatNumber << ": " << ts.passengerName << endl;
        }
    }
};
int main() {
    TrainSeat s1(11, "SONALI", true);
    TrainSeat s2(12, "", false);
    TicketChecker checker;
    checker.displaySeatDetails(s1);
    cout << endl;
    checker.checkAvailability(s2);
    
    return 0;
}
