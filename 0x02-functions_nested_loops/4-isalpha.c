#include "main.h"
/**
* _isalpha - utilizes on the _putchar funtion
*@c: checks input
*Return: return 1 or 0
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
{
return (1);
}
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
