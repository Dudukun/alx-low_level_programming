#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
print_alphabet();
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
