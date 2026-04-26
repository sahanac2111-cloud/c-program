#include <iostream>
using namespace std;

// Template function
template <class T>
void swapVal(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapVal(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    double a = 1.5, b = 2.5;
    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;

    swapVal(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
