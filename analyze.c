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
}
bool MaxCon(int n, int target)
{
    return n > target;
}

/// @brief Return the minimum value from an array of integers.
/// @param nums
/// @param len
/// @param target
/// @return
int Min(int nums[], int len)
{
    return MinMax(nums, len, MinCon);
}
bool MinCon(int n, int target)
{
    return n < target;
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

    int strLen = str_len(str), targetLen = str_len(target);
    bool inWord = false;

    if (strLen == 0 || targetLen == 0 || strLen < targetLen)
        return -1;

    while (true)
        if (inWord)
        {
            // Traverse the target and compare until the end of the target or not matching character is reached
            do
            {
                c = str[i++];
            } while (c == target[offset++] && i < targetLen);

            if (offset == targetLen)
                return i - targetLen;

            inWord = false;
        }
        else
        {
            // Move to the start and keep track if there room left for the target
            do
                c = str[i++];
            while (c != 0 && c != target[0] && strLen - i >= targetLen);

            // Check if the end was reached before finding
            if (i == strLen)
                return -1;
            else
            {
                inWord = true;
                offset = 1;
            }
        }
}
