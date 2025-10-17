#include <iostream>
using namespace std;

// Define the structure 'Item'
struct Item {
    int id;        // Integer to store the ID of the item
    float cost;    // Float to store the cost of the item
};

int main() {
    // Declare an array of 6 'Item' structures
    Item items[6] = {
        {1, 25.50},   // Initializing first item with id=1, cost=25.50
        {2, 75.00},   // Initializing second item with id=2, cost=75.00
        {3, 49.99},   // Initializing third item with id=3, cost=49.99
        {4, 100.00},  // Initializing fourth item with id=4, cost=100.00
        {5, 10.50},   // Initializing fifth item with id=5, cost=10.50 (default values)
        {6, 120.00}   // Initializing sixth item with id=6, cost=120.00 (default values)
    };

    // Use a 'for' loop to iterate through the entire array
    for (int i = 0; i < 6; i++) {
        // If the cost of the item is greater than 50.00, display its details
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
