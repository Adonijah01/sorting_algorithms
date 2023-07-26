#include "sort.h"

/**
 * swap_ints - Swapintegerz in a array.
 * @a: first integr to swap
 * @b: Second integr swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sort array  integers in order of ascending.
 * @array: array of integes to sort
 * @size: size of array
 *
 * Description: prints rray after aech swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
/**
 * adonijah kiplimo
 *
 */
