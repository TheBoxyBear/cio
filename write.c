#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void WriteC(char c)
{
    fwrite(c, sizeof(char), 1, stdout);
}
void WriteCLine(char c)
{
    fwrite(c, sizeof(char), 1, stdout);
    fwrite("\n", sizeof(char), 1, stdout);
}

void Write(const char* str)
{
    fwrite(str, sizeof(char), sizeof(str), stdout);
}
void WriteLine(const char* str)
{
    fwrite(str, sizeof(char), sizeof(str), stdout);
    fwrite("\n", sizeof(char), 1, stdout);
}

char* i_to_string(int n)
{
    char* out = malloc(20);
    sprintf(out, "%d", n);

    return out;
}
char* f_to_string(float n)
{
    char* out = malloc(20);
    sprintf(out, "%d", n);

    return out;
}
