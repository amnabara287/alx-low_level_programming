#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 97;
while (lower >= 97 && lower <= 122)
{
if (lower != 101 && lower != 113)
{
putchar(lower);
}
lower++;
}
putchar('\n');
return (0);
}
