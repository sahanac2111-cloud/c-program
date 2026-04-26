#include <iostream>
using namespace std;

// Custom Exception Class
class OutOfStockException {
public:
    void display() {
        cout << "Error: Requested quantity exceeds available stock!" << endl;
    }
};

// Product Class
class Product {
private:
    int stock;

public:
    // Constructor
    Product(int s) {
        stock = s;
    }

    // Purchase method
    void purchase(int quantity) {
        if (quantity > stock) {
            throw OutOfStockException();
        } else {
            stock -= quantity;
            cout << "Successfully purchased!" << endl;
            cout << "Stock left: " << stock << endl;
        }
    }
};

int main() {
    int availableStock, requestedQty;

    cout << "Enter available stock: ";
    cin >> availableStock;

    cout << "Enter requested quantity: ";
    cin >> requestedQty;

    Product p(availableStock);

    try {
        p.purchase(requestedQty);
    }
    catch (OutOfStockException e) {
        e.display();
    }

    return 0;
}
