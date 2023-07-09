#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *s)
{
    if (*s != '\0'){
        _putchar(*s);
	_puts_recursion(s + 1);
<<<<<<< HEAD
    } else
        _putchar('\n');
=======
    } else {
        _putchar('\n');
    }
>>>>>>> ac7213395dae822fa0e954a04f3688b0d79b2162
}
