#include <iostream>
#include "uniqueness_of_string.hpp"

namespace
{
    void test_uniqueness(std::string const & input)
    {
        std::cout << std::boolalpha << std::endl;
        std::cout << input << std::endl;
        std::cout << IsStringUnique(input) << std::endl;
    }

    void test0()
    {
        test_uniqueness("ABCDEFGHIJKLMNOPQRSTUVWXYZ.");
        test_uniqueness("AABCDEFGHIJKLMNOPQRSTUVWXYZ.");
        test_uniqueness("ABCDEFGHIJKLMNOPQRSTUVWXYZ..");
        test_uniqueness("AABCDEFGHIJKLMNOPQRSTUVWXYZ.");
        test_uniqueness("Hi, my name is jang jaejun.");
    }

}

int main(int argc, char** /* argv*/)
{
    if(argc <= 1)
    {
        test0();
    }
    return 0;
}