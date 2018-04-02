#include <iostream>
#include <stdexcept>

void tryToDivide()
{
    int number = 100;
    int divider;

    std::cout << "Give a 0 value: ";
    std::cin >> divider;
    std::cout << std::endl;

    if (divider == 0)
    {
        throw std::invalid_argument("Denominator cannot be 0.");
    }

    std::cout << number / divider << std::endl;

    return;
}

int main()
{
    try
    {
        tryToDivide();
    }
    catch (const std::exception &exception)
    {
        std::cout << "Exception caught: " << exception.what() << std::endl;
    }

    return 0;
}
