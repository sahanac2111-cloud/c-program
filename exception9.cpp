#include <iostream>
using namespace std;

// Custom Exception Class
class IndexException {
public:
    const char* message() {
        return "Error: Array index out of bounds!";
    }
};

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index (0-4): ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) {
            throw IndexException();
        }

        cout << "Element: " << arr[index] << endl;
    }
    catch (IndexException e) {
        cout << e.message() << endl;
    }

    return 0;
}
