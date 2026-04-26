#include <iostream>
using namespace std;

template <class T>
void reverseArray(T arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        T temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverseArray(a, n);

    cout << "Reversed int array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    double b[] = {1.1, 2.2, 3.3};
    reverseArray(b, 3);

    cout << "\nReversed double array: ";
    for (int i = 0; i < 3; i++)
        cout << b[i] << " ";

    return 0;
}
