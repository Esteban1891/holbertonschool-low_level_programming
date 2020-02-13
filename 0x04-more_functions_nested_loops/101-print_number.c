#include "holberton.h"

/**
 * print_number -  Entry point
 * @n: Entry variable
 */
void print_number(int n)
{
char e1, e2, e3, e4;
unsigned int num;
if (n >= 0 && n <= 9)
{
e1 = n;
_putchar(e1 + '0');
}
if (n >=  10 && n <= 99)
{
e1 = n / 10;
e2 = n % 10;
_putchar(e1 + '0'), _putchar(e2 + '0');
}
if (n >= 100 && n <= 999)
{
e1 = n / 100;
e2 = (n / 10) % 10;
e3 = n % 10;
_putchar(e1 + '0');
_putchar(e2 + '0');
_putchar(e3 + '0');
}
if (n >= 1000 && n <= 9999)
{
e1 = n / 1000;
e2 = (n / 100) % 10;
e3 = (n % 100) / 10;
e4 = n % 10;
_putchar(e1 + '0');
_putchar(e2 + '0');
_putchar(e3 + '0');
_putchar(e4 + '0');
}
if (n <= -10 && n >= -99)
{
num = n * (-1);
e1 = num / 10;
e2 = num % 10;
_putchar('-'), _putchar(e1 + '0'), _putchar(e2 + '0');
}
}
