#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/// @brief Outputs a single character.
/// @param c 
void WriteC(char c)
{
    fwrite(&c, sizeof(char), 1, stdout);
}
/// @brief Outputs a single character on a new line.
/// @param c 
void WriteCLine(char c)
{
    fwrite(&c, sizeof(char), 1, stdout);
    fwrite("\n", sizeof(char), 1, stdout);
}

/// @brief Outputs a string.
/// @param str
void Write(const char* str)
{
    fwrite(str, sizeof(char), sizeof(str), stdout);
}

/// @brief Outputs a sstring on a new line.
/// @param str
void WriteLine(const char* str)
{
    fwrite(str, sizeof(char), sizeof(str), stdout);
    fwrite("\n", sizeof(char), 1, stdout);
}

/// @brief Converts an integer to a string.
/// @param n 
/// @return 
char* i_to_string(int n)
{
    char* out = malloc(20);
    sprintf(out, "%d", n);

    return out;
}

/// @brief Converts a float to a string.
/// @param n 
/// @return 
char* f_to_string(float n)
{
    char* out = malloc(20);
    sprintf(out, "%d", n);

    return out;
}
