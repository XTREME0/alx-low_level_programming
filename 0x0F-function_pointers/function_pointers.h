#ifndef HEARDER
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));
#endif