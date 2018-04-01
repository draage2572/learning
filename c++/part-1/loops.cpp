#include <iostream>
#include <array>

int main()
{
    /**
     * While
     *  - loops until the condition is proven false
     *  - can use break to terminate the loop
     *  - can use continue to skip over a step
     *  !! do not use break and continue - causes a haphazard execution of the code - valid for any loop
     *
     * while (condition) {
     *  ...
     * }
     */
    int i = 0;
    while (i < 5)
    {
        std::cout << "This is silly" << std::endl;
        ++i;
    }

    /**
     * Do .. While
     *
     * do {
     *  ...
     * } while (condition);
     */
    int j = 100;
    do
    {
        std::cout << "This is silly but once" << std::endl;
        j++;
    } while (j < 5);

    /**
     * For
     *
     * for (initializer, condition, increment) {
     *  ...
     * }
     */
    for (int k = 0; k < 10; k++)
    {
        std::cout << "This will print only 10 times" << std::endl;
    }

    /**
     * Ranged For
     *  - works on c style arrays
     *  - works on initializer lists
     *  - works on any type that has a begin() and end() method returning iterators (std::array, std::..containers)
     *
     * for (type value : collection) {
     *  ...
     * }
     */
    std::array<int, 3> myArray = {1, 2, 3};
    for (int value : myArray)
    {
        std::cout << "Grab the value and print " << value << std::endl;
    }

    return 0;
}
