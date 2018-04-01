#include <iostream>

void func(char* string)
{
    std::cout << "char* version" << std::endl;

    return;
}

void func(int number)
{
    std::cout << "int version" << std::endl;

    return;
}

/**
 * ALWAYS pair new with delete
 * ALWAYS pair new[] with delete[]
 *
 * new[] and delete causes memory leaks
 *
 * @return
 */
int main()
{
    /**
     * Create an array that takes a variable as size
     */
    int arraySize = 8;
    int* myVariableSizedArray = new int[arraySize];

    myVariableSizedArray[1] = 20;
    // the other elements of the array are 0 initialized
    std::cout << myVariableSizedArray[0] << myVariableSizedArray[1] << std::endl;

    /**
     * Deallocate the memory with delete[]
     */
    delete[] myVariableSizedArray;
    myVariableSizedArray = nullptr;

    /**
     * Normally you would expect func(NULL) to call func(char*) since NULL in C was used to initialize a null pointer.
     * In C NULL is also treated as 0 so the func(int) would be called.
     * C++ introduces a true null pointer to solve this: nullptr.
     */

    /*
     * func(NULL); // should show the output for the int version (compiler actually throws an error - ambiguous overloaded function)
     */
    //func(nullptr); // should solve the issue and show the output for the char* version

    return 0;
}
