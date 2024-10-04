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
    Color (int r) : red(r), green(0), blue(0) {}

    //partial constructor for red and green
    Color (int r, int g) : red(r), green (g), blue (0) {}

    //partial constructor for green and blue
    //Color (int g,int b) : red(0), green (g), blue (b) {}


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

    //using the default constructor
    Color color1;

    //using the parameter constructor
    Color color2 (255, 0, 0);

    //using partial Constructor for red only
    Color color3 (128);

    //using partial for red and green
    Color color4 (0, 255);

      

    //using setter method

    Color color5; 
        color5.setRed(128);
        color5.setGreen(128);
        color5.setBlue(128);

    
    cout << "Color 1 (Default): ";
    color1.print();
    cout << endl;

    cout << "Color 2 (Full Parameters): ";
    color2.print();
    cout << endl;

    cout << "Color 3 (Red Only): ";
    color3.print();
    cout << endl;

    cout << "Color 4 (Red and Green): ";
    color4.print();
    cout << endl;

    cout << "Color 5 (Setters): ";
    color5.print();
    cout << endl;

    // Demonstrate use of getters
    cout << "Color 1 components - red: " << color1.getRed() 
         << ", Green: " << color1.getGreen() 
         << ", Blue: " << color1.getBlue() << endl;

    cout << "Color 2 components - red: " << color2.getRed() 
         << ", Green: " << color2.getGreen() 
         << ", Blue: " << color2.getBlue() << endl;

    cout << "Color 3 components - red: " << color1.getRed() 
         << ", Green: " << color3.getGreen() 
         << ", Blue: " << color3.getBlue() << endl;

    cout << "Color 4 components - red: " << color4.getRed() 
         << ", Green: " << color4.getGreen() 
         << ", Blue: " << color4.getBlue() << endl;

    cout << "Color 5 components - red: " << color5.getRed()
        << ", Green: " << color5.getGreen()
        << ", Blue: " << color5.getBlue() << endl;
    
   
    return 0;
}