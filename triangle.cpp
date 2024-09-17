#include<iostream>
using namespace std;

int main() {
    double v;       // base of the triangle
    double h;       // height of the triangle
    double area;    // area of the triangle

    cout << "Enter the base: ";
    cin >> v;
    cout << "Enter the height: ";
    cin >> h;

    area = 0.5 * v * h;    // calculating the area
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
