//Program in switch expression is of enumeration type
#include <iostream>
using namespace std;

class Fruit {
public:
    enum fruits { MANGO, PAPAYA, ORANGE };
};

int main() {
    Fruit::fruits favorite = Fruit::ORANGE;

    switch (favorite) {
        case Fruit::MANGO:
            cout << "Favourite is mango" << endl;
            break;
        case Fruit::PAPAYA:
            cout << "Favourite is papaya" << endl;
            break;
        case Fruit::ORANGE:
            cout << "Favourite is orange" << endl;
            break;
        default:
            cout << "Invalid choice of fruit" << endl;
            break;
    }

    return 0;
}