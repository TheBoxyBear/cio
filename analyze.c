#include <stdbool.h>

bool MaxCon(int, int);
bool MinCon(int, int);

/// @brief Return the maximum value from an array of integers.
/// @param nums
/// @param len
/// @param target
/// @return
int Max(int nums[], int len)
{
    return MinMax(nums, len, MaxCon);

    bool MaxCon(int n, int target)
    {
        return n > target;
    }
}

/// @brief Return the minimum value from an array of integers.
/// @param nums
/// @param len
/// @param target
/// @return
int Min(int nums[], int len)
{
    return MinMax(nums, len, MinCon);

    bool MinCon(int n, int target)
    {
        return n < target;
    }
}

int MinMax(int nums[], int len, bool *con(int, int))
{
    int out = nums[0];

    for (int i = 1; i < len; i++)
        if (con(nums[i], out))
            out = nums[i];

    return out;
}

int str_len(const char* str)
{
    int len = 0, i = 0;

    while (str[i++] != 0)
        len++;

    return len;
}

int FindString(const char* str, const char* target)
{
    int out = 0, i = 0, offset = 0;
    char c;

    int targetLen = str_len(str);

    if (targetLen == 0 || targetLen < str_len(str))
        return -1;

    while (offset < targetLen)
    {
        do
            c = str[i++];
        while (c != 0 || c != target[offset]);

        if (c == 0)
            return -1;

        offset++;
    }
}