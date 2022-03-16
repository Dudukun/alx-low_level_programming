#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{			
return (1);
}
else
{
return (0);
}
}
/**
 * test_islower - Test the _islower function
 *
 * @n: Number to pass to _islower function
 */
void test_islower(int n)
{
int r;

r = _islower(n);
putchar(r + '0');
putchar('\n');
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
test_islower('H');
return (0);
}

