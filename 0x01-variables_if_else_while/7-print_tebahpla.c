#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 122;
while (lower <= 122 && lower >= 97)
{
putchar(lower);
lower--;
}
putchar('\n');
return (0);
}
