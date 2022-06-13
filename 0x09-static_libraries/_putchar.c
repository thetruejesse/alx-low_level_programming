#include <unistd.h>
/**
 * _putchar - writes the character c in stdout
 * @c: is the character to print
 *
 * Return: 1 on success
 * On error, =1 is returned, and errno is set accordingly
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
