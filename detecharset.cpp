#include <iostream>
#include <locale>

int main() {
    std::locale loc("C");
    std::cout << "The character set used by the C locale is: " << loc.name() << std::endl;
    return 0;
}