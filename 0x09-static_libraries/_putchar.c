#include <unistd.h>
<<<<<<< HEAD
/**
 * _putchar - writes the character c in stdout
 * @c: is the character to print
 *
 * Return: 1 on success
 * On error, =1 is returned, and errno is set accordingly
=======

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> 347dd166ba93ea38746a3496115b54db0081630e
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
