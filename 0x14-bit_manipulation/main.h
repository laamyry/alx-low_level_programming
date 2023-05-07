#ifndef _main_h
#define _main_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
unsigned long int _exp(unsigned int base, unsigned int exp);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);

#endif
