#include <stdio.h>
#include "main.h"
/**
* _putchar - writes the charachter c to stdout
*@c: The charachter to print
*
*Return: Always 0.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
