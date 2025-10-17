#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Define the structure SalesRecord
struct SalesRecord {
    string month;   // Month name
    float amount;   // Sales amount for the month
};

int main() {
    // Declare an array of 12 SalesRecord structures (representing a year)
    SalesRecord records[12];

    // Input sales data for each month
    cout << "Enter the sales records for each month:\n";
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ":\n";
        cout << "Enter month name: ";
        cin >> records[i].month;
        cout << "Enter sales amount: $";
        cin >> records[i].amount;
    }

    // Initialize variables to track the max and min sales
    string maxMonth, minMonth;
    float maxSales = numeric_limits<float>::lowest();  // Smallest possible float
    float minSales = numeric_limits<float>::max();    // Largest possible float

    // Iterate through the array to find the months with max and min sales
    for (int i = 0; i < 12; i++) {
        if (records[i].amount > maxSales) {
            maxSales = records[i].amount;
            maxMonth = records[i].month;
        }
        if (records[i].amount < minSales) {
            minSales = records[i].amount;
            minMonth = records[i].month;
        }
    }

    // Output the results
    cout << "\nMonth with maximum sales: " << maxMonth << " ($" << maxSales << ")\n";
    cout << "Month with minimum sales: " << minMonth << " ($" << minSales << ")\n";

    return 0;
}
