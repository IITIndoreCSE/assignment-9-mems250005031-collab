#include <iostream>
using namespace std;


struct Color {
    int red;   
    int green; 
    int blue;  
};

int main() {
    
    Color colors[5] = {
        {255, 0, 0},   
        {0, 255, 0},   
        {0, 0, 255},   
        {255, 255, 0}, 
        {0, 255, 255}  
    };

    
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    
    cout << "Inverted Colors:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " - R: " << colors[i].red 
             << ", G: " << colors[i].green << ", B: " << colors[i].blue << endl;
    }

    return 0;
}
