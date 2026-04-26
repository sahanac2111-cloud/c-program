#include <iostream>
#include <exception>
using namespace std;

// Exception Class
class OverSpeed : public exception {
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void getSpeed() {
        cout << "Speed: " << speed << endl;
    }

    const char* what() const noexcept {
        return "Overspeed! Check the car speed!";
    }
};

// Car Class
class Car {
    int speed;

public:
    Car() {
        speed = 0;
        cout << "Speed is zero" << endl;
    }

    void accelerate() {
        for (int i = 0; i < 30; i++) {
            speed += 10;
            cout << "Speed is: " << speed << endl;

            if (speed >= 250) {
                OverSpeed s;
                s.setSpeed(speed);
                throw s;
            }
        }
    }
};

int main() {
    Car c;

    try {
        c.accelerate();
    }
    catch (OverSpeed &s) {
        cout << s.what() << endl;
        s.getSpeed();
    }

    return 0;
}
