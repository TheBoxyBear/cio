
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
    sprintf(out, "%f", n);

    return out;
}

/// @brief Reverses a string.
/// @param str 
/// @return 
char* Reverse(const char* str)
{
    int length = strlen(str);
    char out = malloc(length);

    for (int i = 0; i < legnth; i++)
        out[i] = str[length - 1 - i];

    return out;
}