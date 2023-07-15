#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int upper = 0;
while (upper < 10)
{
putchar('0' + upper);
if (upper < 9)
{
putchar(',');
putchar(' ');
}
upper++;
}
putchar('\n');
return (0);
}
