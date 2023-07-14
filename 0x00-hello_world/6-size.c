#include <stdio.h>
/**
 * main - prints the phrase "Programming is like building a multilingual puzzle
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
char i;
int b;
long c;
long long d;
float e;
printf("Size of a char: %zu byte(s)\n", sizeof(i));
printf("Size of an int: %zu byte(s)\n", sizeof(b));
printf("size of a long int: %zu byte(s)\n", sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
printf("Size of a float: %zu byte(s)\n", sizeof(e));
fprintf(stderr, "[Anything]");
return (0);
}
