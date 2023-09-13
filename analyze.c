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
    return MinMax(nums, len, target, MaxCon);
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
    return MinMax(nums, len, target, MinCon);
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