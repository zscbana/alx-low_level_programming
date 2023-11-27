#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define READ_BUF_SIZE 1024

int _putchar(char c);
size_t read_textfile(const char *filename, size_t letters);

#endif
