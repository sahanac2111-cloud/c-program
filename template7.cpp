#include <iostream>
using namespace std;

template <class T>
class Test {
    T data;
public:
    Test(T x) {
        data = x;
    }
    void display() {
        cout << "Value: " << data << endl;
    }
};

int main() {
    Test<int> t1(10);
    Test<double> t2(5.5);

    t1.display();
    t2.display();

    return 0;
}
