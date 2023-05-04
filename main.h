#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printChar(char c);
int _strlen(char *str);
char *_strcat(char *destination, const char *source);
char *parseInt(int d);
int printDecimal(int d);
int printString(char *s);

#endif
