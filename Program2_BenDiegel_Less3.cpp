/* 
Program: Geometry calculator
Programmer: Ben Diegel
Date: 9/2/17
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int userDecision;
    const double PI = 3.14159;
    double area, radius, length, width, height, base;

    // first time the menu is prompted
    cout << "--Welcome to the Geometry calculator! Please make your decision--\n"
         << "1. Calculate the Area of a Circle\n"
         << "2. Calculate the Area of a Rectangle\n"
         << "3. Calculate the Area of a Triangle\n"
         << "4. Exit\n>>";
    cin >> userDecision;
    cout << "\n"; // used for just a new line (makes things neat)

    // uses a loop to allow the user to use the program multiple times without exiting
    while (userDecision != 4) {
        switch(userDecision) {
            case 1: {
                cout << "Please enter the radius of your circle\n>>";
                cin >> radius;

                area = pow((PI*radius), 2);
                cout << "A circle with the radius of " << radius << " has an area of "
                     << area << ".\n\n";
                
                cout << "--Welcome to the Geometry calculator! Please make your decision--\n"
                     << "1. Calculate the Area of a Circle\n"
                     << "2. Calculate the Area of a Rectangle\n"
                     << "3. Calculate the Area of a Triangle\n"
                     << "4. Exit\n>>";
                cin >> userDecision;  
                cout << "\n";
            }
            case 2: {
                cout << "Length of rectangle\n>>";
                cin >> length;
                cout << "Width of rectangle\n>>";
                cin >> width;
             
                area = length * width;
                cout << "A rectangle with a length of " << length << " and a width of "
                     << width << " has an area of " << area << ".\n\n";

                cout << "--Welcome to the Geometry calculator! Please make your decision--\n"
                      << "1. Calculate the Area of a Circle\n"
                      << "2. Calculate the Area of a Rectangle\n"
                      << "3. Calculate the Area of a Triangle\n"
                      << "4. Exit\n>>";
                cin >> userDecision;
                cout << "\n";
            }
            case 3: {
                cout << "Base of triangle\n>>";
                cin >> base;
                cout << "Height of triangle\n>>";
                cin >> height;

                area = base * height * .5;
                cout << "A triangle with a base of " << base << " and a height of "
                     << height << " has an area of " << area << ".\n\n";
                
                cout << "--Welcome to the Geometry calculator! Please make your decision--\n"
                     << "1. Calculate the Area of a Circle\n"
                     << "2. Calculate the Area of a Rectangle\n"
                     << "3. Calculate the Area of a Triangle\n"
                     << "4. Exit\n>>";
                cin >> userDecision;
                cout << "\n";
            }
            case 4: {
                break; // if the 4th option is chosen, the switch statment breaks and the while loop stops
            }
        }
    }
}