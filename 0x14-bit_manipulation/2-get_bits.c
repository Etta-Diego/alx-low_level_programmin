#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int var, result;

if (index > (sizeof(unsigned int) * 8 - 1))
{
return (-1);
}

var = 1 << index;


