#include <stdio.h>

/// @brief Reads a character from the user.
/// @param prompt Text to display before the input.
/// @return 
char ReadChar(const char* prompt)
{
    char out;
    scanf("%c", &out);

    return out;
}

/// @brief Reads an integer from the user.
/// @param prompt Text to display before the input.
/// @return 
int ReadNum(const char* prompt)
{
    int out;
    scanf("%d", &out);

    return out;
}

/// @brief Reads a float from the user.
/// @param prompt Text to display before the input.
/// @return 
float ReadNumF(const char* prompt)
{
    float out;
    scanf("%d", &out);

    return out;
}