#include <iostream>
using namespace std;

template <class T>
class Compare {
    T a, b;

public:
    Compare(T x, T y) {
        a = x;
        b = y;
    }

    void check() {
        if (a == b)
            cout << "Both are equal" << endl;
        else if (a > b)
            cout << "First is greater" << endl;
        else
            cout << "Second is greater" << endl;
    }
};

int main() {
    Compare<int> c1(10, 20);
    c1.check();

    Compare<double> c2(5.5, 5.5);
    c2.check();

    return 0;
}
