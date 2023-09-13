#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/// @brief Converts an integer to a string.
/// @param n 
/// @return 
char* i_to_string(int n)
{
    const size_t size = 20;

    char* out = malloc(size);
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
    int length = strlen(str);
    char* out = malloc(length);

    for (int i = 0; i < length; i++)
        out[i] = str[length - 1 - i];

    return out;
}

/// @brief Swaps the values in two pointers.
/// @param a 
/// @param b 
void Swap(void* a, void* b)
{
    void* tmp = a;
    a = b;
    b = tmp;
}
/// @brief Swaps the values in two pointers by deferencing the first value.
/// @param a 
/// @param b 
void SwapRef(void* a, void* b)
{
    //void* tmp = *a;

    //*a = *b;
    //*b = tmp;
}

/// @brief Sorts an array of bytes.
/// @param arr 
/// @param len 
void Sort(char* arr, int len)
{
    bool swap = false;

    do
        for (int i = 1; i < len; i++)
        {
            swap = false;

            char* left = &arr[i - 1];
            char* current = &arr[i];

            if (*left > *current)
            {
                SwapRef(left, current);
                swap = true;
            }
        }
    while (swap);
}