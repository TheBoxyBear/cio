#include "write.h"
#include <stdio.h>

/// @brief Reads a character from the user.
/// @param prompt Text to display before the input.
/// @return
char ReadChar(const char* prompt)
{
    Write(prompt);

    char out;
    scanf_s("%c", &out);

    return out;
}

/// @brief Reads an integer from the user.
/// @param prompt Text to display before the input.
/// @return
int ReadNum(const char* prompt)
{
    Write(prompt);

    int out;
    scanf_s("%d", &out);

    return out;
}

/// @brief Reads a float from the user.
/// @param prompt Text to display before the input.
/// @return
float ReadNumF(const char* prompt)
{
    Write(prompt);

    float out;
    scanf_s("%f", &out);

    return out;
}

/// @brief Reads a double from the user.
/// @param prompt Text to display before the input.
/// @return
double ReadNumD(const char* prompt)
{
    Write(prompt);

    double out;
    scanf_s("%lf", &out);

    return out;
}