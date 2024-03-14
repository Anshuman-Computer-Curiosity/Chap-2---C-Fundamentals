#include <iostream>
using namespace std;

enum Suit {diamonds, hearts, clubs, spades};

int main() {
    Suit mySuit = diamonds;
    cout << "Initial suit value: " << mySuit << endl;

    mySuit = hearts;
    cout << "Modified suit value: " << mySuit << endl;

    return 0;
}