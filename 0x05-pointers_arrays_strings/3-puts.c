#include "main.h"
/**
 *_puts - prints a string + newline
 *
 *@str:input
 *
 *Return:void
 *
 */
void _puts(char *str)
{
  for(; *str != '\0'; str++)
    {
      _putchar(*str);
    }
  _putchar('\0');
}
