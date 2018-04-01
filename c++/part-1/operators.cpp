#include <iostream>

int main()
{
    int someInteger = 256;
    short someShort ;
    long someLong;
    float someFloat;
    double someDouble;

    someInteger++;
    someInteger *= 2;
    someShort = static_cast<short>(someInteger);
    someLong = someShort * 10000;
    someFloat = someLong + 0.785f;
    someDouble = static_cast<double>(someFloat) / 100000;

    std::cout << someDouble << std::endl;

    int i = 34 + 8 * 2 + 21 / 7 % 2;
    int j = 34 + (8 * 2) + ((21 / 7) % 2);

    std::cout << "!!!Operator precedence:" << std::endl;
    std::cout << "C++ evaluates *, / and % first followed by addition and subtraction, then the bitwise operators." << std::endl;

    return 0;
}
