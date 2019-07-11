#include <iostream>
#include "uniqueness_of_string.hpp"
#include "palindrome_permutation.hpp"
namespace
{
    void test_uniqueness(std::string const & input)
    {
        std::cout << std::boolalpha << std::endl;
        std::cout << input << std::endl;
        std::cout << IsStringUnique(input) << std::endl;
    }

    void test_palindrome_permutation(std::string const & input)
    {
        PalindromePermutation(input);
    }

    void test0()
    {
        test_uniqueness("ABCDEFGHIJKLMNOPQRSTUVWXYZ.");
        test_uniqueness("AABCDEFGHIJKLMNOPQRSTUVWXYZ.");
        test_uniqueness("ABCDEFGHIJKLMNOPQRSTUVWXYZ..");
        test_uniqueness("AABCDEFGHIJKLMNOPQRSTUVWXYZ.");
        test_uniqueness("Hi, my name is jang jaejun.");
    }

    void test1()
    {
        test_palindrome_permutation("pact");
        test_palindrome_permutation("abcdefffffedcba");
        test_palindrome_permutation("tcapact");
        test_palindrome_permutation("aabbaa");
    }

}

int main(int argc, char** /* argv*/)
{
    if(argc <= 1)
    {
        test0();
        test1();
    }
    else
    {
        
    }
    


    return 0;
}