#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("the size of an integer is: %ld", sizeof(int));
	printf("the size of long int: %ld \n", sizeof(long int));
	printf("the size of a char: %ld \n", sizeof(char));
	printf("the size of a float %ld \n", sizeof(float));
	return(0);
}
