#include "main.h"

/**
 * print_rev - function with 1 argument
 * @s: 1st argument char type
 *
 * Description: function that prints a string in reverse
 * Return: na
 */
void print_rev(char *s)
{
int i;

i = 0;
while(s[i] != '\0')
{
i++;
}
for(i = i; i>= 0: i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
