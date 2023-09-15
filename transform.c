#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "analyze.h"

/// @brief Converts an integer to a string.
/// @param n
/// @return
char* i_to_string(int n)
{
    const size_t size = 20;

    char* out = malloc(size);

    if (out == NULL)
        return NULL;

    sprintf_s(out, size, "%d", n);

    return out;
}

/// @brief Converts a float to a string.
/// @param n
/// @return
char* f_to_string(float n)
{
    const size_t size = 20;

    char* out = malloc(size);

    if (out == NULL)
        return NULL;

    sprintf_s(out, size, "%f", n);

    return out;
}

/// @brief Converts a stirng to a base 10 integer.
/// @param str
/// @return
int string_to_i(const char* str)
{
    char* out;

    return strtol(str, &out, 10);
}

/// @brief Reverses a string.
/// @param str
/// @return
char* Reverse(const char* str)
{
    int length = str_len(str);
    char* out = malloc(length);

    if (out == NULL)
        return NULL;

    for (int i = 0; i < length; i++)
        out[i] = str[length - 1 - i];

    out[length] = 0;

    return out;
}

/// @brief Sorts an array of bytes.
/// @param arr
/// @param len
void Sort(char arr[], int len)
{
    bool swap = false;

    do
    {
        for (int i = 1; i < len; i++)
        {
            swap = false;

            char* left = &arr[i - 1];
            char* current = &arr[i];

            if (*left > *current)
            {
                char tmp = *left;
                *left = *current;
                *current = tmp;

                swap = true;
            }
        }

        len--;
    }
    while (swap);
}

void Resize(char* str, int len, int newLen)
{
    if (len < 0)
        len = str_len(str);

    char* tmp = malloc(len + 1);

    if (tmp == NULL)
        return;

    strcpy_s(tmp, len + 1, str);

    free(str);
    str = malloc(newLen + 1);
    strcpy_s(str, newLen + 1, tmp);
    free(tmp);
}
