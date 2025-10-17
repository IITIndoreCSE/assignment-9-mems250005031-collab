#include <iostream>
using namespace std;

// Define the structure Point
struct Point {
    float x;  // X-coordinate
    float y;  // Y-coordinate
};

int main() {
    // Declare an array of 7 Point structures
    Point points[7];
    int count = 0;  // To count the points in the first quadrant

    // Read the x and y coordinates for all 7 points from the user
    cout << "Enter the coordinates (x, y) for 7 points:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << " - Enter x: ";
        cin >> points[i].x;
        cout << "Point " << i + 1 << " - Enter y: ";
        cin >> points[i].y;
    }

    // Iterate through the array and count points in the first quadrant
    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            count++;
        }
    }

    // Display the result
    cout << "\nNumber of points in the first quadrant: " << count << endl;

    return 0;
}
