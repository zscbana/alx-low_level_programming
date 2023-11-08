#ifndef FUNCATION_POINTERS_H
#define FUNCATION_POINTERS_H
#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));

#endif