#include <iostream>
using namespace std;

// Define the structure 'Color'
struct Color {
    int red;   // Red component of the color
    int green; // Green component of the color
    int blue;  // Blue component of the color
};

int main() {
    // Declare and initialize an array of 5 'Color' structures with sample RGB values
    Color colors[5] = {
        {255, 0, 0},   // Red color
        {0, 255, 0},   // Green color
        {0, 0, 255},   // Blue color
        {255, 255, 0}, // Yellow color
        {0, 255, 255}  // Cyan color
    };

    // Use a 'for' loop to invert the color values of the first 3 elements
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    // Display the new RGB values for all 5 elements
    cout << "Inverted Colors:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " - R: " << colors[i].red 
             << ", G: " << colors[i].green << ", B: " << colors[i].blue << endl;
    }

    return 0;
}
