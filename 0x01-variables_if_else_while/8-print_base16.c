#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char upper = 97;
int i = 0;
for (i = 0; i <= 9; i++)
putchar('0' + i);
while (upper >= 97 && upper <= 102)
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
