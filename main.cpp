#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14159265358979323846;

    double dFeet, dInches, h, aDegrees, angle, height;

    cout << "enter the distance in feet and inches: "<< endl;
    cin >> dFeet >> dInches;

    double distanceInInches = dFeet*12 + dInches;

    cout << "Enter the height: " << endl;
    cin >> h;

    cout << "Enter the angle in degrees: "<<endl;
    cin >> aDegrees;

    double aRadians = aDegrees * (pi/180);

    angle = tan(aRadians);

    height = (h * distanceInInches * angle)/12;

    cout << "The height of the tree is:" << height << "feet" <<endl;

    return 0;
}
