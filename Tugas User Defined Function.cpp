#include <iostream>
#include <cmath>   // untuk sqrt() and pow()
using namespace std;

//Konstanta nilai PI
const double PI = 3.1416;

// Fungsi untuk mencari jarak antara dua titik 
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi untuk mencari jari-jari lingkaran (radius)
double radius(double xCenter, double yCenter, double xPoint, double yPoint) {
    return distance(xCenter, yCenter, xPoint, yPoint);
}

// Fungsi untuk mencari keliling lingkaran (circumference)
double circumference(double r) {
    return 2 * PI * r;
}

// Fungsi untuk mencari luas lingkaran (area)
double area(double r) {
    return PI * pow(r, 2);
}

// Inti Fungsi
int main() {
    double xCenter, yCenter;
    double xPoint, yPoint;

    // Input: pusat dan titik pada lingkaran
    cout << "Enter the center of the circle (x1 y1): ";
    cin >> xCenter >> yCenter;

    cout << "Enter a point on the circle (x2 y2): ";
    cin >> xPoint >> yPoint;

    // Mengkalkulasi radius, diameter, circumference, dan area
    double r = radius(xCenter, yCenter, xPoint, yPoint);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    // Output hasil.
    cout << "\nCircle properties:\n";
    cout << "Radius: " << r << endl;
    cout << "Diameter: " << d << endl;
    cout << "Circumference: " << c << endl;
    cout << "Area: " << a << endl;
}


