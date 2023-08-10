#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
/*Variable declaration*/
unsigned int i;

for (i = 0; i < strlen(str); i++)
{
if (!isdigit(str[i])) /*check if str is an integer*/

{
return (0);
}

}
return (1);
}


/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{

/*Declaring variables*/

int i;

int str_to_int;
int sum = 0;
i = 1;

while (i < argc) /*Goes through the whole array*/

{

if (check_num(argv[i]))


{
str_to_int = atoi(argv[i]); /*ATOI --> convert string to int*/

sum += str_to_int;
}

/*if one of the number contains symbols that are not digits*/
else

{
printf("Error\n");

return (1);
}


i++;
}

printf("%d\n", sum); /*print sum*/
return (0);
}
