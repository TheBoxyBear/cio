#include <stddef.h>

void WriteBlank(void);

void WriteC(char c);
void WriteCLine(char c);

void Write(const char*);
void WriteF(const char*, size_t size);

void WriteLine(const char* str);
void WriteLineF(const char* str, size_t size);
