#include <iostream>
using namespace std;

// Template Class
template <class T>
class Max {
    T a, b;

public:
    // Constructor
    Max(T x, T y) {
        a = x;
        b = y;
    }

    void findMax() {
        if (a > b)
            cout << "Maximum: " << a << endl;
        else
            cout << "Maximum: " << b << endl;
    }
};

int main() {
    Max<int> m1(10, 20);
    m1.findMax();

    Max<double> m2(5.5, 3.3);
    m2.findMax();

    return 0;
}
