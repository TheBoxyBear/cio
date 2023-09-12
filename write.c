#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/// @brief Adds an empty line to the standard output.
void WriteBlank(void)
{
    fwrite("\n", sizeof(char), 1, stdout);
}

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
    WriteBlank();
}

/// @brief Outputs a string of indetermite length.
/// @param str
void Write(const char* str)
{
    fwrite(str, sizeof(char), strlen(str), stdout);
}
/// @brief Outputs a string.
/// @param str
/// @param len Length of the string
void WriteF(const char* str, size_t len)
{
    fwrite(str, sizeof(char), len, stdout);
}

/// @brief Outputs a string of indetermite length on a new line.
/// @param str
void WriteLine(const char* str)
{
    fwrite(str, sizeof(char), strlen(str), stdout);
    fwrite("\n", sizeof(char), 1, stdout);
}
/// @brief Outputs a string on a new line.
/// @param str
void WriteLineF(const char* str, size_t size)
{
    fwrite(str, sizeof(char), size, stdout);
    fwrite("\n", sizeof(char), 1, stdout);
}
