//comsc-210 | lab 16 Color Class W/Constructors | Robert Stonemetz


#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // Default Constructors
    Color() : red(0), green(0), blue(0) {}

    //paramater constructor
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}

    //Partial Constructor for red

    Color (int r, int g, int b) : red(r), green(0), blue(0) {}

    //partial constructor for red and green

    Color (int r, int g,int b) : red(r), green (g), blue (0) {}

    //partial constructor for green and blue

    Color (int r, int g,int b) : red(0), green (g), blue (b) {}



    

    // Setters
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    // Getters
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }
    
    // Print method
    void print() const {
        cout << "RGB(" << setw(3) << red << ", " 
             << setw(3) << green << ", " 
             << setw(3) << blue << ")";
    }
};

int main() {

    Color color1(255, 0, 0);
    Color color2(0, 255, 0);
    Color color3(0, 0,255);
    Color color4;

    color4.setRed(128);
    color4.setGreen(128);
    color4.setBlue(128);

    cout << "Color 1: ";
    color1.print();
    cout << endl;

    cout << "Color 2: ";
    color2.print();
    cout << endl;

    cout << "Color 3: ";
    color3.print();
    cout << endl;

    cout << "Color 4: ";
    color4.print();
    cout << endl;

    // Demonstrate use of getters
    cout << "Color 1 components - Red: " << color1.getRed() 
         << ", Green: " << color1.getGreen() 
         << ", Blue: " << color1.getBlue() << endl;

         cout << "Color 2 components - Green: " << color2.getRed() 
         << ", Green: " << color2.getGreen() 
         << ", Blue: " << color2.getBlue() << endl;

          cout << "Color 3 components - Green: " << color3.getRed() 
         << ", Green: " << color3.getGreen() 
         << ", Blue: " << color3.getBlue() << endl;

          cout << "Color 2 components - Green: " << color4.getRed() 
         << ", Green: " << color4.getGreen() 
         << ", Blue: " << color4.getBlue() << endl;
   
    return 0;
}