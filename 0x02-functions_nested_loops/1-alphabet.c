#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i = 0;
char alphabet;

while (i < 10)
{
alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
i++;
}
}
