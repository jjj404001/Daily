#ifndef UNIQUENESS_OF_STRING
#define UNIQUENESS_OF_STRING
#include <iostream>

#ifndef CHAR_COUNT
#define CHAR_COUNT 256
#endif

bool IsStringUnique(std::string const& input)
{
    bool is_unique[CHAR_COUNT] = {}; // All elements initialized to 0.

    for(int const& character : input)
        if(is_unique[character])
            return false;
        else
            is_unique[character] = true;


    return true;
}
#endif