#include <stdio.h>

char ReadChar(const char* prompt)
{
    char out;
    scanf("%c", &out);

    return out;
}

int ReadNum(const char* prompt)
{
    int out;
    scanf("%d", &out);

    return out;
}

float ReadNumF(const char* prompt)
{
    float out;
    scanf("%d", &out);

    return out;
}