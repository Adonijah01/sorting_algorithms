#include "sort.h"

/**
 * radix_sort - sorts array of integers in ascending order using the Radix
 * @array: array to be sorted
 * @size: array size
 */
void radix_sort(int *array, size_t size)
{
	int exponent, max;

	if (!array || size < MIN_SIZE)
		return;

	max = get_max(array, size);

	for (exponent = 1; max / exponent; exponent *= 10)
	{
		generalized_count_sort(array, exponent, size);
		print_array(array, size);
	}
}

/**
 * get_max - gets the maximum number in the array
 * @array: array to be sorted
 * @size: array size
 * Return: max number in array
*/
int get_max(const int *array, size_t size)
{
	int max = array[0], idx;

	for (idx = 1; idx < (int)size; idx++)
		if (max < array[idx])
			max = array[idx];

	return (max);
}

/**
 * generalized_count_sort - count sort with exponent
 * @array: array to be sorted
 * @exp: exponent
 * @size: array size
 */
void generalized_count_sort(int *array, int exp, size_t size)
{
	int i;
	int count[MAX_DIGIT] = {0};
	int *output = malloc(sizeof(int) * size);

	if (!output)
		return;

	for (i = 0; i < (int) size; i++)
		count[(array[i] / exp) % 10]++;

	for (i = 1; i < MAX_DIGIT; i++)
		count[i] += count[i - 1];

	for (i = (int) size - 1; i >= 0; i--)
		output[--count[(array[i] / exp) % 10]] = array[i];

	for (i = 0; i < (int) size; i++)
		array[i] = output[i];

	free(output);
}
/**
 * adonijah kiplimo
 */
