#ifndef PALINDROME_PERMUTATION
#define PALINDROME_PERMUTATION
#include <iostream>

#ifndef CHAR_COUNT
#define CHAR_COUNT 256
#endif

bool IsCanBePalindromePermutation(std::string const & input)
{
    char char_counter[CHAR_COUNT] = {};
    unsigned int odd_count = 0;

    for(char const & character : input)
        char_counter[character]++;

    for(unsigned int i = 0; i < CHAR_COUNT; i++)
        if(char_counter[i] % 2)
            odd_count++;


    if(odd_count > 1)
        return false;
    
    return true;
}


#endif