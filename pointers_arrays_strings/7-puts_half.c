#include <stdio.h>

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to the string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int length = 0, start;
while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}

while (str[start] != '\0')
{
putchar(str[start]);
start++;
}
putchar('\n');
}
