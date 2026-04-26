#include <iostream>
using namespace std;

// Exception: Show Full
class ShowFullException {
public:
    void message() {
        cout << "Exception: Show is FULL!" << endl;
    }
};

// Exception: No Booking
class NoBookingException {
public:
    void message() {
        cout << "Exception: No tickets booked!" << endl;
    }
};

class MovieTicket {
    int capacity;
    int booked;

public:
    MovieTicket(int cap) {
        capacity = cap;
        booked = 0;
    }

    void bookTicket() {
        if (booked == capacity)
            throw ShowFullException();

        booked++;
        cout << "Ticket Booked. Total booked: " << booked << endl;
    }

    void cancelTicket() {
        if (booked == 0)
            throw NoBookingException();

        booked--;
        cout << "Ticket Cancelled. Total booked: " << booked << endl;
    }

    void display() {
        cout << "Available seats: " << (capacity - booked) << endl;
    }
};

int main() {
    MovieTicket m(5);   // capacity = 5 seats
    int choice;

    while (true) {
        cout << "\n1. Book Ticket\n2. Cancel Ticket\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:
                    m.bookTicket();
                    break;

                case 2:
                    m.cancelTicket();
                    break;

                case 3:
                    m.display();
                    break;

                case 4:
                    return 0;

                default:
                    cout << "Invalid choice!" << endl;
            }
        }
        catch (ShowFullException e) {
            e.message();
        }
        catch (NoBookingException e) {
            e.message();
        }
    }
}
