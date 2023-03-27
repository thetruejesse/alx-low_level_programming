/**
 * swap_int - Function that swaps 2 ints
 * @a: pointer to a
 * @b: pointer to b
 *
 * Return: nothing.
 */

void swap_int(int* a, int* b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
