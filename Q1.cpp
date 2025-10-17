#include <iostream>
using namespace std;


struct Item {
    int id;        
    float cost;    
};

int main() {
    
    Item items[6] = {
        {1, 25.50},   
        {2, 75.00},   
        {3, 49.99},   
        {4, 100.00},  
        {5, 10.50},   
        {6, 120.00}  
    };

    
    for (int i = 0; i < 6; i++) {
        
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
