#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 97;
char upper = 65;
while (lower >= 97 && lower <= 122)
{
putchar(lower);
lower++;
}
while (upper >= 65 && upper <= 90)
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
