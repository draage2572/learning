#include <iostream>

int main()
{
    float pi = 3.14f;
    int pi1 = (int)pi; // c style, most common
    int pi2 = int(pi); // more natural but rarely seen
    int pi3 = static_cast<int>(pi); // cleanest and the recommended method

    std::cout << pi << " being cast to integers" << std::endl;
    std::cout << pi1 << " is cast through the c way" << std::endl;
    std::cout << pi2 << " is cast through the c++ way, more natural but rarely seed" << std::endl;
    std::cout << pi3 << " is cast through the cleanest and most recommended method" << std::endl;

    return 0;
}