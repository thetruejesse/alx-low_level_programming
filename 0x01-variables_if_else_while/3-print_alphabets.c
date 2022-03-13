#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
char lowalpha;
char upalpha;

for (upalpha = 'A'; upalpha <= 'Z'; upalpha++)
{
putchar(upalpha);
}
for (lowalpha = 'a'; lowalpha <= 'z'; lowalpha++)
{
putchar(lowalpha);
}
return (0);
}
