#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    try {
        if (n < 0)
            throw "Negative number";

        if (n % 2 != 0)
            throw "Odd number";

        cout << "Even number";
    }
    catch (const char* msg) {
        cout << msg;
    }

    return 0;
}
