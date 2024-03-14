#include <iostream>

void checkCount(  int count) {
    static_assert(count > 0, "Count must be positive");
    std::cout << "Count is positive" << std::endl;
}

int main() {
    int count1 = 5;
    checkCount(count1);
   
    int count2 = 0;
    checkCount(count2);

    return 0;
}