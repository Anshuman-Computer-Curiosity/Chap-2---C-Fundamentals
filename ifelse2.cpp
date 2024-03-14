#include <iostream>
using namespace std;

int main() {
    double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;
   
    if (angle < 90.0) {
        cout << "The angle is acute." << endl;
    } else if (angle == 90.0) {
            cout << "The angle is right." << endl;
            } else if (angle > 90.0 && angle < 180.0) {
                     cout << "The angle is obtuse." << endl;
                    } else if (angle == 180.0) {
                            cout << "The angle is straight." << endl;
                            } else if (angle > 180.0 && angle < 360.0) {
                                    cout << "The angle is reflex." << endl;
                                    } else {
                                        cout << "Invalid angle." << endl;
                                    }

    return 0;
}