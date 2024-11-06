// c++ program that will calculate a class that can calculate area of rectangle ,triangle ,circle and square having same name 

#include <iostream>
#include <cmath> 
using namespace std;

class Shape {
public:
    
    double area(double length, double width) {
        return length * width;
    }

    double area(double base, double height, bool isTriangle) {
        return 0.5 * base * height;
    }

    double area(double radius) {
        return M_PI * radius * radius;
    }

    double area(int side) {
        return side * side;
    }
};

int main() {
    Shape shape;

    cout << "Area of Rectangle: " << shape.area(5.0, 3.0) << endl;

    cout << "Area of Triangle: " << shape.area(5.0, 3.0, true) << endl;

    cout << "Area of Circle: " << shape.area(4.0) << endl;

    cout << "Area of Square: " << shape.area(4) << endl;

    return 0;
}
