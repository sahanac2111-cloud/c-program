#include <iostream>
#include <cctype>   // for isdigit()
using namespace std;

// Custom Exception Class
class InvalidPasswordException {
public:
    const char* message() {
        return "Error: Password must be at least 6 characters and contain a digit!";
    }
};

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    try {
        // Check length
        if (password.length() < 6) {
            throw InvalidPasswordException();
        }

        // Check digit
        bool hasDigit = false;
        for (char ch : password) {
            if (isdigit(ch)) {
                hasDigit = true;
                break;
            }
        }

        if (!hasDigit) {
            throw InvalidPasswordException();
        }

        cout << "Password is valid ✅" << endl;
    }
    catch (InvalidPasswordException e) {
        cout << e.message() << endl;
    }

    return 0;
}
