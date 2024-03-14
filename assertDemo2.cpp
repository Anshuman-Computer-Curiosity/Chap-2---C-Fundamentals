#include <iostream>

template<int  count>
void checkPositive() {
    static_assert(count > 0, "count must be positive");
}

int main() {
    const int count = -8;
    checkPositive<count>(); // compile-time check
    std::cout << "Count is positive." << std::endl;
    return 0;
}