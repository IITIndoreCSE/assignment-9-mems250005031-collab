#include <iostream>
#include <string>
#include <limits>
using namespace std;


struct SalesRecord {
    string month;   
    float amount;   
};

int main() {
   
    SalesRecord records[12];

    
    cout << "Enter the sales records for each month:\n";
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ":\n";
        cout << "Enter month name: ";
        cin >> records[i].month;
        cout << "Enter sales amount: $";
        cin >> records[i].amount;
    }

    
    string maxMonth, minMonth;
    float maxSales = numeric_limits<float>::lowest();   
    float minSales = numeric_limits<float>::max();    

    
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

  
    cout << "\nMonth with maximum sales: " << maxMonth << " ($" << maxSales << ")\n";
    cout << "Month with minimum sales: " << minMonth << " ($" << minSales << ")\n";

    return 0;
}
