#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
void (*f)(char *);
void print_name(char *name, void (*f)(char *));




#endif