#ifndef PALINDROME_PERMUTATION
#define PALINDROME_PERMUTATION
#include <iostream>
#include <algorithm>
#include <utility>
#ifndef CHAR_COUNT
#define CHAR_COUNT 256
#endif

std::pair<char, unsigned int> IsOddCharExist(std::string const & input)
{
    char char_counter[CHAR_COUNT] = {};
    unsigned int odd_count = 0;
    char odd_char;

    for(char const & character : input)
        char_counter[character]++;

    for(unsigned int i = 0; i < CHAR_COUNT; i++)
        if(char_counter[i] % 2)
        {
            odd_char = i;
            odd_count++;
        }


    return std::pair<char, unsigned int>(odd_char, odd_count);
}

void PopFromString(std::string & input, unsigned int index)
{
    unsigned int previous_size = 0;
    unsigned int after_size = 0;
}

void BuildPalindromePermutation(char const& odd_char, std::string elements, std::string output)
{
    unsigned int count = elements.size();
    if(!count)
    {
        std::cout << "Output : " << output << odd_char;
        std::reverse(std::begin(output), std::end(output));
        std::cout << output << std::endl;
        return;
    }

    for(unsigned int i = 0; i < count; i++)
    {
        std::string new_elements = i > 0 ? elements.substr(0, i) : std::string();
        std::string new_output = output;
        new_output.push_back(elements[i]);

        if(unsigned int j = i+1; j < count)
            new_elements += elements.substr(j, elements.size());

        BuildPalindromePermutation(odd_char, new_elements, new_output);
    }
}

void PalindromePermutation(std::string const & input)
{
    std::pair<char, unsigned int> odd_char = IsOddCharExist(input);
    if(odd_char.second > 1)
    {
        std::cout << "This string can not be palindrome permutation." << std::endl;
        return;
    }

    unsigned int table[CHAR_COUNT] = {}; // Init with 0;
    bool table_checklist[CHAR_COUNT] = {};// Init with 0 == false;

    for(char const & character : input)
        table[character]++;
       
    --table[odd_char.first];

    for(char const & character : input)
        if(!table_checklist[character]) // Prevent overlap.
        {
            table[character] /= 2;
            table_checklist[character] = true;
        }
        

    std::string string;
    for(char const & character : input)
        if(table[character])
        {
            string.push_back(character);
            table[character]--;
        }
    BuildPalindromePermutation(odd_char.first, string, std::string());
}

#endif