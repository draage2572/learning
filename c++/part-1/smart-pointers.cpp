#include <iostream>
#include <memory>

struct MyStruct {
    int field1;
    int field2;
};

int main()
{
    /**
     * C style way
     */
    MyStruct* myStruct = new MyStruct;
    delete myStruct;
    myStruct = nullptr;

    /**
     * Can be used as a normal pointer
     * Smart pointer C++14
     */
    auto smartStruct14 = std::make_unique<MyStruct>();
    smartStruct14->field1 = 1;
    smartStruct14->field2 = 2;

    std::cout << smartStruct14->field1 << smartStruct14->field2 << std::endl;

    /**
     * Can be used as a normal pointer
     * Smart pointer C++
     */
    std::unique_ptr<MyStruct> smartStruct(new MyStruct);
    smartStruct->field1 = 3;
    smartStruct->field2 = 4;

    std::cout << smartStruct->field1 << smartStruct->field2 << std::endl;

    return 0;
}
