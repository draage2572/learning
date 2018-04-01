#include <iostream>

int main()
{
    /**
     * If
     *
     * if (condition) {
     *  ...
     * } else if (condition) {
     *  ...
     * } else {
     *  ...
     * }
     */
    int value;
    if (value == 1) {
        std::cout << "This evaluates only if the value is 1" << std::endl;
    } else if (value == 200) {
        std::cout << "This evaluates only if the value is 200" << std::endl;
    } else {
        std::cout << "This evaluates if value is any other" << std::endl;
    }

    /**
     * Switch
     * !!! works only with integers
     *
     * switch (value) {
     *  case 1: ... break;
     *  case 2: ... break;
     *  default: ...;
     * }
     */
    switch (value) {
        case 1: std::cout << "Switch found value 1" << std::endl; break;
        case 200: std::cout << "Switch found value 200" << std::endl; break;
        default: std::cout << "Switch found no known value" << std::endl;
    }

    /**
     * Conditional operator
     *
     * condition ? value_if_true : value_if_false;
     */
    std::cout << ((value == 1) ? "is true" : "is false") << std::endl;

    return 0;
}
