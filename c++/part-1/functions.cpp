#include <iostream>

int addWithHeaderAndExplicitParams(int arg1, int arg2);

int addWithHeaderAndTypeParams(double, double);

int addWithBody(int arg1, int arg2)
{
    return arg1 + arg2;
}

int functionWithNoArguments()
{
    return 1;
}

void accessFunctionName()
{
    std::cout << "Entering function " << __func__ << std::endl;

    return;
}

auto cppAlternative1(int value) -> int
{
    std::cout << "This is an alternative way of declaring functions in C++" << std::endl;

    return 0;
}

auto cpp14AlternativeWithTypeDeduction()
{
    return true;
}

int main()
{
    std::cout << addWithHeaderAndExplicitParams(1, 2) << std::endl;
    std::cout << addWithHeaderAndTypeParams(1.2f, 2.1f) << std::endl;
    std::cout << addWithBody(3, 4) << std::endl;
    std::cout << functionWithNoArguments() << std::endl;
    accessFunctionName();

    std::cout << cppAlternative1(1) << std::endl;
    std::cout << cpp14AlternativeWithTypeDeduction() << std::endl;

    return 0;
}

int addWithHeaderAndExplicitParams(int arg1, int arg2)
{
    return arg1 + arg2;
}

int addWithHeaderAndTypeParams(double arg1, double arg2)
{
    return static_cast<int>(arg1) + static_cast<int>(arg2);
}