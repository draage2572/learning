#include <iostream>
#include <array>

int main()
{
    int uninitializedArray[3];
    uninitializedArray[0] = 1;
    uninitializedArray[1] = 2;
    uninitializedArray[2] = 3;

    constexpr int size = 3;
    int uninitializedArrayWithConstExpression[size];

    int initializedArray[] = {1};

    int initializedArrayOfSize3[] = {1, 2, 3};

    int initializeOnlyFirstValueOfArray[3] = {1};


    /**
     * C++ style arrays
     * - know their own size
     * - do not automatically get cast to a pointer
     */
    std::array<int, 3> cppStyleArray = {1, 2, 3};
    std::cout << "Array size " << cppStyleArray.size() << std::endl;
    std::cout << "Element 2 is " << cppStyleArray[1] << std::endl;

    return 0;
}
