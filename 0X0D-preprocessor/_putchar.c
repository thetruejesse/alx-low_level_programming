#include <unistd.h>
/*
 * _putchar writes the char c to stdout
 * @c is the character to print
 *
 * return success 1
 * return on err -1 and errno is set
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
