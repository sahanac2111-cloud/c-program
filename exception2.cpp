#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    try {
        if (n % 2 != 0)   // odd number
            throw "Number is not even";

        cout << "Number is EVEN";
    }
    catch (const char* msg) {
        cout << "Exception: " << msg;
    }

    return 0;
}
