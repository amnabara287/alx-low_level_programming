#include "main.h"
/**
* print_last_digit - utilizes on the _putchar funtion
*@n: checks input
*Return: return 1 or 0
*/
int print_last_digit(int n)
{
int lastdigit;
if (n < 0)
lastdigit = -1 * (n % 10);
else
lastdigit = n % 10;
_putchar(lastdigit + '0');
return (lastdigit);
}
