#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18)
            throw "Not eligible (below 18)";

        cout << "Eligible (18 or above)";
    }
    catch (const char* msg) {
        cout << "Exception: " << msg;
    }

    return 0;
}
