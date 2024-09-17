#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double pi = 3.14159, radius, circumference, area;
    cout << " Enter the radius of the circle: ";
    cin >> radius;

    area= pi * sqrt(radius);
    circumference = 2 * pi * radius;
    cout << "The circumference of the circle is: " << circumference << endl;
  cout << "The area of the circle is: " << area << endl;
   return 0;}

