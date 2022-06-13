#include "main.h"

/**
 * _strlen - function with 1 argument
 * @s: char type pointer
 *
 * Description: strlen similiar function to return length
 * Return: string
 */
int _strlen(char *s)
{
int u;
u  = 0;
while (s[u]  != '\0')
{
u++;
}
return (u);
}
