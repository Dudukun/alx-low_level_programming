#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int n, i;
i = 0;
while (i < 10)
{
for (n = 'a' ; n <= 'z'; n++)
{
putchar(n);
}

i++;
putchar('\n');
}


}
