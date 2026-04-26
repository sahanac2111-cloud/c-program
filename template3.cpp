#include <iostream>
using namespace std;

// Template function
template <class T>
T findMax(T arr[], int size) {
    T max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int intArr[] = {5, 2, 9, 1, 7};
    double doubleArr[] = {2.5, 1.1, 3.8, 0.9};

    cout << "Maximum (int array): "
         << findMax(intArr, 5) << endl;

    cout << "Maximum (double array): "
         << findMax(doubleArr, 4) << endl;

    return 0;
}
