#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{

int coins[] = {25, 10, 5, 2, 1};
int num;
int i;
int cents = 0;

if (argc != 2)
{
printf("Error\n");

return (1);
}

num = atoi(argv[1]);
cents = 0;

if (num < 0)
{

printf("0\n");
return (0);
}

i = 0;
while (i < 5 && num >= 0)
{

while (num >= coins[i])
{

cents++;
num -= coins[i];

}
i++;
}

printf("%d\n", cents);
return (0);
}

