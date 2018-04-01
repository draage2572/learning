#include <iostream>
#include <string>

const std::string message = "A message like no other";

const std::string& method()
{
    return message;
}

int main()
{
    /**
     * C++ is able to determine the type of the variable using decltype or auto;
     */
    int x = 1;
    decltype(x) y = 2;

    auto z = 123;

    /**
     * But auto strips the const and reference qualifiers
     */
    auto resultAuto = method();
    // resultAuto will be of type string
    std::cout << resultAuto << std::endl;

    /**
     * C++ has a way of dealing with it
     */
    decltype(method()) resultDecltypeDup = method();
    // resultDecltypeDup will be of type const string&
    std::cout << resultDecltypeDup << std::endl;

    /**
     * Using auto
     */
    const auto& usingAuto = method();
    // now usingAuto will be also of type const string&
    std::cout << usingAuto << std::endl;

    /**
     * C++14 way
     */
    decltype(auto) resultDecltypeAuto = method();
    // now resultDecltypeAuto will also have the type const string&
    std::cout << resultDecltypeAuto << std::endl;

    return 0;
}
